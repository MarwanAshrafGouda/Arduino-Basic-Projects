const int led = 13;
const int timeUnit = 150;
const int interElement = timeUnit;
const int dot = timeUnit;
const int dash = 3 * timeUnit;
const int interLetter = 3 * timeUnit;
const int interWord = 4 * timeUnit;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(10);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop() {
  while (Serial.available() == 0);
  char letter = Serial.read();
  encode(letter);
  delay(interLetter);
}

void encode(char letter) {
  switch (tolower(letter)) {
    case 'a':
      letterA();
      break;
    case 'b':
      letterB();
      break;
    case 'c':
      letterC();
      break;
    case 'd':
      letterD();
      break;
    case 'e':
      letterE();
      break;
    case 'f':
      letterF();
      break;
    case 'g':
      letterG();
      break;
    case 'h':
      letterH();
      break;
    case 'i':
      letterI();
      break;
    case 'j':
      letterJ();
      break;
    case 'k':
      letterK();
      break;
    case 'l':
      letterL();
      break;
    case 'm':
      letterM();
      break;
    case 'n':
      letterN();
      break;
    case 'o':
      letterO();
      break;
    case 'p':
      letterP();
      break;
    case 'q':
      letterQ();
      break;
    case 'r':
      letterR();
      break;
    case 's':
      letterS();
      break;
    case 't':
      letterT();
      break;
    case 'u':
      letterU();
      break;
    case 'v':
      letterV();
      break;
    case 'w':
      letterW();
      break;
    case 'x':
      letterX();
      break;
    case 'y':
      letterY();
      break;
    case 'z':
      letterZ();
      break;
    case '0':
      numberZero();
      break;
    case '1':
      numberOne();
      break;
    case '2':
      numberTwo();
      break;
    case '3':
      numberThree();
      break;
    case '4':
      numberFour();
      break;
    case '5':
      numberFive();
      break;
    case '6':
      numberSix();
      break;
    case '7':
      numberSeven();
      break;
    case '8':
      numberEight();
      break;
    case '9':
      numberNine();
      break;
    case ' ':
      delay(interWord);
  }
}

void dotLed(byte reps) {
  for (byte i = 0; i < reps; i++) {
    digitalWrite(led, HIGH);
    delay(dot);
    digitalWrite(led, LOW);
    delay(interElement);
  }
}

void dashLed(byte reps) {
  for (byte i = 0; i < reps; i++) {
    digitalWrite(led, HIGH);
    delay(dash);
    digitalWrite(led, LOW);
    delay(interElement);
  }
}

void letterA() {
  dotLed(1);
  dashLed(1);
}

void letterB() {
  dashLed(1);
  dotLed(3);
}

void letterC() {
  dashLed(1);
  dotLed(1);
  dashLed(1);
  dotLed(1);
}

void letterD() {
  dashLed(1);
  dotLed(2);
}

void letterE() {
  dotLed(1);
}

void letterF() {
  dotLed(2);
  dashLed(1);
  dotLed(1);
}

void letterG() {
  dashLed(2);
  dotLed(1);
}

void letterH() {
  dotLed(4);
}

void letterI() {
  dotLed(2);
}

void letterJ() {
  dotLed(1);
  dashLed(3);
}

void letterK() {
  dashLed(1);
  dotLed(1);
  dashLed(1);
}

void letterL() {
  dotLed(1);
  dashLed(1);
  dotLed(2);
}

void letterM() {
  dashLed(2);
}

void letterN() {
  dashLed(1);
  dotLed(1);
}

void letterO() {
  dashLed(3);
}

void letterP() {
  dotLed(1);
  dashLed(2);
  dotLed(1);
}

void letterQ() {
  dashLed(2);
  dotLed(1);
  dashLed(1);
}

void letterR() {
  dotLed(1);
  dashLed(1);
  dotLed(1);
}

void letterS() {
  dotLed(3);
}

void letterT() {
  dashLed(1);
}

void letterU() {
  dotLed(2);
  dashLed(1);
}

void letterV() {
  dotLed(3);
  dashLed(1);
}

void letterW() {
  dotLed(1);
  dashLed(2);
}

void letterX() {
  dashLed(1);
  dotLed(2);
  dashLed(1);
}

void letterY() {
  dashLed(1);
  dotLed(1);
  dashLed(2);
}

void letterZ() {
  dashLed(2);
  dotLed(2);
}

void numberZero() {
  dashLed(5);
}

void numberOne() {
  dotLed(1);
  dashLed(4);
}

void numberTwo() {
  dotLed(2);
  dashLed(3);
}

void numberThree() {
  dotLed(3);
  dashLed(2);
}

void numberFour() {
  dotLed(4);
  dashLed(1);
}

void numberFive() {
  dotLed(5);
}

void numberSix() {
  dashLed(1);
  dotLed(4);
}

void numberSeven() {
  dashLed(2);
  dotLed(3);
}

void numberEight() {
  dashLed(3);
  dotLed(2);
}

void numberNine() {
  dashLed(4);
  dotLed(1);
}
