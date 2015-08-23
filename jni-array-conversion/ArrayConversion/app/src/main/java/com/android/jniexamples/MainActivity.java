package com.android.jniexamples;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;



public class MainActivity extends Activity {

    private static String LOGTAG = "jniexamples-array-conversion";
    TextView outputView;
    ArrayJNI sum;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        outputView = (TextView) findViewById(R.id.output_view);

        sum = new ArrayJNI();
        int result = sum.getTotalSum();
        Log.d(LOGTAG, "The result is: " + result);

        outputView.setText("The result is: " + result);


    }
}
