const int led = 13;
const int delayPeriod = 500;
String stream;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(10);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
}

void loop() {
  while (Serial.available() == 0);
  stream = stringBuilder(stream);
  Serial.println(stream);
  digitalWrite(led, isPalindrome(stream) ? HIGH : LOW);
  delay(delayPeriod);
}

bool isPalindrome(String stream) { //checks if the whole stream is a palindrome
  char * left = stream.begin();
  char * right = stream.end() - 1;
  while (left <= right) {
    if (*left++ != *right--)
      return false;
  }
  return true;
}

String stringBuilder(String stream) { //adds the next bit to the whole input stream, filters out line feed
  int input = Serial.read() - 48;
  return (input == 0 || input == 1) ? stream + input : stream;
}
