// 
// 
// 

#include "MiniHexapod.h"
#include "Arduino.h"
#include "Math.h"
#include "String.h"

Hexapod::Hexapod(float coxa, float tibia, float bodyLength, float bodyWidth) {
	geometrySetup(coxa, tibia, bodyLength, bodyWidth);      //set up the geometric parameters: coxa, tibia, body length and width.
}

void Hexapod::setLegBase(float *legBaseX, float *legBaseY, float *legBaseZ) {
	// Copy the base arrays
	_legBaseX = legBaseX;
	_legBaseY = legBaseY;
	_legBaseZ = legBaseZ;


}
void Hexapod::liftOff() {
	coordinateTranslation();
	coordinateRotation();
	angleConversion();
}


void Hexapod::printCoordinate(float *coord1, float *coord2, float *coord3, char a, int legIndex) {
	String legArr[6] = { "Left Front", "Left Middle", "Left Rear", "Right Front", "Right Middle", "Right Rear" };
	int endNumber;
	int startNumber = 0;
	switch (a) {
		case 'a' :
			endNumber = legNumber;
			break;
		case 's' :
			startNumber = legIndex - 1;
			endNumber = legIndex;
			break;
	}
	for (int i = startNumber; i < endNumber; i++) {
		Serial.println("----------");
		Serial.print(legArr[i]);
		Serial.println(":");
		Serial.print("X: ");
		Serial.println(coord1[i]);
		Serial.print("Y: ");
		Serial.println(coord2[i]);
		Serial.print("Z: ");
		Serial.println(coord3[i]);
	}
}

void Hexapod::geometrySetup(float _coxa, float _tibia, float _bodyLength, float _bodyWidth) {
	this -> _coxa = _coxa;
	this -> _tibia = _tibia;
	this -> _bodyLength = _bodyLength;
	this -> _bodyWidth = _bodyWidth;
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














