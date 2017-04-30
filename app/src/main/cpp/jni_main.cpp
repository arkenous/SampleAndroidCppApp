#include "calculate.hpp"

#ifdef __cplusplus
extern "C" {
#endif

#include <jni.h>

JNIEXPORT jint JNICALL Java_net_trileg_sampleandroidcppapp_MainActivity_calc
  (JNIEnv *env, jobject thiz, jint _initial_value) {
    Calculate calculate;

    int initial_value = _initial_value;
    int result = calculate.calc(initial_value);

    jint _result = result;
    return _result;
}

#ifdef __cplusplus
}
#endif