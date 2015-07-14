#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
//#include "ndk-ai.h"

JNIEXPORT jstring JNICALL Java_com_tsho_igoaitest_SelectActivity_stringFromNative(JNIEnv * env, jobject jobject)
{
  return (*env)->NewStringUTF(env, "Hello From JNI");
}
