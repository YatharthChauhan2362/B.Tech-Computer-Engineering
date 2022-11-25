// 1.	Create   login   application   where   you   will   have   to   validate   EmailID (UserName).
// Till  the  username  and  password  is  not  validated,  login  button should remain disabled.
// 2.	On successful login,go to on new Acticity.

package com.example.LoginEmail;

import android.content.Intent;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

  EditText uname, pwd;
  Button login;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    uname = findViewById(R.id.username);
    pwd = findViewById(R.id.password);

    login = findViewById(R.id.login);
    uname.addTextChangedListener(textWatcher);
    pwd.addTextChangedListener(textWatcher);
    login.setOnClickListener(
      new View.OnClickListener() {
        @Override
        public void onClick(View view) {
          Intent intent = new Intent(MainActivity.this, SuccessActivity.class);
          startActivity(intent);
        }
      }
    );
  }

  TextWatcher textWatcher = new TextWatcher() {
    @Override
    public void beforeTextChanged(
      CharSequence charSequence,
      int i,
      int i1,
      int i2
    ) {}

    @Override
    public void onTextChanged(
      CharSequence charSequence,
      int i,
      int i1,
      int i2
    ) {}

    @Override
    public void afterTextChanged(Editable editable) {
      check();
    }
  };

  private void check() {
    if (
      uname.getText().toString().equals("Yatharth") &&
      pwd.getText().toString().equals("Yatharth")
    ) {
      login.setEnabled(true);
    } else {
      login.setEnabled(false);
    }
  }
}

// SuccessActivity.java 
package com.example.Email; 
 import androidx.appcompat.app.AppCompatActivity; 
 import android.os.Bundle; 
 
public class SuccessActivity extends AppCompatActivity {  
    @Override 
    protected void onCreate(Bundle savedInstanceState) {         super.onCreate(savedInstanceState);         setContentView(R.layout.activity_success);     } 
} 
