// Create an Application in which user pass the data with intent object to another activity.

// MainActivity.java 
package com.example.Intent;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

  EditText et1;
  Button b1;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    et1 = findViewById(R.id.data);
    b1 = findViewById(R.id.button);
    b1.setOnClickListener(
      new View.OnClickListener() {
        @Override
        public void onClick(View view) {
          String data1 = et1.getText().toString();
          Intent intent = new Intent(MainActivity.this, MainActivity2.class);
          intent.putExtra("dt", data1);
          startActivity(intent);
        }
      }
    );
  }
}


// MainActivity2.java
package com.example.Intent; 
 
import androidx.appcompat.app.AppCompatActivity; import android.os.Bundle; import android.content.Intent; import android.widget.TextView; 
 
public class MainActivity2 extends AppCompatActivity { 
    TextView t1;     @Override 
    protected void onCreate(Bundle savedInstanceState) {         super.onCreate(savedInstanceState);         setContentView(R.layout.activity_main2); 
        t1=findViewById(R.id.textView); 
        Intent intent=getIntent(); 
        String test=intent.getStringExtra("dt");         t1.setText(test); 
    } 
} 
