int switchState = 0; 
 //Declare constats
const int button = 2;
const int greenLED = 3;
const int redLED1 = 4;
const int redLED2 = 5;

void setup() {
  // set up pins
  pinMode(button, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED1, OUTPUT);
  pinMode(redLED2, OUTPUT);

  for (int i = 0 ; i < 5; i ++){

    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, LOW);

    delay(150);

    digitalWrite(greenLED, LOW);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, HIGH);

    delay(150);
    digitalWrite(redLED1, HIGH);
    digitalWrite(redLED2, LOW);
    delay(150);
    digitalWrite(redLED1, LOW);
  }

}

void loop() {
  
  switchState = digitalRead(button); // check if button is pressed
  if (switchState == LOW){ //if button not pressed
    
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, LOW);

  }
  else {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, HIGH);

    delay(150);
    digitalWrite(redLED1, HIGH);
    digitalWrite(redLED2, LOW);
    delay(150);
  }

}
