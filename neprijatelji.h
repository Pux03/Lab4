#pragma once
#include <iostream>
using namespace std;
class Neprijatelji {
protected:
	double B;
	double M;
public:
	virtual void prikaz(ostream& izlaz) = 0;
	virtual void prikaz() = 0;
	virtual double getB();
	virtual double getM();
	friend ostream& operator<<(ostream& izlaz, Neprijatelji& n);
};