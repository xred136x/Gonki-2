#pragma once
class Moto
{
public:
	const int getMaxSpeed()const;
	const float getAcceleration()const;
	void setMaxSpeed(int maxSpeed);
	void setAcceleration(float acceleration);
private:
	int _maxSpeed;
	float _acceleration;
};

