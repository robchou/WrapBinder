LOCAL_PATH				:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE			:= TestServer
LOCAL_MODULE_TAGS		:= tests

LOCAL_SRC_FILES			:= main_server.cpp
LOCAL_C_INCLUDES		:= $(LOCAL_PATH)/../libservice/include \

LOCAL_SHARED_LIBRARIES	:= libservice \
						   libutils \
						   liblog \
						   libbinder

include $(BUILD_EXECUTABLE)
