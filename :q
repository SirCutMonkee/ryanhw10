/** 	filename: gpioApp.cpp
*
*	A. Write an application named gpioApp.cpp that uses the textbook’s classes LED and GPIO and
*	your AnalogIn class to control gpio pins. The application shall perform the following tasks and
*	then exits:
*	1. Turn on user LEDs number 1 and 3.
*	2. Flash user LED 2 three times.
*	3. Read the temperature sensor and display its value.
*	4. Read the push button on P8.16.
*	5. If the push button in item 4 was pushed, turn on the LED on P9.12.
*
*	This program takes no arguments. To run call gpioApp
*/

#include <iostream>
#include <string>
#include <unistd.h>
#include "GPIO.h"
#include "Analogin.h"
#include "derek_LED.h"

using namespace std;
using exploringBB::GPIO_VALUE;

int main(int argc, char* argv[]){
	cout << "Starting gpioApp.cpp" << endl;

	LED led[4] = { LED(0), LED(1), LED(2), LED(3) };

	AnalogIn tempSensor;	
	float temp;
	GPIO gpio46(46);
	GPIO_VALUE gpio46val;
	GPIO gpioLED(60);

	led[1].turnOn();
	led[3].turnOn();
	led[2].blink(2);
	
	temp = -40.0 + 100*(0.00043956 * tempSensor.readADCSample() - 0.1);
	cout << "Temperature: " << temp << endl;
	gpio46val = gpio46.getValue();
	cout << "GPIO 46 state: " << gpio46val << endl;
	if(gpio46val == LOW){
		gpioLED.setValue(HIGH);
	}
	else{
		gpioLED.setValue(LOW);
	}
	cout << "Closing gpioApp.cpp" << endl;

	return 0;
}


