include $(srctree)/drivers/misc/mediatek/Makefile.custom

# In case the platform does NOT support this type of sensors
obj-y   +=  mag.o
obj-y   +=  mag_factory.o

# Vanzo:wangfei on: Wed, 12 Nov 2014 21:06:42 +0800
project_name:=$(shell echo $(VANZO_INNER_PROJECT_NAME))
 
ifneq ($(project_name),)
custom_kernel_magnetometer:= $(addsuffix /, $(shell echo $(CUSTOM_KERNEL_MAGNETOMETER)))
ifneq ($(custom_kernel_magnetometer),)
obj-y += $(custom_kernel_magnetometer)
endif
else
# End of Vanzo:wangfei
ifeq ($(CONFIG_MTK_AKM8963_NEW),y)
obj-y	+=  akm8963-new/
endif

ifeq ($(CONFIG_MTK_BMM050_NEW),y)
obj-y	+=  bmm050-new/
endif

ifeq ($(CONFIG_MTK_BMM056_NEW),y)
obj-y	+=  bmm056-new/
endif
ifeq ($(CONFIG_MTK_AKM8963),y)
obj-y	+=  akm8963/
endif

ifeq ($(CONFIG_MTK_YAS532),y)
obj-y   +=  yamaha532/
endif

ifeq ($(CONFIG_MTK_AKM09911),y)
obj-y   +=  akm09911/
endif

ifeq ($(CONFIG_MTK_AKM09911_NEW),y)
obj-y   +=  akm09911-new/
endif
# Vanzo:wangfei on: Tue, 06 Jan 2015 10:34:15 +0800
# added for new structure config alsps
endif
# End of Vanzo:wangfei
