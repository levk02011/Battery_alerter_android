#ifndef BatInfo
#define BatInfo

#include <jni.h> // ��������� ��� �����䳿 � Java

class BatInfo {
public:
    int getBatteryLevel();
private:
    JNIEnv* env;
    jobject batteryManager;
};

#endif // BatInfo
