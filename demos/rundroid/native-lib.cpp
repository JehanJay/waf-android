#include <string>
#include "include/run/jni.h"
#include "include/run/run.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_drives_1mobile_1worhp_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello_old = "Hello from C++";
    std::string hello = Run::stringfunc(hello_old) ;
    return env->NewStringUTF(hello.c_str());
}