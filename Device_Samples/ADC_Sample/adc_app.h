/*
 *	A/D Converter sample for μT-Kernel 3.0 BSP2
 *
 *    Copyright (C) 2025 by Ken Sakamura.
 *    This software is distributed under the T-License 2.1.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2025/06.
 */

/* Analog device name and channels for each board (Arduino A0)*/
#if defined(MTKBSP_EK_RA8D1) || defined(MTKBSP_EK_RA8M1)
	#define	ADC_DEVNM	"hadca"
	#define	ADC_DEVCH0	0

#elif defined(MTKBSP_DISCOVERY_STM32N657)
	#define	ADC_DEVNM	"hadcb"
	#define	ADC_DEVCH0	18

#elif defined(MTKBSP_EVK_XMC7200)
	#define	ADC_DEVNM	"hadcb"
	#define	ADC_DEVCH0	0

#endif

