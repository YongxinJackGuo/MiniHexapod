// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       HexapodMiniSketch.ino
    Created:	2018/12/3 3:01:40
    Author:     DESKTOP-55HMD0U\Juhua
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts
#include "MiniHexapod.h"
Hexapod hexapod(1,2,3,4);

void setup()
{
	Serial.begin(115200);
	pinMode(13, OUTPUT);
	Serial.println("welcome to my zone....");
}

// Add the main program code into the continuous loop() function
void loop()
{
	float a[legNumber] = { 1,2,3,4,5,6 };
	hexapod.setLegBase(a,a,a);
	hexapod.printCoordinate(a,a,a,'s',5);    
	delay(2000);

}
