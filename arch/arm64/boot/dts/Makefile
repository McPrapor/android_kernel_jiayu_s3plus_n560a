#include $(srctree)/mediatek/Makefile

dtb-$(CONFIG_ARCH_VEXPRESS) += rtsm_ve-aemv8a.dtb foundation-v8.dtb

dtb-$(CONFIG_ARCH_MT6752) += mt6752_evb_64.dtb k2v1_64.dtb

ifeq ($(CONFIG_HTC_PROJECT_DTB),"v36bml_dugl")
        dtb-y += v36bml_dugl.dtb
        dtb-y += v36bml_dugl-XB.dtb
endif

ifeq ($(CONFIG_HTC_PROJECT_DTB),"v36bml_uhl")
        dtb-y += v36bml_uhl.dtb
        dtb-y += v36bml_uhl-XB.dtb
endif

targets += dtbs

DTB_NAMES := $(subst $\",,$(CONFIG_BUILD_ARM64_APPENDED_DTB_IMAGE_NAMES))
ifneq ($(DTB_NAMES),)
DTB_LIST := $(addsuffix .dtb,$(DTB_NAMES))
else
DTB_LIST := $(dtb-y)
endif
targets += $(DTB_LIST)

dtbs: $(addprefix $(obj)/, $(DTB_LIST))

clean-files := dts/*.dtb *.dtb

MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
ARCH_MTK_PROJECT := $(subst ",,$(CONFIG_ARCH_MTK_PROJECT))

MTK_ARCH_LIST := $(CONFIG_ARCH_MT6752)  \
                 $(CONFIG_ARCH_MT6732)  \
                 $(CONFIG_ARCH_MT6595)  \
                 $(CONFIG_ARCH_MT6795)  \
                 $(CONFIG_ARCH_MT6735)  \
                 $(CONFIG_ARCH_MT6735M) \
                 $(CONFIG_ARCH_MT6753)  \
                 $(CONFIG_ARCH_MT8163)

ifneq ($(filter y, $(MTK_ARCH_LIST)),)
# For K2/6795 arm32
DCT_EXTRA_PATH := $(objtree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)/dct/dct/
else
DCT_EXTRA_PATH := $(objtree)/arch/arm/mach-$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)/dct/dct/
endif

ifeq ($(CONFIG_HTC_PROJECT_DTB),"v36bml_dugl")
DCT_EXTRA_PATH := $(objtree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)/dct/$(CUSTOM_KERNEL_DCT)/
endif
ifeq ($(CONFIG_HTC_PROJECT_DTB),"v36bml_uhl")
DCT_EXTRA_PATH := $(objtree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)/dct/$(CUSTOM_KERNEL_DCT)/
endif

DTC_FLAGS ?= -i $(DCT_EXTRA_PATH)
