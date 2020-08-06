/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2018 Texas Instruments Incorporated - http://www.ti.com/
 *	Lokesh Vutla <lokeshvutla@ti.com>
 */
#ifndef _ASM_ARCH_HARDWARE_H_
#define _ASM_ARCH_HARDWARE_H_

#ifdef CONFIG_SOC_K3_AM6
#include "am6_hardware.h"
#endif

#ifdef CONFIG_SOC_K3_J721E
#include "j721e_hardware.h"
#endif

/* Assuming these addresses and definitions stay common across K3 devices */
#define CTRLMMR_WKUP_JTAG_DEVICE_ID	0x43000018
#define DEVICE_ID_FAMILY_SHIFT	26
#define DEVICE_ID_FAMILY_MASK	(0x3f << 26)
#define DEVICE_ID_BASE_SHIFT	11
#define DEVICE_ID_BASE_MASK	(0x1fff << 11)
#define DEVICE_ID_SPEED_SHIFT	6
#define DEVICE_ID_SPEED_MASK	(0x1f << 6)
#define DEVICE_ID_TEMP_SHIFT	3
#define DEVICE_ID_TEMP_MASK	(0x7 << 3)

#define CTRLMMR_WKUP_JTAG_ID		0x43000014
#define JTAG_ID_VARIANT_SHIFT	28
#define JTAG_ID_VARIANT_MASK	(0xf << 28)
#define JTAG_ID_PARTNO_SHIFT	12
#define JTAG_ID_PARTNO_MASK	(0x7ff << 1)

#endif /* _ASM_ARCH_HARDWARE_H_ */
