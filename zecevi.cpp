#include "zecevi.h"

Zecevi::Zecevi(double C, double W)
{
	this->C = C;
	this->W = W;

	B = W;
	M = C;
}

void Zecevi::prikaz()
{
}

void Zecevi::prikaz(ostream& izlaz)
{
	izlaz << "Neprijatelj: Beli Zec, Borbena spremnost: " << this->B << " Magicna privlacnost: " << this->M << " Intenzitet bele boje: " << this->C << " Wakizashi skill level: " << this->W << endl;
}

