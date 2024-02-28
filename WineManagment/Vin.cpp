#include "Vin.h"

Vin::Vin(string nume, int pret, string tip, int an)
{
	this->nume = nume;
	this->pret = pret;
	this->tip = tip;
	this->an = an;
}

string Vin::getNume()
{
	return nume;
}

int Vin::getPret()
{
	return pret;
}

string Vin::getTip()
{
	return tip;
}

int Vin::getAn()
{
	return an;
}

ostream& operator<<(ostream& os, Vin& vin)
{
	// TODO: insert return statement here
	vin.afisare(os);
	return os;
}

istream& operator>>(istream& is, Vin& vin)
{
	// TODO: insert return statement here
	is >> vin.nume >> vin.pret >> vin.tip >> vin.an;
	return is;
}
