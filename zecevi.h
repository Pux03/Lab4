#pragma once
#include "neprijatelji.h"

class Zecevi : public Neprijatelji {
protected:
	double C;
	double W;
public:
	Zecevi(double C, double W);
	void prikaz();
	void prikaz(ostream& izlaz);


};