/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6795. Copyright MediaTek Inc. (C) 2013.
 * Thu Feb 18 20:45:42 2016
 * Do Not Modify the File.
 */



#include <linux/types.h>
#include <mach/mt_typedefs.h>
#include <mach/mt_pm_ldo.h>
void pmu_drv_tool_customization_init(void)
{
    pmic_ldo_enable(MT6331_POWER_LDO_VCAM_IO,KAL_TRUE);
}


