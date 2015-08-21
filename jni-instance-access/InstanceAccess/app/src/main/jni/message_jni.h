//
// Created by mserrano on 17/08/15.
//

#include <jni.h>

#ifndef INSTANCEACCESS_MESSAGE_JNI_H
#define INSTANCEACCESS_MESSAGE_JNI_H

//property access
JNIEXPORT void JNICALL Java_com_android_jniexamples_MessageJNI_accessPropertyNative(JNIEnv* env, jobject obj);

JNIEXPORT void JNICALL Java_com_android_jniexamples_MessageJNI_accessMethodNative(JNIEnv* env, jobject obj);


//method access
#endif //INSTANCEACCESS_MESSAGE_JNI_H
