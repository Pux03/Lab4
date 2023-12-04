#pragma once
#include <iostream>
#include "neprijatelji.h"
class Vitez {
private:
	Neprijatelji** neprijatelji;
	int brNeprijatelja;
	int trenutniBrojNeprijatelja;
public:

	Vitez(int brAzdaja, int brMantikora, int brZeceva);
	void dodajNeprijatelja(Neprijatelji* n);
	void sortirajB();
	void sortirajM();
	friend ostream& operator<<(ostream& izlaz, Vitez& v);
};