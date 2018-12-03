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
Hexapod hexapod;

void setup()
{
	hexapod.begin(115200);
	pinMode(13, HIGH);

}

// Add the main program code into the continuous loop() function
void loop()
{
	digitalWrite(13, HIGH);
	delay(2000);
	digitalWrite(13, LOW);
	delay(2000);

}
