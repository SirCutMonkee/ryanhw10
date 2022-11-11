/** filename: test_analog.cpp
*	This test application simply instantiates an AnalogIn object with
*	number zero, then calls getNumber(), and finally calls readAdcSample().
*
*	This program takes 0 or 1 arguments. To call run test_analog channel# (optional)
*/

#include <iostream>
#include <string>
#include "Analogin.h"

using namespace std;

int main(int argc, char* argv[]){
   if(argc < 2){
      AnalogIn analogObject;
      cout << "Getting channel number." << endl;
      analogObject.getNumber();
      cout << "ADC Result: " << analogObject.readADCSample() << endl;
   }
   else if(argc == 2){
      AnalogIn analogObject(stoi(argv[1]));
      cout << "Getting channel number." << endl;
      analogObject.getNumber();
      cout << "ADC Result: " << analogObject.readADCSample() << endl;
   }
   else{
      cout << "Too many arguments." << endl;
      cout << "Usage is: test_analog channel# (optional)" << endl;
      return 1;
   }

   cout << "Closing test_analog." << endl;

   return 0;
}
