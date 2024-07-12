#ifndef BatInfo
#define BatInfo

#include <jni.h> // Заголовок для взаємодії з Java

class BatInfo {
public:
    int getBatteryLevel();
private:
    JNIEnv* env;
    jobject batteryManager;
};

#endif // BatInfo
