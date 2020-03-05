/*
 *----------------------------------------------------------------------
 *    micro T-Kernel 3.00.00
 *
 *    Copyright (C) 2006-2019 by Ken Sakamura.
 *    This software is distributed under the T-License 2.1.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2019/12/11.
 *
 *----------------------------------------------------------------------
 */

/*
 *	machine.h
 *
 *	Machine type definition (RX231 IoT-Engine depended)
 */

#ifndef __SYS_SYSDEPEND_MACHINE_H__
#define __SYS_SYSDEPEND_MACHINE_H__

/*
 * [TYPE]_[CPU]		TARGET SYSTEM
 * CPU_xxxx		CPU type
 * CPU_CORE_xxx		CPU core type
 */

/* ----- RX231 IoT-Engine (CPU: RX231) definition ----- */
#undef _IOTE_RX231_

#define IOTE_RX231		1				/* Target system : RX231 IoT-Engine */
#define CPU_RX231		1				/* Target CPU : Renesas RX231 */
#define CPU_CORE_RXV2		1				/* Target CPU-Core : RX200 series*/

#define TARGET_DIR		iote_rx231			/* Sysdepend-Directory name */

/*
 **** CPU-depeneded profile (RX231)
 */
#include "../cpu/rx231/machine.h"


#endif /* __SYS_SYSDEPEND_MACHINE_H__ */
