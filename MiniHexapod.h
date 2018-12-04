// MiniHexapod.h

#ifndef _MINIHEXAPOD_h
#define _MINIHEXAPOD_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif
#define legNumber 6
class Hexapod {
public:
	Hexapod(float coxa, float tibia, float bodyLength, float bodyWidth);
	void begin(int baudRate);
	void setLegBase(float *legBaseX, float *legBaseY, float *legBaseZ);
	void liftOff();
private:
	float _coxa;
	float _tibia;
	float _bodyLength;
	float _bodyWidth;
	void geometrySetup(float c, float t, float l, float w);
	float getCoxa();
	float getTibia();
	float getBodyLength();
	float getBodyWidth();
	float _legBaseX[legNumber], _legBaseY[legNumber], _legBaseZ[legNumber];
	int stepFineness = 3;
	float _footPointX[stepFineness][legNumber], _footPointY[][legNumber];
	void coordinateTranslation();
	void coordinateRotation();
	void angleConversion();

	
};

#endif