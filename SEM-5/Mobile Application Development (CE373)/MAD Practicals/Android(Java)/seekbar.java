// Create simple application which shows use of seek bar.

package com.example.seekbar;

import android.os.Bundle;
import android.widget.Button;
import android.widget.SeekBar;
import android.widget.TextView;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;

public class MainActivity extends AppCompatActivity {

  SeekBar sb;
  TextView tv;
  Button btn;
  ConstraintLayout c;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    sb = findViewById(R.id.seekBar);
    tv = findViewById(R.id.textView);
    btn = findViewById(R.id.button3);
    c = findViewById(R.id.cons);
    sb.setOnSeekBarChangeListener(
      new SeekBar.OnSeekBarChangeListener() {
        @Override
        public void onProgressChanged(SeekBar seekBar, int i, boolean b) {
          tv.setText("Covered: " + Integer.toString(i) + "/ 100");
          Toast
            .makeText(
              MainActivity.this,
              Integer.toString(i),
              Toast.LENGTH_SHORT
            )
            .show();
          if (i == 50) {
            c.setBackgroundColor(getResources().getColor(R.color.teal_200));
          }
        }

        @Override
        public void onStartTrackingTouch(SeekBar seekBar) {}

        @Override
        public void onStopTrackingTouch(SeekBar seekBar) {}
      }
    );
  }
}
