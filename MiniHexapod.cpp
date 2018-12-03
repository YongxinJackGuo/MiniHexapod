// 
// 
// 

#include "MiniHexapod.h"
#include "Arduino.h"
#include "Math.h"

Hexapod::Hexapod() {
}

void Hexapod::begin(int baudRate) {
	Serial.begin(baudRate);
}


