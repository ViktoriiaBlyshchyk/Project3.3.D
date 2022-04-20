#include "Lorry2.h"

Lorry2::Lorry2(const string tradeMark, const double enginePower, const double numberOfCylinders, const double carryingAbility)
	: Car(tradeMark, enginePower, numberOfCylinders), carryingAbility(carryingAbility)
{}

Lorry2::Lorry2(const Lorry2& l)
	: Car(l)
{
	carryingAbility = l.carryingAbility;
}

Lorry2::~Lorry2(void)
{}

Lorry2& Lorry2::operator = (const Lorry2& l)
{
	Car::operator = (l);
	carryingAbility = l.carryingAbility;
	return *this;
}

Lorry2::operator string () const
{
	stringstream ss;
	ss << "carryingAbility = " << carryingAbility << endl;
	return Car::operator string() + ss.str();
}

ostream& operator << (ostream& out, const Lorry2& l)
{
	out << string(l);
	return out;
}

istream& operator >>(istream& in, Lorry2& l)
{
	string tradeMark;
	double enginePower;
	double numberOfCylinders;

	cout << endl;
	cout << "tradeMark = "; in >> tradeMark;
	cout << "enginePower = "; in >> enginePower;
	cout << "numberOfCylinders = "; in >> numberOfCylinders;
	enginePower = l.Change1();

	l.SetTradeMark(tradeMark);
	l.SetEnginePower(enginePower);
	l.SetNumberOfCylinders(numberOfCylinders);

	double carryingAbility;
	cout << endl;
	cout << "carryingAbility = "; in >> carryingAbility;

	carryingAbility = l.Change2();
	l.SetCarryingAbility(carryingAbility);

	return in;
}

double Lorry2::Change2()
{
	double y;
	cout << "carryingAbility = "; cin >> y;
	carryingAbility = y;
	return y;
}
