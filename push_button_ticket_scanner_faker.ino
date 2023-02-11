// PUSH BUTTON TICKET SCANNER FAKER 

// Authors: Michael Shields, Mark Howarth
// The National Football Museum, Manchester, UK

// DETAILS: 

// This sketch programs an Arduino UNO so that
// when the connected push button is pressed,
// a message is transmitted via the connected
// TTL to RS2323 converter.

// The message 'fakes' the output of the original
// Ticket Scanner. The message will only be valid 
// if the ticketID is valid.

// The integrated LED attatched to PIN 13 
// confirms the current state of the push button. 

// WARNING!:

// The use of the softSerial print method 
// rather than println is intentional, DO NOT CHANGE! 
// The connected system does not expect message terminations 
// such as carriage returns or new lines.

#include <SoftwareSerial.h>
SoftwareSerial softSerial(10, 9); // RX, TX

String URL = "http://www.nationalfootballmuseum.com/join-in/my-football-plus/?tktid=";
String ticketID = "0317797NVV";

const int buttonPin = 10;
const int ledPin = 13;
int currentButtonState = 0;
int previousButtonState = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  softSerial.begin(9600);
}

void loop() {
  currentButtonState = digitalRead(buttonPin);
  
  if (currentButtonState != previousButtonState) {
    
    if (currentButtonState == LOW) {
      
      softSerial.print(URL + ticketID);

      digitalWrite(ledPin, HIGH);
      
    } else {
    	
      digitalWrite(ledPin, LOW);
    }
  
    delay(50); // Debounce
  }
  
  previousButtonState = currentButtonState;
}