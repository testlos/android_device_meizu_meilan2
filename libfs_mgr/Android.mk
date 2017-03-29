#LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_PATH := system/core/fs_mgr

common_static_libraries := \
    liblogwrap \
    libfec \
    libfec_rs \
    libbase \
    libcrypto_utils_static \
    libcrypto_static \
    libext4_utils_static \
    libsquashfs_utils \
    libext2_blkid \
    libext2_uuid_static


LOCAL_CLANG := true
LOCAL_SANITIZE := integer
LOCAL_SRC_FILES:= \
    fs_mgr.c \
    fs_mgr_format.c \
    fs_mgr_fstab.c \
    fs_mgr_slotselect.c \
    fs_mgr_verity.cpp

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/include \
    system/vold \
    system/extras/ext4_utils \
    external/openssl/include \
    bootable/recovery \
    external/e2fsprogs/lib

LOCAL_MODULE:= libfs_mgr
LOCAL_WHOLE_STATIC_LIBRARIES := $(common_static_libraries)
LOCAL_STATIC_LIBRARIES := libcutils liblog libsparse_static libz libselinux
LOCAL_C_INCLUDES += system/extras/ext4_utils system/extras/squashfs_utils external/e2fsprogs/lib
LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)/include
LOCAL_CFLAGS := -Werror

ifneq (,$(filter userdebug,$(TARGET_BUILD_VARIANT)))
LOCAL_CFLAGS += -DALLOW_ADBD_DISABLE_VERITY=1
endif

include $(BUILD_SHARED_LIBRARY)
