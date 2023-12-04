#include "neprijatelji.h"

double Neprijatelji::getB()
{
    return this->B;
}

double Neprijatelji::getM()
{
    return this->M;
}

ostream& operator<<(ostream& izlaz, Neprijatelji& n)
{
    n.prikaz(izlaz);
    return izlaz;
}

