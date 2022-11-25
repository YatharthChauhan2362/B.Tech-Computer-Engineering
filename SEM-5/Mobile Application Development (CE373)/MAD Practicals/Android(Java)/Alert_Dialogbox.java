// Create a simple application that show the use of Alert Dialog box.

package com.example.Alert_Dialog;

import android.content.DialogInterface;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

  Button btn1;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    btn1 = findViewById(R.id.button);
    btn1.setOnClickListener(
      new View.OnClickListener() {
        @Override
        public void onClick(View view) {
          AlertDialog.Builder builder = new AlertDialog.Builder(
            MainActivity.this
          );
          builder.setTitle("Quit");
          builder.setIcon(R.drawable.ic_baseline_close_24);
          builder.setMessage("Do you want to Exit Application? ");
          builder.setPositiveButton(
            "yes",
            new DialogInterface.OnClickListener() {
              @Override
              public void onClick(DialogInterface dialogInterface, int i) {
                finish();
              }
            }
          );
          builder.setNegativeButton(
            "no",
            new DialogInterface.OnClickListener() {
              @Override
              public void onClick(DialogInterface dialogInterface, int i) {
                dialogInterface.cancel();
              }
            }
          );
          builder.show();
          btn1.setOnLongClickListener(
            new View.OnLongClickListener() {
              @Override
              public boolean onLongClick(View view) {
                Toast
                  .makeText(
                    MainActivity.this,
                    "Don’t touch",
                    Toast.LENGTH_SHORT
                  )
                  .show();
                return true;
              }
            }
          );
        }
      }
    );
  }
}
