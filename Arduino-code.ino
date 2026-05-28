#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);
  myservo.write(0);
  Serial.begin(9600);  // Start the serial communication
  pinMode(2, OUTPUT);  // Set pin 2 as an output
  pinMode(3, OUTPUT);  // Set pin 3 as an output
  pinMode(4, OUTPUT);  // Set pin 4 as an output
  pinMode(5, OUTPUT);  // Set pin 5 as an output
  digitalWrite(4, LOW); // Initialize LED off
  digitalWrite(5, LOW); // Initialize LED off
  digitalWrite(2, LOW); // Initialize LED off
  digitalWrite(3, LOW); // Initialize LED off
}

String voice;

void loop() {
  if (Serial.available() > 0) {
    voice = Serial.readString();  // Read the received string
    voice.trim();                 // Remove any leading/trailing whitespace, \n, \r
    Serial.println("Command: " + voice); // Debugging: print the command
  }

  if (voice == "turn on LED") {
    digitalWrite(4, HIGH); // Turn on the LED
    digitalWrite(5, HIGH);
    Serial.println("LED is ON");
  } else if (voice == "turn off LED") {
    digitalWrite(4, LOW);  // Turn off the LED
    digitalWrite(5, LOW);
    Serial.println("LED is OFF");
  }
  else if (voice=="turn on fan"){
    digitalWrite(2, HIGH); // Turn on the LED
    Serial.println("FAN is ON");
  }
  else if (voice=="turn off fan"){
    digitalWrite(2, LOW); // Turn on the LED
    Serial.println("FAN is OFF");
  }
    else if (voice=="open door"){
    myservo.write(90);
    Serial.println("DOOR is OPEN");
  }
  else if (voice=="close door"){
    myservo.write(0);
    Serial.println("DOOR is close");
  }
}
