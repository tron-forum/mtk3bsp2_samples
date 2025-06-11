/*
 *	I2C Temp & Humi Sensor (SHT35) Sample for μT-Kernel 3.0 BSP2
 *
 *    Copyright (C) 2025 by Ken Sakamura.
 *    This software is distributed under the T-License 2.1.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2025/06.
 */

 /* SHT35 Sensor I2C Address */
 #define	I2C_SADR			(0x45)

 /* Device name for each board */
#if defined(MTKBSP_EK_RA8D1)
	#if DEVCNF_USE_HAL_I3C_IIC
		#define	I2C_DEVNM	"htiica"
	#elif DEVCNF_USE_HAL_IIC
		#define	I2C_DEVNM	"hiica"
	#endif

#elif defined(MTKBSP_DISCOVERY_STM32N657)
	#define	I2C_DEVNM	"hiica"		// Arduino I2C

#elif defined(MTKBSP_EVK_XMC7200)
	#define	I2C_DEVNM	"hiicj"		// Arduino I2C

#endif

