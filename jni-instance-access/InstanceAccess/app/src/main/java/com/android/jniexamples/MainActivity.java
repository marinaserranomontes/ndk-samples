package com.android.jniexamples;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;

/**
 * Created by mserrano on 17/08/15.
 */
public class MainActivity extends Activity {
    private static String LOGTAG = "jni-examples";
    private TextView mView;
    private MessageJNI myMessage;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mView = (TextView) findViewById(R.id.txt_message);

        myMessage = new MessageJNI("Author", "Hello World!");
        mView.setText(myMessage.author + ":" + myMessage.text);
        Log.d(LOGTAG, "Initial message: " + mView.getText());

        myMessage.overrideAccessProperty();
        mView.setText(myMessage.author + ":" + myMessage.text);
        Log.d(LOGTAG, "After override the author (accesspropertyNative) the message is : " + mView.getText());

        myMessage.overrideAccessMethod();
        mView.setText(myMessage.author + ":" + myMessage.text);
        Log.d(LOGTAG, "After override the author (accessmethodNative) the message is : " + mView.getText());
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
