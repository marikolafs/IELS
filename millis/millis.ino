const int greenLed = 12;
const int yellowLed = 10;
const int redLed = 8;
int ledStateY = LOW;

const int buttonPin = 2;
int buttonState;
int lastButtonState = LOW;
int buttonPushCounter = 0;

const unsigned long interval = 500;
unsigned long previousTime = 0;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup(){
    
    pinMode(greenLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(redLed, OUTPUT);
    pinMode(buttonPin, INPUT);

    digitalWrite(yellowLed, ledStateY);


}

void blinkYellowLed(){
  
  unsigned long currentTime = millis();
  
  if(currentTime - previousTime >= interval){
    
    previousTime = currentTime;
    
    if(ledStateY == HIGH){
      
      ledStateY = LOW;
      
    } else{
      
      ledStateY = HIGH;
      
    }
    
    digitalWrite(yellowLed, ledStateY);
    
  }
    
}

void greenLedRedLed(){
  
   int reading = digitalRead(buttonPin);

    if(reading != lastButtonState){

        lastDebounceTime = millis();

    }

    if((millis() - lastButtonState) > debounceDelay){

        if(reading != buttonState){

            buttonState = reading;

        }

    }
  
  if(buttonState != lastButtonState){
    
    if(buttonState == HIGH){
      
      buttonPushCounter++;
      
    }
    
  } 
  
  lastButtonState = buttonState;
  
  if(buttonPushCounter % 2 == 0){
    
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    
  } else{
    
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
  
  }

    lastButtonState = reading;
  
}

void loop(){
  
  blinkYellowLed();

  greenLedRedLed();

}