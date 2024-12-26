/*
 *----------------------------------------------------------------------
 *    micro T-Kernel 3.00.08.B0
 *
 *    Copyright (C) 2006-2024 by Ken Sakamura.
 *    This software is distributed under the T-License 2.2.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2024/12.
 *
 *----------------------------------------------------------------------
 */

/*
 *	sysdepend.h (ARMv8-M)
 *	System-Dependent local defined
 */

#ifndef _SYSDEPEND_CPU_CORE_SYSDEPEND_
#define _SYSDEPEND_CPU_CORE_SYSDEPEND_

/*
 * Dispatcher (dispatch.S)
 */
IMPORT void knl_dispatch_entry(void);		/* dispatch entry */
IMPORT void knl_dispatch_to_schedtsk(void);	/* force dispatch */

/*
 * Interrupt Control (interrupt.c)
 */
IMPORT UW knl_exctbl[];		/* Exception handler table (RAM) */
IMPORT UW *knl_exctbl_o;		// Exception handler table (Origin)
IMPORT void knl_systim_inthdr(void);	/* System-timer Interrupt handler */


/*
 *    Reset Handler (reset_hdl.c)
 */
IMPORT void Reset_Handler(void);		/* Reset Handler */

/*
 * Exception handler (exc_hdr.c)
 */
IMPORT void knl_nmi_handler(void);		/* 2: NMI Handler */
IMPORT void knl_hardfault_handler(void);	/* 3: Hard Fault Handler */
IMPORT void knl_memmanage_handler(void);	/* 4: MPU Fault Handler */
IMPORT void knl_busfault_handler(void);		/* 5: Bus Fault Handler */
IMPORT void knl_usagefault_handler(void);	/* 6: Usage Fault Handler */
IMPORT void knl_svcall_handler(void);		/* 11: Svcall */
IMPORT void knl_debugmon_handler(void);		/* 12: Debug Monitor Handler */

/*
 *	Kernel start routine (sys_start.c)
 */
IMPORT void knl_start_mtkernel(void);

/*
 * Task context block
 */
typedef struct {
	void	*ssp;		/* System stack pointer */

#if USE_SPMON
	void	*spsa;		/* Stack stat address */
	void	*spea;		/* Stack end address */
#endif
} CTXB;

/*
 *	Control register operation
 */

Inline UW knl_get_ipsr(void)
{
	UW	ipsr;
	Asm("mrs %0, ipsr": "=r"(ipsr));
	return ipsr;
}

Inline UW knl_get_xpsr(void)
{
	UW	xpsr;
	Asm("mrs %0, psr": "=r"(xpsr));
	return xpsr;
}

Inline UW knl_get_primask(void)
{
	UW	primask;
	Asm("mrs %0, primask": "=r"(primask));
	return primask;
}


#endif /* _SYSDEPEND_CPU_CORE_SYSDEPEND_ */
