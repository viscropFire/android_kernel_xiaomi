
include $(srctree)/drivers/misc/mediatek/Makefile.custom

ifneq ($(CONFIG_ARCH_MTK_PROJECT),)
ARCH_MTK_PROJECT := $(shell echo $(CONFIG_ARCH_MTK_PROJECT))
obj-y   += core/
obj-y   += dct/dct/
endif

ifeq ($(CONFIG_MTK_SENSOR_SUPPORT),y)
# Vanzo:wangfei on: Wed, 12 Nov 2014 21:06:42 +0800
project_name:=$(shell echo $(VANZO_INNER_PROJECT_NAME))
ifneq ($(project_name),)
$(addprefix $(TOPDIR)$(LOCAL_PATH)/,$(LOCAL_PREBUILT_OBJ_FILES))
custom_kernel_alsps:= $(addprefix alsps/,$(addsuffix /, $(shell echo $(CUSTOM_KERNEL_ALSPS))))
custom_kernel_accelerometer:= $(addprefix accelerometer/,$(addsuffix /, $(shell echo $(CUSTOM_KERNEL_ACCELEROMETER))))
custom_kernel_magnetometer:= $(addprefix magnetometer/,$(addsuffix /, $(shell echo $(CUSTOM_KERNEL_MAGNETOMETER))))
custom_kernel_gyroscope:= $(addprefix gyroscope/,$(addsuffix /, $(shell echo $(CUSTOM_KERNEL_GYROSCOPE))))
custom_kernel_barometer:= $(addprefix barometer/,$(addsuffix /, $(shell echo $(CUSTOM_KERNEL_BAROMETER))))

$(info "the  custom_kernel_alsps:$(custom_kernel_alsps),the custom_kernel_accelerometer:$(custom_kernel_accelerometer),the custom_kernel_magnetometer:$(custom_kernel_magnetometer)")
ifneq ($(custom_kernel_alsps),)
obj-y += $(custom_kernel_alsps)
endif
ifneq ($(custom_kernel_accelerometer),)
obj-y += $(custom_kernel_accelerometer)
endif
ifneq ($(custom_kernel_magnetometer),)
obj-y += $(custom_kernel_magnetometer)
endif
ifneq ($(custom_kernel_gyroscope),)
obj-y += $(custom_kernel_gyroscope)
endif
ifneq ($(custom_kernel_barometer),)
obj-y += $(custom_kernel_barometer)
endif

custom_kernel_flashlight:= $(addsuffix /, $(shell echo $(CUSTOM_KERNEL_FLASHLIGHT)))
$(info "the custom_kernel_flashlight:$(custom_kernel_flashlight)")
ifneq ($(custom_kernel_flashlight),)
obj-y += flashlight/$(custom_kernel_flashlight)
else
$(info "Warning!Why custom_kernel_flashlight is empty?")
endif

# Vanzo:wuzhiyong on: Mar, 13 Fri 2015 14:38 +0800
# added for new sensor config structure

project_name:=$(shell echo $(VANZO_INNER_PROJECT_NAME))
ifneq ($(project_name),)
custom_kernel_irda:= $(addprefix irda/,$(addsuffix /, $(shell echo $(CUSTOM_KERNEL_IRDA))))
$(info "custom_kernel_irda:$(custom_kernel_irda)")
obj-y += $(custom_kernel_irda)
endif

# End of Vanzo:wuzhiyong

else
# End of Vanzo:wangfei
ifeq ($(CONFIG_MTK_CM36652_NEW),y)
obj-y	+=  alsps/cm36652-new/
endif

ifeq ($(CONFIG_MTK_MPU6050G_NEW),y)
obj-y   +=  accelerometer/mpu6050g-new/
endif

ifeq ($(CONFIG_MTK_MPU6050GY_NEW),y)
obj-y   +=  gyroscope/mpu6050gy-new/
endif

ifeq ($(CONFIG_MTK_AKM8963_NEW),y)
obj-y	+=  magnetometer/akm8963-new/
endif

ifeq ($(CONFIG_MTK_BMP180_NEW),y)
obj-y	+=  barometer/BMP180-new/
endif
# Vanzo:wangfei on: Tue, 06 Jan 2015 11:03:11 +0800
# added for new sensor config structure
endif
# End of Vanzo:wangfei
endif
obj-y   +=  camera/camera/
obj-y   +=  vibrator/
obj-y   +=  leds/
obj-y   +=  keypad/
obj-y   +=  sound/
obj-y   +=  accdet/

ifeq ($(CONFIG_MTK_HDMI_SUPPORT),y)
obj-y	+=  hdmi/
endif

