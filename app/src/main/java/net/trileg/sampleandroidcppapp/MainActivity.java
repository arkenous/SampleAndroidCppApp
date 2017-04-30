package net.trileg.sampleandroidcppapp;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

  static {
    System.loadLibrary("calculate");
  }

  public native int calc(int initial_value);

  int initial_value = 3;
  int result_value = 0;

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);

    final TextView resultText = (TextView) findViewById(R.id.resultText);
    final Button calculateButton = (Button) findViewById(R.id.calculateButton);

    calculateButton.setOnClickListener(new View.OnClickListener() {
      @Override
      public void onClick(View v) {
        result_value = calc(initial_value);
        resultText.setText(String.valueOf(result_value));
      }
    });
  }
}
