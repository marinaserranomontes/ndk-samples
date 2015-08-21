package com.android.jniexamples;

import java.util.Date;

/**
 * Created by mserrano on 17/08/15.
 */
public class MessageJNI {

    static {
        System.loadLibrary("message");
    }

    public String author;
    public String text;

    private native void accessPropertyNative();
    private native void accessMethodNative();

    public MessageJNI(String author, String text) {
        this.author = author;
        this.text = text;
    }

    public void overrideAccessProperty(){
        accessPropertyNative();
    }
    public void overrideAccessMethod(){
        accessMethodNative();
    }

    public void setAuthor(String name){
        this.author = name;
    }
}
