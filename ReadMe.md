This block of code calls forward all libraries that are required to properly execute the code. 
These three lines of code are used to somewhat re-define the library names, into something that can be used in the actual code, easily. 
This block of code is used to state where the mechanical signal terminals of the code are located, and gives instructions to the IR receiver for when to decode a signal from its remote.
This line of code is to let the user communicate to the arduino to pick up the DHT11s signal from pin 4.
This block is the initial setup of the code. What happens here is consistent amongst the entire process, and stays the same. The first line indicates that in any place the code says servo1, it wants the line to refer to the servoPin definition, which is located at pin 9. The IR lines make the IR receiver blink when it receives a signal, and send signals to the program. The LCD line initialises the LCD.
This entire compilation dictates the part of the code that repeats over and over again. The first line prompts the IR receiver to decode any signal it receives, and to compare them to the hex code values given below. If any of the signals picked up by the IR receiver correlate with the hex code values in the 2 blocks below, then the specified instruction on what the servo motors orientation should be follows the press of the button, in a matter of seconds. The line of code after the two blocks addressing the hex code values, tells the IR receiver to stay prompt for any other signals. 



This block of the code is the portion that writes the DHT11 reading to the LCD. The first line tells the arduino to read the integer value from the DHT11 sensor at pin 11. The second line initialises the backlight of the LCD. The third line sets the placement of where the first line of text should be, and the 4th says what the LCD should print in its first line. Lines 5 to 6 are the same,  just with the bottom line.  Line 7 tells the program to print the DHT temperature reading, and line 8 tells the program to add a "°C" at the end, on the LCD. 

As the first plot isn't actual code, it is information about the compiler, and the general intent of the code.
These four lines of codes are meant to let the program know where the trigger, echo, red, and green pins are located. 
This block of code is meant to define the respective sensors on the ultrasonic sensor on whether they’re input or output, and the red and green pins are both marked as output pins. This entire block of code is meant to stay consistent throughout the entire code.
This block of code is meant for the trigger pin to send out its ultrasonic signal, and for the echo pin to receive said signal after it bounces off an obstructing object.




After receiving the signal through the echo pin, this block of code is used to stop power going to the red pin and send power to the green pin, if the distance is more than 0, but less than 5.

This block of code is to do somewhat of the same thing as the last block. The block stops power going to the green pin and sends power to the red pin, if the distance is more than 20, but less than 80 (tray maximum).
If the echo pin detects a reading higher than 80, then the system shuts off, as it has most likely been misplaced.

