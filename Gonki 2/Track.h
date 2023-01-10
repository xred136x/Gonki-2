#pragma once
#include"Auto.h"
#include"Moto.h"
#include<iostream>
#include<cstring>
class Track
{
public:
	Track(std::string& name, float turns, float stretch );
	void race(Auto& a, Moto& m, float ratioTurns, float ratioStretch);
	const std::string& getName()const;
	const float getTurns() const;
	const float getStretch() const;

private:
	std::string _name;
	float _turns;
	float _stretch;
};

