# PUSH BUTTON TICKET SCANNER FAKER 

#### Authors: Michael Shields, Mark Howarth
#### The National Football Museum, Manchester, UK

## DETAILS

This repository contains a [Schematic Circuit Diagram](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/Push_Button_Ticket_Scanner_Faker_Schematic_Diagram.svg) and an [Arduino Sketch](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/push_button_ticket_scanner_faker.ino) to configure an [Arduino UNO microcontroller](https://store.arduino.cc/products/arduino-uno-rev3) 
so that when the connected push button is pressed, a message is transmitted via a connected
[TTL to RS2323 Converter](https://uk.rs-online.com/web/p/interface-adapters-converters/1887097?cm_mmc=UK-PLA-DS3A-_-google-_-CSS_UK_EN_Computing_%26_Peripherals_Whoop-_-Interface+Adapters+%26+Converters_Whoop-_-1887097&matchtype=&pla-329770284461&cq_src=google_ads&cq_cmp=9771206785&cq_term=&cq_plac=&cq_net=g&cq_plt=gp&gclid=CjwKCAiAlp2fBhBPEiwA2Q10D8TmW_kk5C9ADuID2_bbHLCIhYwIQ9HdM4woF5iJS1lUzYgzJuMkwBoCRlcQAvD_BwE&gclsrc=aw.ds) and onward to a [MOXA 5210 Serial Device Server](https://www.moxa.com/en/products/industrial-edge-connectivity/serial-device-servers/general-device-servers/nport-5200-series/nport-5210)

The message mimics the output of the [Motorola DS9208](https://www.manualslib.com/products/Motorola-Ds9208-3286010.html) QR / Barcode Scanners that were originally connected to the museum's interactive games. The message will only be valid if the combined URL and ticket ID are valid.

The Arduino UNO microcontroller's integrated LED attached to PIN 13 can be observed to test/confirm the current state of the push button (see image below). 

![Intergrated LED](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/Arduino-Uno-LED.jpg)

## WARNING!

The use of the [SoftSerial](https://docs.arduino.cc/learn/built-in-libraries/software-serial) `print` method rather than `println` is within the code of the Arduino Sketch is indeed intentional, DO NOT CHANGE THIS! The connected system expects the format of the message to match exactly as it is defined in the [Arduino Sketch](https://github.com/TheNationalFootballMuseum/push-button-ticket-scannerfaker/blob/main/push_button_ticket_scanner_faker.ino), it does not expect additional terminating characters such as carriage returns `\r` or new-lines `\n`.

If you send invalid messages to the connected system, it is highly likely that the Game Tracking Server will become confused about the current state of the associated interactive game and will not process further ticket messages and the game will not be able to be reset or restarted locally. 

In the event that this happens, the Game Tracking Server (in AV Server Room AV01) will likely need to be rebooted.

## INSTALLATION & SETUP

The Arduino sketch must be compiled and uploaded to the Arduino UNO microcontroller. 
- Download and install the [Arduino IDE](https://www.arduino.cc/en/software)
- Download the [Arduino Sketch](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/push_button_ticket_scanner_faker.ino)
- Open the sketch file in the IDE 
- Connect the Arduino UNO to your computer via a USB cable
- Confirm that a successful data connection between computer and Arduino has been established
- Within the IDE, compile and upload the sketch to the Arduino UNO
- If no errors have occurred, you can disconnect the Arduino UNO from your computer

If you need assistance with the above steps, further information can be found in the [Arduino Documentation](https://docs.arduino.cc/tutorials/)

- Finally, connect the Arduino using the [Schematic Diagram](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/Push_Button_Ticket_Scanner_Faker_Schematic_Diagram.svg) below: 

![Schematic Diagram](https://github.com/TheNationalFootballMuseum/push-button-ticket-scanner-faker/blob/main/Push_Button_Ticket_Scanner_Faker_Schematic_Diagram.svg)


