LOCAL_PATH				:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE			:= libservice
LOCAL_MODULE_TAGS		:= tests
LOCAL_PRELINK_MODULE	:= false

LOCAL_SRC_FILES			:= src/libserver.cpp \
						   src/libclient.cpp
LOCAL_C_INCLUDES		:= $(LOCAL_PATH)/include \

LOCAL_SHARED_LIBRARIES	:= libutils \
						   liblog \
						   libbinder

include $(BUILD_SHARED_LIBRARY)
