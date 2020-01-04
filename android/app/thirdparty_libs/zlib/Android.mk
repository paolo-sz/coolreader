
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := local_zlib

ZLIB_SRC_DIR := ../../../../thirdparty/zlib
ZLIB_SRC_DIR_P := $(LOCAL_PATH)/../../../../thirdparty/zlib

LOCAL_C_INCLUDES := $(ZLIB_SRC_DIR_P)
LOCAL_CFLAGS += -funwind-tables -Wl,--no-merge-exidx-entries

LOCAL_SRC_FILES := \
    ${ZLIB_SRC_DIR}/adler32.c  ${ZLIB_SRC_DIR}/crc32.c    \
${ZLIB_SRC_DIR}/infback.c  ${ZLIB_SRC_DIR}/inflate.c   \
${ZLIB_SRC_DIR}/uncompr.c \
${ZLIB_SRC_DIR}/compress.c  \
${ZLIB_SRC_DIR}/deflate.c  ${ZLIB_SRC_DIR}/gzio.c     \
${ZLIB_SRC_DIR}/inffast.c  ${ZLIB_SRC_DIR}/inftrees.c  \
${ZLIB_SRC_DIR}/trees.c    ${ZLIB_SRC_DIR}/zutil.c


include $(BUILD_STATIC_LIBRARY)
