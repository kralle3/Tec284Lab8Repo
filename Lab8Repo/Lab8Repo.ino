int redPin = 7;
int yellowPin = 6;
int greenPin = 5;

int buttonPin = 2;
int buttonState = 0;

void setup() {
  // Set the LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  pinMode(buttonPin, INPUT);

}

void loop() {

    buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    // If button is pressed, turn on the green light
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    delay(2000);
  } 
  else {
    // If button is not pressed, follow the normal stoplight sequence
    // Turn on red light
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(5000);  // Red light stays on for 5 seconds

    // Turn on yellow light
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(2000);  // Yellow light stays on for 2 seconds

    // Turn on green light
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(5000);  // Green light stays on for 5 seconds

    // Turn off all lights before restarting the loop
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  }
}