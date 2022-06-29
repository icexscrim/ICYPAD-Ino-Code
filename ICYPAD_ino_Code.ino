
#include <Keypad.h>
#define DATA_PIN 2
const byte ROWS = 5;
const byte COLS = 7;
char Keys[ROWS][COLS] = {
  {'0', '1', '2', '3', '4', '5','6'},
  {'7', '8', '9', 'A', 'B','C','D'},
  {'E', 'F', 'G', 'H','I','J', 'K'},
  {'L', 'M', 'N','O', 'P', 'Q', 'R'},
  {'S', 'T','U', 'V', 'W', 'X', 'Y'},
};
byte colPins[COLS] = {3, 4, 5, 6, 7, 8,9};
byte rowPins[ROWS] = {10, 11, 12, A0, A1};

Keypad customKeypad = Keypad( makeKeymap(Keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(256000);
}

void loop() {
  char customKey = customKeypad.getKey();

  if (customKey) {
    switch (customKey) {
      case '0':
        Serial.write(B10010000);
        Serial.write(1);
        Serial.write(100);
        break;
      case '1':
        Serial.write(B10010000);
        Serial.write(2);
        Serial.write(100);
        break;
      case '2':
        Serial.write(B10010000);
        Serial.write(3);
        Serial.write(100);
        break;
      case '3':
        Serial.write(B10010000);
        Serial.write(4);
        Serial.write(100);
        break;
      case '4':
        Serial.write(B10010000);
        Serial.write(5);
        Serial.write(100);
        break;
      case '5':
        Serial.write(B10010000);
        Serial.write(6);
        Serial.write(100);
        break;
      case '6':
        Serial.write(B10010000);
        Serial.write(7);
        Serial.write(100);
        break;
      case '7':
        Serial.write(B10010000);
        Serial.write(8);
        Serial.write(100);
        break;
      case '8':
        Serial.write(B10010000);
        Serial.write(9);
        Serial.write(100);
        break;
      case '9':
        Serial.write(B10010000);
        Serial.write(10);
        Serial.write(100);
        break;
      case 'A':
        Serial.write(B10010000);
        Serial.write(11);
        Serial.write(100);
        break;
      case 'B':
        Serial.write(B10010000);
        Serial.write(12);
        Serial.write(100);
        break;
      case 'C':
        Serial.write(B10010000);
        Serial.write(13);
        Serial.write(100);
        break;
      case 'D':
        Serial.write(B10010000);
        Serial.write(14);
        Serial.write(100);
        break;
      case 'E':
        Serial.write(B10010000);
        Serial.write(15);
        Serial.write(100);
        break;
      case 'F':
        Serial.write(B10010000);
        Serial.write(16);
        Serial.write(100);
        break;
      case 'G':
        Serial.write(B10010000);
        Serial.write(17);
        Serial.write(100);
        break;
      case 'H':
        Serial.write(B10010000);
        Serial.write(18);
        Serial.write(100);
        break;
      case 'I':
        Serial.write(B10010000);
        Serial.write(19);
        Serial.write(100);
        break;
      case 'J':
        Serial.write(B10010000);
        Serial.write(20);
        Serial.write(100);
        break;
      case 'K':
        Serial.write(B10010000);
        Serial.write(21);
        Serial.write(100);
        break;
      case 'L':
        Serial.write(B10010000);
        Serial.write(22);
        Serial.write(100);
        break;
      case 'M':
        Serial.write(B10010000);
        Serial.write(23);
        Serial.write(100);
        break;
      case 'N':
        Serial.write(B10010000);
        Serial.write(24);
        Serial.write(100);
        break;
      case 'O':
        Serial.write(B10010000);
        Serial.write(25);
        Serial.write(100);
        break;
      case 'P':
        Serial.write(B10010000);
        Serial.write(26);
        Serial.write(100);
        break;
      case 'Q':
        Serial.write(B10010000);
        Serial.write(27);
        Serial.write(100);
        break;
      case 'R':
        Serial.write(B10010000);
        Serial.write(28);
        Serial.write(100);
        break;
      case 'S':
        Serial.write(B10010000);
        Serial.write(29);
        Serial.write(100);
        break;
      case 'T':
        Serial.write(B10010000);
        Serial.write(30);
        Serial.write(100);
        break;
      case 'U':
        Serial.write(B10010000);
        Serial.write(31);
        Serial.write(100);
        break;
      case 'V':
        Serial.write(B10010000);
        Serial.write(32);
        Serial.write(100);
        break;
      case 'W':
        Serial.write(B10010000);
        Serial.write(33);
        Serial.write(100);
        break;
      case 'X':
        Serial.write(B10010000);
        Serial.write(34);
        Serial.write(100);
        break;
      case 'Y':
        Serial.write(B10010000);
        Serial.write(35);
        Serial.write(100);
        break;
    }
  }
}
