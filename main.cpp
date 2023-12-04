#include <iostream>
#include "vitez.h"
#include "azdaja.h"
#include "mantikor.h"
#include "zecevi.h"

int main() {
	int brAzdaja = 777;
	int brMantikora = 777;
	int brZeceva = 777;
	Vitez* v = new Vitez(brAzdaja, brMantikora, brZeceva);

	srand(time(NULL));

	for (int i = 0; i < brAzdaja; i++)
	{
		double S = (double)rand() / RAND_MAX;
		double K = (double)rand() / RAND_MAX;
		double T = (double)rand() / RAND_MAX;
		double U = (double)rand() / RAND_MAX;

		Azdaja* a = new Azdaja(S, K, T, U);
		v->dodajNeprijatelja(a);
	}
	for (int i = 0; i < brMantikora; i++)
	{
		double I = (double)rand() / RAND_MAX;
		double K = (double)rand() / RAND_MAX;
		double O = (double)rand() / RAND_MAX;
		double U = (double)rand() / RAND_MAX;

		Mantikor* m = new Mantikor(I, K, O, U);
		v->dodajNeprijatelja(m);
	}
	for (int i = 0; i < brZeceva; i++)
	{
		double C = (double)rand() / RAND_MAX;
		double W = (double)rand() / RAND_MAX;

		Zecevi* z = new Zecevi(C, W);
		v->dodajNeprijatelja(z);
	}

	v->sortirajB();
	cout << *v;

	cout << endl;

	v->sortirajM();
	cout << *v;
}