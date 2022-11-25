// Create a login application with following features:
// 1.	Successful Login message in TextView with Green background if Username & password is correct.
// 2.	Failure message in TextView with Red background if Username or password is incorrect.
// 3.	Disable Login Button after three wrong login attempts.
// 4.	Close application if user selects Cancel Button.

package com.example.Toast;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import android.widget.EditText;
import android.widget.TextView;

import org.w3c.dom.Text;

public class MainActivity extends AppCompatActivity {
    EditText et1, et2;
    Button btn, btn2;
    TextView tv, tv1;
    int cnt = 3;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btn = findViewById(R.id.button);
        btn2 = findViewById(R.id.button2);
        et1 = findViewById(R.id.editTextTextPersonName);
        et2 = findViewById(R.id.editTextTextPassword);
        tv = findViewById(R.id.textView);
        tv1 = findViewById(R.id.textView2);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (et1.getText().toString().equals("yatharth") && et2.getText().toString().equals("admin")) {
                    tv.setText(" Logged in Successfully ");
                    tv.setBackgroundColor(getResources().getColor(R.color.purple_500));
                    tv1.setText("");

                    cnt = 3;
                } else {
                    tv.setText(" Invalid Username/Password ");
                    tv.setBackgroundColor(getResources().getColor(R.color.teal_700));
                    cnt--;
                    if (cnt == 0) {
                        btn.setEnabled(false);
                    }
                    tv1.setText(" Attempts Remaining: " + cnt);
                }
            }
        });
        btn2.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {

                finish();
            }
        });
    }
}
