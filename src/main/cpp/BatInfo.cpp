// BatInfo.cpp

#include "BatInfo.h"

int BatInfo::getBatteryLevel() {
    // Отримання Java Environment
    JavaVM* jvm; // Отримуємо JVM, можливо, через специфічні методи системи
    // Ініціалізуємо env через jvm
    jint res = jvm->AttachCurrentThread((void **)&env, NULL);
    if (res != JNI_OK) return -1;

    // Отримання BatteryManager через Java
    jclass cls = env->FindClass("android/os/BatteryManager");
    jmethodID methodID = env->GetMethodID(cls, "getIntProperty", "(I)I");
    jint result = env->CallIntMethod(batteryManager, methodID, 0x00000002); // 0x00000002 представляє PROPERTY_CAPACITY

    // Вивід результату в консоль
    printf("Battery Level: %d%%\n", result);

    jvm->DetachCurrentThread();
    return result;
}
