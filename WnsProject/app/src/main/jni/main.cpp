
#include "com_example_saxonzhang_wnsproject_MainActivity.h"

/*
 * Class:     com_example_saxonzhang_wnsproject_MainActivity
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_saxonzhang_wnsproject_MainActivity_getName
  (JNIEnv * env, jobject)
  {
    return env->NewStringUTF("hi wns");
  }