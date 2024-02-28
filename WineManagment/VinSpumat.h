#pragma once
#include "Vin.h"

class VinSpumat :public Vin {
	string zahar;
public:
	VinSpumat(string name, int pret, string tip, int an, string zahar);

	void afisare(ostream& os);
};