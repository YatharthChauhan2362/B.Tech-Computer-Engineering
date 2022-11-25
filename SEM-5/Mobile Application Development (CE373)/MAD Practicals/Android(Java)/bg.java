// Introduction to Android and Create “Custom Message” application. That will display “Custom Message” in the middle of the screen in the Black color with the Yellow background.

package com.example.bg;

import android.os.Bundle;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;

public class MainActivity extends AppCompatActivity {

  TextView tv;
  ConstraintLayout cl;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    tv = findViewById(R.id.textView);
    cl = findViewById(R.id.cons);
    cl.setBackgroundColor(getResources().getColor(R.color.purple_200));
    tv = setTextColor(getResources().getColor(R.color.black));
  }
}
