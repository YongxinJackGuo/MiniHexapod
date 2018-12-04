// 
// 
// 

#include "MiniHexapod.h"
#include "Arduino.h"
#include "Math.h"
#define legNumber 6

Hexapod::Hexapod(float coxa, float tibia, float bodyLength, float bodyWidth) {
	geometrySetup(coxa, tibia, bodyLength, bodyWidth);
}

void Hexapod::setLegBase(float *legBaseX, float *legBaseY, float *legBaseZ) {
	_legBaseX[] = legBaseX[];
	_legBaseY = legBaseY;

}
void Hexapod::liftOff() {
	coordinateTranslation();
	coordinateRotation();
	angleConversion();
}

void Hexapod::begin(int baudRate) {
	Serial.begin(baudRate);
}

void Hexapod::geometrySetup(float c, float t, float l, float w) {
	_coxa = c;
	_tibia = t;
	_bodyLength = l;
	_bodyWidth = w;
}

float Hexapod::getCoxa() {
	return _coxa;
}

float Hexapod::getTibia() {
	return _tibia;
}

float Hexapod::getBodyLength() {
	return _bodyLength;
}

float Hexapod::getBodyWidth() {
	return _bodyWidth;
}

void Hexapod::coordinateTranslation() {
	
}

void Hexapod::coordinateRotation() {

}	

void Hexapod::angleConversion() {
	
}














