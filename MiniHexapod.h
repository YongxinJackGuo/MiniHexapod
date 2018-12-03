// MiniHexapod.h

#ifndef _MINIHEXAPOD_h
#define _MINIHEXAPOD_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif
class Hexapod {
public:
	Hexapod();
	void begin(int baudRate);

private:

};

#endif