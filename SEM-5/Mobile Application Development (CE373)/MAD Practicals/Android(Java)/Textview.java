// Create simple program which show the use of Auto Complete Text View.

package com.example.Textview;

import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.AutoCompleteTextView;
import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

  String a[] = {
    "Allbania",
    "Afghanistan",
    "Antofagesta",
    "Angola",
    "Australia",
    "Austria",
  };
  AutoCompleteTextView actv;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    actv = findViewById(R.id.autoCompleteTextView);
    ArrayAdapter<String> adapter = new ArrayAdapter<String>(
      this,
      android.R.layout.simple_list_item_1,
      a
    );
    actv.setAdapter(adapter);
  }
}
