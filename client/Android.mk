LOCAL_PATH				:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE			:= TestClient
LOCAL_MODULE_TAGS		:= tests

LOCAL_SRC_FILES			:= main_client.cpp
LOCAL_C_INCLUDES		:= $(LOCAL_PATH)/../libservice/include \

LOCAL_SHARED_LIBRARIES	:= libservice \
						   libutils \
						   liblog \
						   libbinder
include $(BUILD_EXECUTABLE)

