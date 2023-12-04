#include "mantikor.h"

Mantikor::Mantikor(double I, double K, double O, double U)
{
	if (I >= 0 && I <= 1 && K >= 0 && K <= 1 && O >= 0 && O <= 1 && U >= 0 && U <= 1) {
		this->I = I;
		this->K = K;
		this->O = O;
		this->U = U;

		this->B = 0.5 * (U + O) * K;
		this->M = I * (K + O + U) / 3;
	}
}

void Mantikor::prikaz()
{
}

void Mantikor::prikaz(ostream& izlaz)
{
	izlaz << "Neprijatelj: Mantikor, Borbena spremnost: " << this->B << " Magicna privlacnost: " << this->M << " Intenzitet crvene svetlosti: " << this->I << " Simetrija rogova: " << this->K << " Efektivnost otrova: " << this->O << " Efektivna snaga ugriza: " << this->U << endl;
}
