#include "vitez.h"

Vitez::Vitez(int brAzdaja, int brMantikora, int brZeceva)
{
	trenutniBrojNeprijatelja = 0;
	brNeprijatelja = brAzdaja + brMantikora + brZeceva;
	neprijatelji = new Neprijatelji * [brNeprijatelja];
}

void Vitez::dodajNeprijatelja(Neprijatelji* n)
{
	neprijatelji[trenutniBrojNeprijatelja++] = n;
}

void Vitez::sortirajB()
{
	for (int i = 0; i < brNeprijatelja-1; i++)
	{
		for (int j = i + 1; j < brNeprijatelja; j++)
		{
			if (neprijatelji[i]->getB() > neprijatelji[j]->getB()) {
				Neprijatelji* n;
				n = neprijatelji[i];
				neprijatelji[i] = neprijatelji[j];
				neprijatelji[j] = n;
			}
		}
	}
}

void Vitez::sortirajM()
{
	for (int i = 0; i < brNeprijatelja - 1; i++)
	{
		for (int j = i + 1; j < brNeprijatelja; j++)
		{
			if (neprijatelji[i]->getM() > neprijatelji[j]->getM()) {
				Neprijatelji* n;
				n = neprijatelji[i];
				neprijatelji[i] = neprijatelji[j];
				neprijatelji[j] = n;
			}
		}
	}
}

ostream& operator<<(ostream& izlaz, Vitez& v)
{
	for (int i = 0; i < v.brNeprijatelja; i++)
	{
		izlaz << *v.neprijatelji[i] << endl;
	}
	return izlaz;
}
