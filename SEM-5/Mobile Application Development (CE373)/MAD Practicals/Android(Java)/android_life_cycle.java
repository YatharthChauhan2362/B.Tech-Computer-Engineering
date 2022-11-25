// Create android application to demonstrate life cycle of activity.

package com.example.android_life_cycle;

import android.os.Bundle;
import android.util.Log;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

  private static final String tagname = "20DCE019";

  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    Log.i(tagname, "Create method initiated");
  }

  @Override
  protected void onStart() {
    super.onStart();
    Log.i(tagname, "Activity in the Start mode");
  }

  protected void onRestart() {
    super.onRestart();
    Log.i(tagname, "Restarted the activity");
  }

  protected void onDestroy() {
    super.onDestroy();
    Log.i(tagname, "Activity Destroyed");
  }

  protected void onResume() {
    super.onResume();
    Log.i(tagname, "Activity Resumed");
  }

  @Override
  protected void onStop() {
    super.onStop();
    Log.i(tagname, "Stopped the activity");
  }
}
