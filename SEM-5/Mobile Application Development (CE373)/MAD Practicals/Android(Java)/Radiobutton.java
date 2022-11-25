// Create simple application which shows use of radio view, take 3 radio buttons. When radio button is selected it will show text of radio button using toast.

package com.example.Radiobutton;
import androidx.appcompat.app.AppCompatActivity; 
import android.os.Bundle;
import android.view.View; 
import android.widget.Button;
import android.widget.RadioButton; 
import android.widget.RadioGroup; 
import android.widget.Toast;

public class MainActivity extends AppCompatActivity { RadioGroup rg;
RadioButton rb1,rb2,rb3,rb; 
Button btn1;

@Override
protected void onCreate(Bundle savedInstanceState) { super.onCreate(
    savedInstanceState); 
    setContentView(R.layout.activity_main);
rg = findViewById(R.id.radiogrp);
rb1 = findViewById(R.id.radioButton);
rb2 = findViewById(R.id.radioButton2); 
rb3 = findViewById(R.id.radioButton3); 
btn1 = findViewById(R.id.button);
rg.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() { 
    @Override
public void onCheckedChanged(RadioGroup radioGroup, int i) { 
    rb = findViewById(i);
Toast.makeText(MainActivity.this, rb.getText(), Toast.LENGTH_SHORT).show();
}
});
btn1.setOnClickListener(new View.OnClickListener() { @Override
public void onClick(View view) { 
    if(rb1.isChecked())
Toast.makeText(MainActivity.this, rb1.getText(), Toast.LENGTH_SHORT).show();
else if(rb2.isChecked()) Toast.makeText(MainActivity.this, rb2.getText(),
Toast.LENGTH_SHORT).show(); 
else if(rb3.isChecked())
Toast.makeText(MainActivity.this, rb3.getText(), Toast.LENGTH_SHORT).show();





else
Toast.makeText(MainActivity.this, "Select appropriate Option", Toast.LENGTH_SHORT).show();
 
}
});
}
 