#include "Persoana.h"

Persoana::Persoana(string nume, string prenume, int varsta)
{
	this->nume = nume;
	this->prenume = prenume;
	this->varsta = varsta;
}

void Persoana::afisare()
{
	cout << nume << " " << prenume << " " << varsta << " ani" << endl;
}
