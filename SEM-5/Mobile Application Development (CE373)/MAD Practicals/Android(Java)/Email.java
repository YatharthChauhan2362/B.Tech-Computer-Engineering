// Create an Android Application where user will enter the destination email address, subject and a message. On clicking Send button, it will prompt email client only and email will compose. Also put some logic over EditText field that no one fields are empty otherwise notify with toast.

package com.example.prac8; 
 
import androidx.appcompat.app.AppCompatActivity; 
 
import android.content.Intent; import android.os.Bundle; import android.view.View; import android.widget.Button; import android.widget.EditText; 
 public class MainActivity extends AppCompatActivity { 
    EditText et1, et2, et3; 
    Button btn; 
 
    @Override 
    protected void onCreate(Bundle savedInstanceState) {         super.onCreate(savedInstanceState);         setContentView(R.layout.activity_main);         et1 = findViewById(R.id.editText);         et2 = findViewById(R.id.editText2);         et3 = findViewById(R.id.editText3);         btn = findViewById(R.id.button); 
package com.example.prac8; 
 
import androidx.appcompat.app.AppCompatActivity; 
 
import android.content.Intent; import android.os.Bundle; import android.view.View; import android.widget.Button; import android.widget.EditText; 
 public class MainActivity extends AppCompatActivity { 
    EditText et1, et2, et3; 
    Button btn; 
 
    @Override 
    protected void onCreate(Bundle savedInstanceState) {         super.onCreate(savedInstanceState);         setContentView(R.layout.activity_main);         et1 = findViewById(R.id.editText);         et2 = findViewById(R.id.editText2);         et3 = findViewById(R.id.editText3);         btn = findViewById(R.id.button); 
        btn.setOnClickListener(new View.OnClickListener() { 
            @Override 
            public void onClick(View view) { 
                String rcplist = et1.getText().toString(); 
                String[] rcp = rcplist.split(","); 
                String sub = et2.getText().toString(); 
                String msg = et3.getText().toString();                 Intent i = new Intent(Intent.ACTION_SEND); 
                i.putExtra(Intent.EXTRA_EMAIL, rcp); 
                i.putExtra(Intent.EXTRA_TEXT, msg); 
                i.setType("message/rfc822"); 
                startActivity(Intent.createChooser(i, "Choose Email 
Client")); 
            } 
        }); 
    } 
} 
