/*
 *	I2C Temp & Humi Sensor (SHT35) Sample for μT-Kernel 3.0 BSP2
 *
 *    Copyright (C) 2025 by Ken Sakamura.
 *    This software is distributed under the T-License 2.1.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2025/06.
 */

 #include <tk/tkernel.h>
#include <tm/tmonitor.h>
#include "thsns_app.h"

LOCAL void task_thsns(INT stacd, void *exinf);	// task execution function
LOCAL ID	tskid_thsns;			// Task ID number
LOCAL T_CTSK ctsk_thsns = {			// Task creation information
	.itskpri	= 10,
	.stksz		= 1024,
	.task		= task_thsns,
	.tskatr		= TA_HLNG | TA_RNG3,
};

LOCAL void task_thsns(INT stacd, void *exinf)
{
	ID	dd_i2c;
	UB	cmd[2], data[6];
	UW	temp, humi, x;
	SZ	asz;
	ER	err;

	dd_i2c = tk_opn_dev((UB*)I2C_DEVNM, TD_UPDATE);		// Open I2C device
	if(dd_i2c < 0) {
		tm_printf((UB*)"Open Error %d\n", dd_i2c);
		tk_wup_tsk((ID)stacd);				// Shoutdown system
	}

	// Sending commands to the sensor
	cmd[0] = 0x22; cmd[1] = 0x36;		// Measurement Commands for Periodic Data Acquisition Mode
	err = tk_swri_dev(dd_i2c, I2C_SADR, cmd, sizeof(cmd), &asz);
	if(err < E_OK) {
		tm_printf((UB*)"send cmd err = %d\n", err);
	}

	while(1) {
		tk_dly_tsk(500);	// Wait 0.5 seconds

		// Receiving data from sensors
		err = tk_srea_dev(dd_i2c, I2C_SADR, data, sizeof(data), &asz);
		if(err < E_OK) {
			tm_printf((UB*)"receive data err = %d\n", err);
			continue;
		}
		// Convert temperature and humidity data
		temp = ((UW)data[0]<<8) | data[1];
		temp = (temp*17500 >> 16) - 4500;
		humi = ((UW)data[3]<<8) | data[4];
		humi = humi*10000 >> 16;

		// Output data to UART
		x = temp / 100;
		tm_printf((UB*)"Temp : %2d.%2d  ", x, (temp - x * 100));
		x = humi /100;
		tm_printf((UB*)"Humi : %2d.%2d\n", x, (humi - x * 100));
	}
}


/* usermain関数 */
EXPORT INT usermain(void)
{
	tm_putstring((UB*)"Start User-main program.\n");

	/* Create & Start Tasks */
	tskid_thsns = tk_cre_tsk(&ctsk_thsns);
	tk_sta_tsk(tskid_thsns, tk_get_tid());

	tk_slp_tsk(TMO_FEVR);

	return 0;
}
