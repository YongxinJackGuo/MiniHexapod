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
	Hexapod(float coxa, float tibia, float bodyLength, float bodyWidth);    //User input
	void setLegBase(float *legBaseX, float *legBaseY, float *legBaseZ);     //User input
	void liftOff(); //User call
	void printCoordinate(float *coord1, float *coord2, float *coord3, char a, int legIndex);   //for test purpose, legIndex: leg of interest; a: 's' (single) or 'a' (all)
private:
	float _coxa;
	float _tibia;
	float _bodyLength;
	float _bodyWidth;
	void geometrySetup(float _coxa, float _tibia, float _bodyLength, float _bodyWidth);
	float getCoxa();
	float getTibia();
	float getBodyLength();
	float getBodyWidth();
	float *_legBaseX, *_legBaseY, *_legBaseZ;
	float **_footPointX, **_footPointY, **_footPointZ;     //2D dynamic array
	void coordinateTranslation();
	void coordinateRotation();
	void angleConversion();

	
};

#endif