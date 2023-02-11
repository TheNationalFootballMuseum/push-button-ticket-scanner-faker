# PUSH BUTTON TICKET SCANNER FAKER 

#### Authors: Michael Shields, Mark Howarth
#### The National Football Museum, Manchester, UK

## DETAILS: 

This sketch programs an Arduino UNO so that
when the connected push button is pressed,
a message is transmitted via the connected
TTL to RS2323 converter.

The message 'fakes' the output of the original
Ticket Scanner. The message will only be valid 
if the ticketID is valid.

The integrated LED attatched to PIN 13 
confirms the current state of the push button. 

## WARNING!:

The use of the softSerial `print` method 
rather than `println` is intentional, DO NOT CHANGE! 
The connected system does not expect message terminations 
such as carriage returns or new lines.

## INSTALLATION

The Arduino Sketch must be compiled and uploaded to the Arduino UNO microcontroller. 
You will need to download and install the [Arduino IDE](https://www.arduino.cc/en/software) to do this.
Once you have installed the IDE, download the [Arduino Sketch]() contained within this repo

