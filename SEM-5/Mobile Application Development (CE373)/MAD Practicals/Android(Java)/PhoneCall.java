// Create an application to make a Phone call on specific entered number by user in the EditText.  

package com.example.PhoneCall; 
 
import androidx.appcompat.app.AppCompatActivity; 
 
import android.os.Bundle; 
 
import android.content.Intent; 
import android.net.Uri; 
import android.os.Bundle; 
import android.view.View; 
import android.widget.Button;
 import android.widget.EditText; 
 public class MainActivity extends AppCompatActivity{     
    private EditText t1;     
    private Button bt1; 
    @Override 
    protected void onCreate(Bundle savedInstanceState) {         
        super.onCreate(savedInstanceState);         setContentView(R.layout.activity_main);         t1=findViewById(R.id.editText);         bt1=findViewById(R.id.button); 
        bt1.setOnClickListener(new View.OnClickListener() { 
            @Override 
            public void onClick(View view) { 
                String num=t1.getText().toString().trim();                 Intent intent=new Intent(Intent.ACTION_CALL, Uri.parse("tel:"+num)); 
                startActivity(intent); 
            } 
        }); 
   } 

