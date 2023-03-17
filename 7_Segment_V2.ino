/*
  Use of an array number to store the pattern for each number from 0 to 9.
  The setup function sets the pinmode for all the pins used for the 7-segment display.
  The loop function uses a for loop to demonstrate numbers 0 to 9, and it sets the digital output for each segment.
  The delay function is used to delay the display for 1 second.
*/

const int a = 2; //a is connected to pin 2 on Arduino
const int b = 3; //b is connected to pin 3 on Arduino
const int c = 4; //c is connected to pin 4 on Arduino
const int d = 5; //d is connected to pin 5 on Arduino
const int e = 6; //e is connected to pin 6 on Arduino
const int f = 7; //f is connected to pin 7 on Arduino
const int g = 8; //g is connected to pin 8 on Arduino
const int dp = 9; //dp is connected to pin 9 on Arduino

int number[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1} // 9
};

void setup() {
  // setting up the pinmode
  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // looping through the numbers 0 to 9
  for (int i = 0; i <= 9; i++) {
    digitalWrite(a, number[i][0]);
    digitalWrite(b, number[i][1]);
    digitalWrite(c, number[i][2]);
    digitalWrite(d, number[i][3]);
    digitalWrite(e, number[i][4]);
    digitalWrite(f, number[i][5]);
    digitalWrite(g, number[i][6]);
    delay(1000); //1 second delay
  }
}
