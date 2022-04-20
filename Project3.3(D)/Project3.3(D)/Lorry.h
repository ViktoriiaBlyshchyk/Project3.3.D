#pragma once
#include "Car.h"

class Lorry :
	public Car
{
private:
	double carryingAbility;

public:
	double GetCarryingAbility() const { return carryingAbility; }
	void SetCarryingAbility(double carryingAbility) { this->carryingAbility = carryingAbility; }

	Lorry(const string tradeMark = "", const double enginePower = 0, const double numberOfCylinders = 0, const double carryingAbility = 0);
	Lorry(const Lorry& l);
	~Lorry(void);

	Lorry& operator = (const Lorry& l);
	operator string () const;

	friend ostream& operator << (ostream& out, const Lorry& l);
	friend istream& operator >> (istream& in, Lorry& l);

	double Change2();
};
