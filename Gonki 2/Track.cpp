#include "Track.h"
Track::Track(std::string& name, float turns, float stretch) {
	_name = name;
	_turns = turns;
	_stretch = stretch;
}

void Track::race(Auto& a, Moto& m, float ratioTurns, float ratioStretch) {
	float midleSpeed_a = a.getMaxSpeed() * ratioTurns;
	float midleSpeed_m = m.getMaxSpeed() * ratioStretch;;
	
	if (midleSpeed_a > midleSpeed_m)
		std::cout << "Автомобиль победил!!!";
	if(midleSpeed_a < midleSpeed_m)
		std::cout << "Мотоцикл победил!!!";
	if(midleSpeed_a == midleSpeed_m)
		std::cout << "Ничья";
}
const std::string& Track::getName() const {
	return _name;
}
const float Track::getTurns() const {
	return _turns;
}
const float Track::getStretch() const {
	return _stretch;
}