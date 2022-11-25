// Create a simple application that demonstrate a use of Rating Bar

package com.example.Ratingbar;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.RatingBar;
import android.widget.TextView;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

  TextView tv;
  Button btn1;
  RatingBar rb;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    tv = findViewById(R.id.textView);
    btn1 = findViewById(R.id.button);
    rb = findViewById(R.id.ratingBar);
    rb.setOnRatingBarChangeListener(
      new RatingBar.OnRatingBarChangeListener() {
        @Override
        public void onRatingChanged(RatingBar ratingBar, float v, boolean b) {
          tv.setText(Float.toString(v));
        }
      }
    );

    btn1.setOnClickListener(
      new View.OnClickListener() {
        @Override
        public void onClick(View view) {
          Toast
            .makeText(
              MainActivity.this,
              Float.toString(rb.getRating()),
              Toast.LENGTH_SHORT
            )
            .show();
        }
      }
    );
  }
}
