// BatInfo.cpp

#include "BatInfo.h"

int BatInfo::getBatteryLevel() {
    // ��������� Java Environment
    JavaVM* jvm; // �������� JVM, �������, ����� ��������� ������ �������
    // ���������� env ����� jvm
    jint res = jvm->AttachCurrentThread((void **)&env, NULL);
    if (res != JNI_OK) return -1;

    // ��������� BatteryManager ����� Java
    jclass cls = env->FindClass("android/os/BatteryManager");
    jmethodID methodID = env->GetMethodID(cls, "getIntProperty", "(I)I");
    jint result = env->CallIntMethod(batteryManager, methodID, 0x00000002); // 0x00000002 ����������� PROPERTY_CAPACITY

    // ���� ���������� � �������
    printf("Battery Level: %d%%\n", result);

    jvm->DetachCurrentThread();
    return result;
}
