#include "VinSpumat.h"

VinSpumat::VinSpumat(string name, int pret, string tip, int an, string zahar) :Vin(name, pret, tip, an)
{
	this->zahar = zahar;
}

void VinSpumat::afisare(ostream& os)
{
	os << "Nume Produs: " << getNume() << endl;
	os << "Pret: "<<getPret() << " lei" << endl;
	os << "Tip de vin: " << getTip() << endl;
	os << "An Productie: " << getAn() << endl;
	os << "Zahar Rezidual: " << zahar << endl;
}


