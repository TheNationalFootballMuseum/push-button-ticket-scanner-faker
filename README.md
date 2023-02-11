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

The Arduino sketch must be compiled and uploaded to the Arduino UNO microcontroller. 
- Download and install the [Arduino IDE](https://www.arduino.cc/en/software)
- Download the [Arduino Sketch](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/push_button_ticket_scanner_faker.ino)
- Open the sketch file in the IDE 
- Connect the Arduino UNO to your computer via a USB cable
- Within the IDE, compile and upload the sketch to the Arduino UNO
- If no errors have occurred, you can disconnect the Arduino UNO from your computer
- Connect the Arduino using the [Schematic Diagram](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/Push%20Button%20Ticket%20Scanner%20Faker.pdf)
![Schematic Diagram](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/Push%20Button%20Ticket%20Scanner%20Faker.pdf)

