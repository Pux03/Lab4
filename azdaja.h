#pragma once
#include "neprijatelji.h"
class Azdaja : public Neprijatelji {
private:
	double S;
	double K;
	double T;
	double U;
public:
	Azdaja(double S, double K, double T, double U);
	void prikaz();
	void prikaz(ostream& izlaz);
};