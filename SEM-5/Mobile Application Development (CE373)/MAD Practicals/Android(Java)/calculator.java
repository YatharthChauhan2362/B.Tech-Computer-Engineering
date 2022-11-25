// Design an application representing a simple calculator.

package com.example.calculator;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;

public class MainActivity extends AppCompatActivity {

  EditText et1, et2;
  Button add, sub, mul, div;
  ConstraintLayout cl;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    add = findViewById(R.id.add);
    sub = findViewById(R.id.subtract);
    mul = findViewById(R.id.multiply);
    div = findViewById(R.id.divide);
    et1 = findViewById(R.id.getNum1);
    et2 = findViewById(R.id.getNum2);
    cl = findViewById(R.id.cons);
    cl.setBackgroundColor(getResources().getColor(R.color.teal_200));
    add.setOnClickListener(
      new View.OnClickListener() {
        @Override
        public void onClick(View v) {
          int a = Integer.parseInt(et1.getText().toString());
          int b = Integer.parseInt(et2.getText().toString());
          int z = a + b;
          Toast
            .makeText(
              MainActivity.this,
              Integer.toString(z),
              Toast.LENGTH_SHORT
            )
            .show();
        }
      }
    );
    sub.setOnClickListener(
      new View.OnClickListener() {
        @Override
        public void onClick(View v) {
          int a = Integer.parseInt(et1.getText().toString());
          int b = Integer.parseInt(et2.getText().toString());
          int z = a - b;
          Toast
            .makeText(
              MainActivity.this,
              Integer.toString(z),
              Toast.LENGTH_SHORT
            )
            .show();
        }
      }
    );
    mul.setOnClickListener(
      new View.OnClickListener() {
        @Override
        public void onClick(View v) {
          int a = Integer.parseInt(et1.getText().toString());
          int b = Integer.parseInt(et2.getText().toString());
          int z = a * b;
          Toast
            .makeText(
              MainActivity.this,
              Integer.toString(z),
              Toast.LENGTH_SHORT
            )
            .show();
        }
      }
    );
    div.setOnClickListener(
      new View.OnClickListener() {
        @Override
        public void onClick(View v) {
          float a = Float.parseFloat(et1.getText().toString());
          float b = Float.parseFloat(et2.getText().toString());
          float z = a / b;
          Toast
            .makeText(MainActivity.this, Float.toString(z), Toast.LENGTH_SHORT)
            .show();
        }
      }
    );
  }
}
