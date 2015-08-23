package com.android.jniexamples;


public class ArrayJNI {

    static {
        System.loadLibrary("array-conversion-jni");
    }
    int arr[];


    private native int sumArrayNative(int[] array);

    public ArrayJNI() {
        this.arr = new int[10];
        initArray();
    }

    private void initArray(){
        for(int i=0; i<10; i++){
            this.arr[i] = i;
        }
    }

    public int getTotalSum(){
        return sumArrayNative(arr);
    }
}
