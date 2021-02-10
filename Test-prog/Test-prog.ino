#include <Keypad.h>

const byte ROWS = 10;
const byte COLS = 7;
char hexaKeys[ROWS][COLS] = {
  {'0', '1', '2', '3', '4', '5', '6'},
  {'A', 'B', 'C', 'D', 'E', 'F', 'G'},
  {'K', 'L', 'M', 'N', 'O', 'P', 'Q'},
  {'U', 'V', 'W', 'X', 'Y', 'Z', 'a'},
  {'e', 'f', 'g', 'h', 'i', 'j', 'k'},
  {'o', 'p', 'q', 'r', 's', 't', 'u'},
  {'y', 'z', '!', '@', '#', '$', '%'},
  {'7', '8', '9', 'H', 'I', 'J', 'R'},
  {'S', 'T', 'b', 'c', 'd', 'l', 'm'},
  {'n', 'v', 'w', 'x', '^', '&', '*'},
};
byte rowPins[ROWS] = {13, 12, 14, 27, 26, 25, 33, 32, 35, 34};
byte colPins[COLS] = {15, 2, 4, 5, 18, 19, 21};

/*
const byte ROWS = 7;
const byte COLS = 10;
char hexaKeys[ROWS][COLS] = {
  {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},
  {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
  {'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'},
  {'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd'},
  {'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'},
  {'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x'},
  {'y', 'z', '!', '@', '#', '$', '%', '^', '&', '*'},
};
byte colPins[COLS] = {13, 12, 14, 27, 26, 25, 33, 32, 35, 34};
byte rowPins[ROWS] = {15, 2, 4, 5, 18, 19, 21};
*/
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(14, INPUT);
  pinMode(27, INPUT);
  pinMode(26, INPUT);
  pinMode(25, INPUT);
  pinMode(33, INPUT);
  pinMode(32, INPUT);
  pinMode(35, INPUT);
  pinMode(34, INPUT);
  pinMode(15, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(21, OUTPUT);
}

void loop() {
  char customKey = customKeypad.getKey();
  //Serial.print('A');

  if (customKey) {
    switch (customKey) {
      case '0':
        Serial.print('0');
        break;
      case '1':
        Serial.print('1');
        break;
      case '2':
        Serial.print('2');
        break;
      case '3':
        Serial.print('3');
        break;
      case '4':
        Serial.print('4');
        break;
      case '5':
        Serial.print('5');
        break;
      case '6':
        Serial.print('6');
        break;
      case '7':
        Serial.print('7');
        break;
      case '8':
        Serial.print('8');
        break;
      case '9':
        Serial.print('9');
        break;
      case 'A':
        Serial.print('A');
        break;
      case 'B':
        Serial.print('B');
        break;
      case 'C':
        Serial.print('C');
        break;
      case 'D':
        Serial.print('D');
        break;
      case 'E':
        Serial.print('E');
        break;
      case 'F':
        Serial.print('F');
        break;
      case 'G':
        Serial.print('G');
        break;
      case 'H':
        Serial.print('H');
        break;
      case 'I':
        Serial.print('I');
        break;
      case 'J':
        Serial.print('J');
        break;
      case 'K':
        Serial.print('K');
        break;
      case 'L':
        Serial.print('L');
        break;
      case 'M':
        Serial.print('M');
        break;
      case 'N':
        Serial.print('N');
        break;
      case 'O':
        Serial.print('O');
        break;
      case 'P':
        Serial.print('P');
        break;
      case 'Q':
        Serial.print('Q');
        break;
      case 'R':
        Serial.print('R');
        break;
      case 'S':
        Serial.print('S');
        break;
      case 'T':
        Serial.print('T');
        break;
      case 'U':
        Serial.print('U');
        break;
      case 'V':
        Serial.print('V');
        break;
      case 'W':
        Serial.print('W');
        break;
      case 'X':
        Serial.print('X');
        break;
      case 'Y':
        Serial.print('Y');
        break;
      case 'Z':
        Serial.print('Z');
        break;
      case 'a':
        Serial.print('a');
        break;
      case 'b':
        Serial.print('b');
        break;
      case 'c':
        Serial.print('c');
        break;
      case 'd':
        Serial.print('d');
        break;
      case 'e':
        Serial.print('e');
        break;
      case 'f':
        Serial.print('f');
        break;
      case 'g':
        Serial.print('g');
        break;
      case 'h':
        Serial.print('h');
        break;
      case 'i':
        Serial.print('i');
        break;
      case 'j':
        Serial.print('j');
        break;
      case 'k':
        Serial.print('k');
        break;
      case 'l':
        Serial.print('l');
        break;
      case 'm':
        Serial.print('m');
        break;
      case 'n':
        Serial.print('n');
        break;
      case 'o':
        Serial.print('o');
        break;
      case 'p':
        Serial.print('p');
        break;
      case 'q':
        Serial.print('q');
        break;
      case 'r':
        Serial.print('r');
        break;
      case 's':
        Serial.print('s');
        break;
      case 't':
        Serial.print('t');
        break;
      case 'u':
        Serial.print('u');
        break;
      case 'v':
        Serial.print('v');
        break;
      case 'w':
        Serial.print('w');
        break;
      case 'x':
        Serial.print('x');
        break;
      case 'y':
        Serial.print('y');
        break;
      case 'z':
        Serial.print('z');
        break;
      case '!':
        Serial.print('!');
        break;
      case '@':
        Serial.print('@');
        break;
      case '#':
        Serial.print('#');
        break;
      case '$':
        Serial.print('$');
        break;
      case '%':
        Serial.print('%');
        break;
      case '^':
        Serial.print('^');
        break;
      case '&':
        Serial.print('&');
        break;
      case '*':
        Serial.print('*');
        break;
    }
    delay(10);
  }
}
