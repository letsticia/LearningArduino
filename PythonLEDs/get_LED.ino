#include <cvzone.h>

/* this code makes with the value received from the serial port
be 1 or 0, and, depending on that, the LED will turn on or off */

SerialData serialData(1, 1); 
//(total of numbers that you want to reiceve, digits of the numbers that you want to send)

int valuesReceived[1]; // will store the values received from the serial port

void setup() {
    serialData.begin(); // start serial communication at 9600 bits per second
    pinMode(13, OUTPUT); // set pin 13 as output

}

void loop() {
    serialData.get(valuesReceived); // get the values from the serial port and store them in the array
    valuesReceived[0]; // value reicived from the serial port
    digitalWrite(13, valuesReceived[0]); // turn on or off the LED depending on the value received
}
   
