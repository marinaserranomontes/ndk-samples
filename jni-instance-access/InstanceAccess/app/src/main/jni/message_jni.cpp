//
// Created by mserrano on 17/08/15.
//

#include "message_jni.h"
#include <stdio.h>
#include <string.h>

JNIEXPORT void JNICALL Java_com_android_jniexamples_MessageJNI_accessPropertyNative(JNIEnv* env, jobject obj){

    jfieldID fieldId;
    jstring author_jstr;
    jstring new_author_jstr;
    const char *author_cStr;

    //Getting a reference to object class
    jclass objClass = env->GetObjectClass(obj);

    //Getting the fieldId of the author property in the class
    fieldId = env->GetFieldID(objClass, "author", "Ljava/lang/String;");
    if (fieldId == NULL) {
        return; // Error while getting field id  //TODO
    }

    //Getting the jstring author property
    author_jstr = (jstring) env->GetObjectField(objClass, fieldId);

    //Getting a C string for the jstring author property
    author_cStr = env->GetStringUTFChars(author_jstr, NULL);
    if (author_cStr == NULL) {
        return; // Out of memory  //TODO
    }
    printf("Author name from C++: \"%s\"\n", author_cStr);
    env->ReleaseStringUTFChars(author_jstr, author_cStr);

    new_author_jstr = env->NewStringUTF("me");
    if (new_author_jstr == NULL) {
        return; //Out of memory
    }
    //Overwrite the value of the name property
    env->SetObjectField(obj, fieldId, new_author_jstr);
}

JNIEXPORT void JNICALL Java_com_android_jniexamples_MessageJNI_accessMethodNative(JNIEnv* env, jobject obj){

    jclass objClass = env->GetObjectClass(obj);
    jmethodID methodId = env->GetMethodID(objClass, "setAuthor", "(Ljava/lang/String;)V");
    jstring jstr_author;
    if (methodId == NULL) {
        return; /* method not found */
    }
    // Creating a new string for the new name
    jstr_author = env->NewStringUTF( "me2");
    env->CallVoidMethod(obj, methodId, jstr_author);
}


