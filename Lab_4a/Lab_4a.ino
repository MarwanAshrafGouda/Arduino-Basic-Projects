short num1;
short num2;

void setup() {
  Serial.begin(9600); //no idea
  Serial.setTimeout(10); //faster, I guess
}

void loop() {
  while (Serial.available() == 0) {} //doesn't start until an input has been received
  num1 = getInput();
  Serial.println(num1);
  num2 = getInput();
  Serial.println(num2);
  Serial.println(num1 + num2);
}

int getInput() { //takes in a string value that is neither an empty string nor greater that 4 chars long
  String num;
  do {
    num = Serial.readString();
  } while (num == "" || num.length() > ((num.charAt(0) == '-') ? 6 : 5));
  return num.toInt();
}
