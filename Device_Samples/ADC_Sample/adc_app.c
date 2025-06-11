/*
 *	A/D Converter sample for μT-Kernel 3.0 BSP2
 *
 *    Copyright (C) 2025 by Ken Sakamura.
 *    This software is distributed under the T-License 2.1.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2025/06.
 */

#include <tk/tkernel.h>
#include <tm/tmonitor.h>
#include "adc_app.h"

LOCAL void task_adsns(INT stacd, void *exinf);	// task execution function
LOCAL ID	tskid_adsns;			// Task ID number
LOCAL T_CTSK ctsk_adsns = {			// Task creation information
	.itskpri	= 10,
	.stksz		= 1024,
	.task		= task_adsns,
	.tskatr		= TA_HLNG | TA_RNG3,
};

LOCAL void task_adsns(INT stacd, void *exinf)
{
	ID	dd_adc;
	UW	data;
	SZ	asz;

	dd_adc = tk_opn_dev((UB*)ADC_DEVNM, TD_UPDATE);		// Open A/DC device
	if(dd_adc < 0) {
		tm_printf((UB*)"Open Error %d\n", dd_adc);
		tk_wup_tsk((ID)stacd);				// Shoutdown system
	}

	while(1) {
		tk_srea_dev(dd_adc, ADC_DEVCH0, &data, 1, &asz);	// Get analog input value (Arduino A0) 
		tm_printf((UB*)"A0 = %d\n", data);
		tk_dly_tsk(500);				// Wait 0.5 seconds
	}
}


/* usermain関数 */
EXPORT INT usermain(void)
{
	tm_putstring((UB*)"Start User-main program.\n");

	/* Create & Start Tasks */
	tskid_adsns = tk_cre_tsk(&ctsk_adsns);
	tk_sta_tsk(tskid_adsns, tk_get_tid());

	tk_slp_tsk(TMO_FEVR);

	return 0;
}
