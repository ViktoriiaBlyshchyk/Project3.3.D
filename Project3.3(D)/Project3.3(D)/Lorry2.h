#pragma once
#include "Car.h"

class Lorry2 :
	private Car
{
private:
	double carryingAbility;

public:
	double GetCarryingAbility() const { return carryingAbility; }
	void SetCarryingAbility(double carryingAbility) { this->carryingAbility = carryingAbility; }

	Lorry2(const string tradeMark = "", const double enginePower = 0, const double numberOfCylinders = 0, const double carryingAbility = 0);
	Lorry2(const Lorry2& l);
	~Lorry2(void);

	Lorry2& operator = (const Lorry2& l);
	operator string () const;

	friend ostream& operator << (ostream& out, const Lorry2& l);
	friend istream& operator >> (istream& in, Lorry2& l);

	double Change2();
};
