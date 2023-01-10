#include "Auto.h"
const int Auto::getMaxSpeed()const {
	return _maxSpeed;
}
const float Auto::getAcceleration()const {
	return _acceleration;
}
void Auto::setMaxSpeed(int maxSpeed) {
	_maxSpeed = maxSpeed;
}
void Auto::setAcceleration(float acceleration) {
	_acceleration = acceleration;
}