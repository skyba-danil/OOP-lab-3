#pragma once
#include <iostream>

using namespace std;

class Priamokutnyk
{
private:
	double shyr;
	double vysot;
	void InitPriamokutnyk(double, double);

public:
	Priamokutnyk();
	Priamokutnyk(double, double);
	Priamokutnyk(const Priamokutnyk&);
	~Priamokutnyk();
	void SetShyr(double value);
	void SetVysot(double value);
	double GetShyr();
	double GetVysot();
	double Perimetr();
	double Squr();
	bool operator < (Priamokutnyk& obj);
	void operator -= (double);
	friend ostream& operator << (ostream& out, const Priamokutnyk& obj);
	friend istream& operator >> (istream& in, Priamokutnyk& obj);
};