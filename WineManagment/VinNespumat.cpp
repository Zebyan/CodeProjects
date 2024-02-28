#include "VinNespumat.h"

VinNespumat::VinNespumat(string nume, int pret, string tip, int an, string perlaj):Vin(nume,pret,tip,an)
{
	this->perlaj = perlaj;
}

void VinNespumat::afisare(ostream& os)
{
	os << "Nume Produs: " << getNume() << endl;
	os << "Pret: " << getPret() << " lei" << endl;
	os << "Tip de vin: " << getTip() << endl;
	os << "An Productie: " << getAn() << endl;
	os << "Perlaj: " << perlaj << endl;
}
