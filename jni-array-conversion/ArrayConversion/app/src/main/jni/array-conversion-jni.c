#include <jni.h>
#include <stdio.h>
#include <android/log.h>
#include "array-conversion-jni.h"

JNIEXPORT jint JNICALL
Java_com_android_jniexamples_ArrayJNI_sumArrayNative(JNIEnv *env, jobject instance,
                                                     jintArray array) {
    jint *native_array = (*env)->GetIntArrayElements(env, array, NULL);

    jint i = 0;
    jint result;

    result = 0;

    if (native_array == NULL) {
        return 0;
    }
    for (i=0; i<10; i++) {
        result += native_array[i];
    }
    __android_log_print(ANDROID_LOG_DEBUG , "array-conversion-jni","Result is %d", native_array[i]);

    (*env)->ReleaseIntArrayElements(env, array, native_array, 0);

    return result;
}