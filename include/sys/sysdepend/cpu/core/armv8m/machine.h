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
 *	machine.h
 *
 *	Machine type definition (ARMv8-M)
 */

#ifndef _SYS_MACHINE_CORE_H_
#define _SYS_MACHINE_CORE_H_

/*
 * CPU_xxxx		CPU type
 * ALLOW_MISALIGN	1 if access to misalignment data is allowed 
 * BIGENDIAN		1 if big endian 
 */

/* ----- ARMv8-M definition ----- */

#define ALLOW_MISALIGN		0
#define INT_BITWIDTH		32

/*
 * Endianness
 */
#define BIGENDIAN		0	/* Default (Little Endian) */

#endif /* _SYS_MACHINE_CORE_H_ */
