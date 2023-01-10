#include"Auto.h"
#include"Moto.h"
#include "Track.h"
#include<iostream>
#include<cstring>
// 
int main() {
	setlocale(LC_ALL, "ru");
	Auto car;
	car.setAcceleration(2.5);
	car.setMaxSpeed(350);
	Moto bike;
	bike.setAcceleration(3.5);
	bike.setMaxSpeed(250);
	std::string Name("Dakar");
	float ratioTurns = 0.7;// коэфицент поворотов(чем больше поворотов, тем меньше коэфицент) не > 1
	float ratioStretch = 0.9;// коэфицент длины прямых участков(чем больше, тем меньше коэфицент)не > 1
	Track cup(Name, ratioTurns, ratioStretch);
	std::cout << "Трасса " << cup.getName() << '\n';
	cup.race(car, bike, cup.getTurns(), cup.getStretch());
	return 0;
}