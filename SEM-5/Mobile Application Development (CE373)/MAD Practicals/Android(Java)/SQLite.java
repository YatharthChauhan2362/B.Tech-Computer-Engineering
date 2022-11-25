// Create an application to make Insert, update, Delete and retrieve operation on the SQLite database.

MainActivity.java
package com.example.SQLite;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;
import androidx.constraintlayout.widget.ConstraintLayout;
import android.database.Cursor;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
public class MainActivity extends AppCompatActivity {
    helper db;
    EditText editText,editText1,editText2,editText3;
    Button button,button1,button2,button3;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        db = new helper(MainActivity.this);

                editText = findViewById(R.id.id);
        editText1 = findViewById(R.id.name);
        editText2 = findViewById(R.id.sn);
        editText3 = findViewById(R.id.mark);
        button = findViewById(R.id.bt);
        button1 = findViewById(R.id.bt1);
        button2 = findViewById(R.id.bt2);
        button3 = findViewById(R.id.bt3);
        insert();
        show();
        update();
        delete();
    }
    public void insert(){
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                boolean result=db.insertdata(editText1.getText().toString(),editText2.getText().toString(),editText3.getText().toString());
                if(result == true)
                    Toast.makeText(MainActivity.this,"data inserted",Toast.LENGTH_LONG).show();
              else
                Toast.makeText(MainActivity.this,"data not inserted",Toast.LENGTH_LONG).show();
            }
        });
    }
    public void show(){
        button1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Cursor gett = db.showdata();
                if(gett.getCount() == 0){
                    showmessage("Error","data not found");
                    return; //exit from loop
                }
                StringBuffer buffer=new StringBuffer();
                while (gett.moveToNext())
                {
                    buffer.append("id: "+gett.getString(0)+"\n");
                    buffer.append("name: "+gett.getString(1)+"\n");
                    buffer.append("surname: "+gett.getString(2)+"\n");
                    buffer.append("mark: "+gett.getString(3)+"\n\n");
                }
                showmessage("Data",buffer.toString());
            }
        });
    }
    public void showmessage(String title,String message)
    {
        AlertDialog.Builder builder=new AlertDialog.Builder(MainActivity.this);
        builder.setTitle(title);
        builder.setMessage(message);
        builder.show();
    }
    public void update(){
        button2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                boolean
                        isUpdated=db.updatedata(editText.getText().toString(),editText1.getText().toString(),editText2.getText().toString(),editText3.getText().toString());
                if(isUpdated==true)
                    Toast.makeText(MainActivity.this,"data updated",Toast.LENGTH_LONG).show();
                else
                Toast.makeText(MainActivity.this,"data not updated",Toast.LENGTH_LONG).show();
            }
        });
    }
    public void delete(){
        button3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Integer row=db.deletedata(editText.getText().toString());
                if(row > 0)
                Toast.makeText(MainActivity.this,"data deleted",Toast.LENGTH_LONG).show();
                else
                Toast.makeText(MainActivity.this,"data not deleted",Toast.LENGTH_LONG).show();
            }
        });
    }
}

// Helper.java
package com.example.sqlite_database;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import androidx.annotation.Nullable;

public class helper extends SQLiteOpenHelper {
    String tname = "fivece";
    String col1 = "id";
    String col2 = "name";
    String col3 = "surname";
    String col4 = "mark";
    public helper(@Nullable Context context) {
        super(context, "fivece.db", null, 1);
        SQLiteDatabase sqLiteDatabase = this.getWritableDatabase();
    }
    @Override
    public void onCreate(SQLiteDatabase sqLiteDatabase) {
        sqLiteDatabase.execSQL("create table fivece (id integer primary key,name text,surname text,mark integer)");
    }

    @Override
    public void onUpgrade(SQLiteDatabase sqLiteDatabase, int oldVersion, int newVersion) {
        sqLiteDatabase.execSQL("drop table if exists fivece");
        onCreate(sqLiteDatabase);
    }
    public boolean insertdata(String name,String surname,String mark){
        SQLiteDatabase sqLiteDatabase=this.getWritableDatabase();
        ContentValues contentValues=new ContentValues();
        contentValues.put(col2,name);
        contentValues.put(col3,surname);
        contentValues.put(col4,mark);
        long res=sqLiteDatabase.insert(tname,null,contentValues);
        if(res == -1)
            return false;
        else
            return true;
    }
    public Cursor showdata(){
        SQLiteDatabase sqLiteDatabase=this.getWritableDatabase();
        Cursor get=sqLiteDatabase.rawQuery("select * from "+ tname,null);
        return get;
    }
    public boolean updatedata(String id,String name,String surname,String mark){
        SQLiteDatabase sqLiteDatabase=this.getWritableDatabase();
        ContentValues contentValues=new ContentValues();
        contentValues.put(col1,id);
        contentValues.put(col2,name);
        contentValues.put(col3,surname);
        contentValues.put(col4,mark);
        sqLiteDatabase.update(tname,contentValues,"id = ?",new String[] {id});
        return true;
    }
    public Integer deletedata(String id){
        SQLiteDatabase sqLiteDatabase=this.getWritableDatabase();
        return sqLiteDatabase.delete(tname,"id = ?",new String[] {id});
    }
}
