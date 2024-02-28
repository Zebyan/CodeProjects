#pragma once
#include "Vin.h"

class VinNespumat :public Vin {
	string perlaj;
public:
	VinNespumat(string nume, int pret, string tip, int an, string perlaj);

	void afisare(ostream& os);
};