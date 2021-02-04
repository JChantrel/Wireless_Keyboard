#include <Keypad.h>

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
byte colPins[COLS] = {36, 39, 34, 35, 32, 33, 25, 26, 27, 14};
byte rowPins[ROWS] = {19, 18, 5, 17, 16, 8, 7};

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char customKey = customKeypad.getKey();
  Serial.println(customKeypad.getState());
  
  if (customKey) {
    switch (customKey) {
      case '0':
        Serial.write('0');
        break;
      case '1':
        Serial.write('1');
        break;
      case '2':
        Serial.write('2');
        break;
      case '3':
        Serial.write('3');
        break;
      case '4':
        Serial.write('4');
        break;
      case '5':
        Serial.write('5');
        break;
      case '6':
        Serial.write('6');
        break;
      case '7':
        Serial.write('7');
        break;
      case '8':
        Serial.write('8');
        break;
      case '9':
        Serial.write('9');
        break;
      case 'A':
        Serial.write('A');
        break;
      case 'B':
        Serial.write('B');
        break;
      case 'C':
        Serial.write('C');
        break;
      case 'D':
        Serial.write('D');
        break;
      case 'E':
        Serial.write('E');
        break;
      case 'F':
        Serial.write('F');
        break;
      case 'G':
        Serial.write('G');
        break;
      case 'H':
        Serial.write('H');
        break;
      case 'I':
        Serial.write('I');
        break;
      case 'J':
        Serial.write('J');
        break;
      case 'K':
        Serial.write('K');
        break;
      case 'L':
        Serial.write('L');
        break;
      case 'M':
        Serial.write('M');
        break;
      case 'N':
        Serial.write('N');
        break;
      case 'O':
        Serial.write('O');
        break;
      case 'P':
        Serial.write('P');
        break;
      case 'Q':
        Serial.write('Q');
        break;
      case 'R':
        Serial.write('R');
        break;
      case 'S':
        Serial.write('S');
        break;
      case 'T':
        Serial.write('T');
        break;
      case 'U':
        Serial.write('U');
        break;
      case 'V':
        Serial.write('V');
        break;
      case 'W':
        Serial.write('W');
        break;
      case 'X':
        Serial.write('X');
        break;
      case 'Y':
        Serial.write('Y');
        break;
      case 'Z':
        Serial.write('Z');
        break;
      case 'a':
        Serial.write('a');
        break;
      case 'b':
        Serial.write('b');
        break;
      case 'c':
        Serial.write('c');
        break;
      case 'd':
        Serial.write('d');
        break;
      case 'e':
        Serial.write('e');
        break;
      case 'f':
        Serial.write('f');
        break;
      case 'g':
        Serial.write('g');
        break;
      case 'h':
        Serial.write('h');
        break;
      case 'i':
        Serial.write('i');
        break;
      case 'j':
        Serial.write('j');
        break;
      case 'k':
        Serial.write('k');
        break;
      case 'l':
        Serial.write('l');
        break;
      case 'm':
        Serial.write('m');
        break;
      case 'n':
        Serial.write('n');
        break;
      case 'o':
        Serial.write('o');
        break;
      case 'p':
        Serial.write('p');
        break;
      case 'q':
        Serial.write('q');
        break;
      case 'r':
        Serial.write('r');
        break;
      case 's':
        Serial.write('s');
        break;
      case 't':
        Serial.write('t');
        break;
      case 'u':
        Serial.write('u');
        break;
      case 'v':
        Serial.write('v');
        break;
      case 'w':
        Serial.write('w');
        break;
      case 'x':
        Serial.write('x');
        break;
      case 'y':
        Serial.write('y');
        break;
      case 'z':
        Serial.write('z');
        break;
      case '!':
        Serial.write('!');
        break;
      case '@':
        Serial.write('@');
        break;
      case '#':
        Serial.write('#');
        break;
      case '$':
        Serial.write('$');
        break;
      case '%':
        Serial.write('%');
        break;
      case '^':
        Serial.write('^');
        break;
      case '&':
        Serial.write('&');
        break;
      case '*':
        Serial.write('*');
        break;
      
    }
  }
}
