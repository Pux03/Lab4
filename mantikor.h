#pragma once
#include "neprijatelji.h"

class Mantikor : public Neprijatelji {
private:
	double I;
	double K;
	double O;
	double U;
public:
	Mantikor(double I, double K, double O, double U);
	void prikaz();
	void prikaz(ostream& izlaz);
};