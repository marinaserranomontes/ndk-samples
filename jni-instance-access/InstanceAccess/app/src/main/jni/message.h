#include <jni.h>
#include <stdio.h>

#ifndef INSTANCEACCESS_MESSAGE_H_H
#define INSTANCEACCESS_MESSAGE_H_H

JNIEXPORT void JNICALL
Java_com_android_jniexamples_MessageJNI_accessPropertyNative(JNIEnv *env, jobject obj);

JNIEXPORT void JNICALL
Java_com_android_jniexamples_MessageJNI_accessMethodNative(JNIEnv *env, jobject obj);

#endif //INSTANCEACCESS_MESSAGE_H_H
