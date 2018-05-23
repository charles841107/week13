const int ledCount = 10; // the number of LEDs in the bar graph

int ledPins[] = {2, 3, 4, 5, 6, 7,8,9,10,11 }; // an array of pin numbers to which LEDs are attached

void setup() {
// loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
// loop over the LED array:
  int thisLed = 0;
  int thatLed = 9;
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    thatLed = 9 - thisLed;
    digitalWrite(ledPins[thisLed],HIGH);
    digitalWrite(ledPins[thatLed],HIGH);
    delay(60);
    digitalWrite(ledPins[thisLed],LOW);
    digitalWrite(ledPins[thatLed],LOW);
  }

  for (int thisLed = ledCount -1;thisLed>=0;thisLed--){
    thatLed = 9 - thisLed;
    digitalWrite(ledPins[thisLed],HIGH);
    digitalWrite(ledPins[thatLed],HIGH);
    delay(60);
    if(thisLed ==0){
      delay(200);
      }else{
      digitalWrite(ledPins[thisLed],LOW);
      digitalWrite(ledPins[thatLed],LOW);
     }
  }
}

