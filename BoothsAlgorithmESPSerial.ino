#include <Arduino.h>

int multiplicand, multiplier;
int A, Q, Q_1, M;
int countBits;
bool inputTaken = false;

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("\nBooth's Algorithm on ESP8266");
  Serial.println("Enter multiplicand and multiplier:");
}

void loop() {
  if (!inputTaken && Serial.available()) {
    multiplicand = Serial.parseInt();
    multiplier   = Serial.parseInt();

    if (multiplicand != 0 || multiplier != 0) {
      int n = 6; 
      M = multiplicand;
      Q = multiplier;
      Q_1 = 0;
      A = 0;
      countBits = n;

      Serial.print("Multiplicand = "); Serial.println(multiplicand);
      Serial.print("Multiplier   = "); Serial.println(multiplier);

      Serial.println("Step\tA\tQ\tQ-1");
      int step = 0;
      Serial.print(step); Serial.print("\t");
      Serial.print(A); Serial.print("\t");
      Serial.print(Q); Serial.print("\t");
      Serial.println(Q_1);

      while (countBits > 0) {
        int lastQ = Q & 1;

        if (lastQ == 1 && Q_1 == 0) {
          A = A - M;
          Serial.println("Case: 10 -> A = A - M");
        } else if (lastQ == 0 && Q_1 == 1) {
          A = A + M;
          Serial.println("Case: 01 -> A = A + M");
        }

        int tempA = A;
        int msbA = (A >> (n-1)) & 1;
        Q_1 = lastQ;
        Q = ((A & 1) << (n-1)) | (Q >> 1);
        A = (tempA >> 1) | (msbA << (n-1));

        step++;
        countBits--;

        Serial.print(step); Serial.print("\t");
        Serial.print(A); Serial.print("\t");
        Serial.print(Q); Serial.print("\t");
        Serial.println(Q_1);
      }

      long result = ((long)A << n) | (Q & ((1 << n)-1));
      Serial.print("Final Result = ");
      Serial.println(result);

      inputTaken = true;
    }
  }
}
