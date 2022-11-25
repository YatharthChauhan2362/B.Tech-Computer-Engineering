// Create simple Application which show the use of List view.

package com.example.Listview;

import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;
import androidx.appcompat.app.AppCompatActivity;
import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {

  ListView lv;
  String phn[] = {
    "Apple",
    "Samsung",
    "OnePlus",
    "Google",
    "Vivo",
    "RedMi",
    "Poco",
  };

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    lv = findViewById(R.id.listView);
    ArrayAdapter arrayAdapter = new ArrayAdapter(
      this,
      android.R.layout.simple_list_item_1,
      phn
    );
    lv.setAdapter(arrayAdapter);
    lv.setOnItemClickListener(
      new AdapterView.OnItemClickListener() {
        @Override
        public void onItemClick(
          AdapterView<?> adapterView,
          View view,
          int i,
          long l
        ) {
          Toast
            .makeText(
              MainActivity.this,
              "Item No: " + i + " " + lv.getItemAtPosition(i).toString(),
              Toast.LENGTH_SHORT
            )
            .show();
        }
      }
    );
  }
}
