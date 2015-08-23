
#ifndef ARRAYCONVERSION_ARRAY_CONVERSION_JNI_H
#define ARRAYCONVERSION_ARRAY_CONVERSION_JNI_H

JNIEXPORT jint JNICALL Java_com_android_jniexamples_ArrayJNI_sumArrayNative(JNIEnv *env, jobject instance,
                                                     jintArray native_array);

#endif //ARRAYCONVERSION_ARRAY_CONVERSION_JNI_H
