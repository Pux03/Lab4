#include "azdaja.h"

Azdaja::Azdaja(double S, double K, double T, double U)
{
	if (S >= 0 && S <= 1 && K >= 0 && K <= 1 && T >= 0 && T <= 1 && U >= 0 && U <= 1) {
		this->S = S;
		this->K = K;
		this->T = T;
		this->U = U;

		this->B = T * (K + 1) * U;
		this->M = S * K;
	}
}

void Azdaja::prikaz()
{
}

void Azdaja::prikaz(ostream& izlaz)
{
	izlaz << "Neprijatelj: Azdaja, Borbena spremnost: " << this->B << " Magicna privlacnost: " << this->M << " Sjajnost krljusti: " << this->S << " Simetrija krila: " << this->K << " Temperatura vatre: " << this->T << " Snaga udarca: " << this->U << endl;
}
