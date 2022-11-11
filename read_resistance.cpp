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
#include "Analogin.h"

using namespace std;

int main(int argc, char* argv[]){
	cout << "Starting read_resistance" << endl;

	AnalogIn resSense;	
	float resistance;
	
	cout << "Using AIN" << resSense.getNumber() << " to read analog value." << endl;
	cout << "Measuring resistance ..." << endl;
	resistance = resSense.readADCSample();
	cout << "ADC value is: " << resistance << endl;
	resistance = ((resistance / 1.8) - 1) * 10000;
	cout << endl;
	if(resistance < 1000){
		cout << "Resistance: " << resistance << " Ohms" << endl;
	}
	else{
		resistance /= 1000;
		cout << "Resistance: " << resistance << "k" << " Ohms" << endl;
	}	
	cout << "Closing read_resistance" << endl;

	return 0;
}

