#include "Priamokutnyk.h"
#include <iostream>

using namespace std;

void Priamokutnyk::InitPriamokutnyk(double vysot, double shyr)
{
	this->vysot = vysot;
	this->shyr = shyr;
}

Priamokutnyk::Priamokutnyk(double vysot, double shyr)
{

	if (vysot < 0 || shyr < 0)
	{
		throw ("Incorect value!");
	}
	Priamokutnyk::InitPriamokutnyk(vysot, shyr);
}

Priamokutnyk::Priamokutnyk()
{
	Priamokutnyk::InitPriamokutnyk(0, 0);
}

Priamokutnyk::Priamokutnyk(const Priamokutnyk& priamokutnyk)
{
	this->vysot = priamokutnyk.vysot;
	this->shyr = priamokutnyk.shyr;
}

Priamokutnyk::~Priamokutnyk()
{
}

void Priamokutnyk::SetShyr(double value)
{
	if (value < 0)
	{
		throw ("Incorect value of shyr!");
	}
	shyr = value;
}

void Priamokutnyk::SetVysot(double value)
{
	if (value < 0)
	{
		throw ("Incorect value of vysot!");
	}
	vysot = value;
}

double Priamokutnyk::GetShyr()
{
	return shyr;
}

double Priamokutnyk::GetVysot()
{
	return vysot;
}

double Priamokutnyk::Perimetr()
{
	return 2 * (shyr + vysot);
}

double Priamokutnyk::Squr()
{
	return (shyr) * (vysot);
}

bool Priamokutnyk::operator < (Priamokutnyk& obj)
{
	return (this->Squr() < obj.Squr());
}

void Priamokutnyk::operator-=(double n)
{
	this->shyr = this->shyr - n;
	this->vysot = this->vysot - n;
}

ostream& operator << (ostream& out, const Priamokutnyk& obj)
{
	out << "Priamokutnyk(" << obj.vysot << ", " << obj.shyr << ")";
	return out;
}

istream& operator>>(istream& in, Priamokutnyk& obj)
{
	cout << "Print vysot: ";
	in >> obj.vysot;
	if (obj.vysot < 0) throw ("Incorect value of vysot!");
	cout << "Print shyr: ";
	in >> obj.shyr;
	if (obj.shyr < 0) throw ("Incorect value of shyr!");
	return in;
}
