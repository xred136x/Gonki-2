#include "Moto.h"
const int Moto::getMaxSpeed()const {
	return _maxSpeed;
}
const float Moto::getAcceleration()const {
	return _acceleration;
}
void Moto::setMaxSpeed(int maxSpeed) {
	_maxSpeed = maxSpeed;
}
void Moto::setAcceleration(float acceleration) {
	_acceleration = acceleration;
}