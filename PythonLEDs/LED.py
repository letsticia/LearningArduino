from cvzone.SerialModule import SerialObject
from time import sleep

# this code sends commands to the arduino to turn on and off the LED

arduino = SerialObject() # will detect automatically the port

while True:
    arduino.sendData([1]) # send 1 to the arduino
    sleep(3) # wait 3 seconds
    arduino.sendData([0]) # send 0 to the arduino
    sleep(1) # wait 1 second