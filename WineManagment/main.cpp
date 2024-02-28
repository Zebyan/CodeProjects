#include "Vin.h"
#include "VinNespumat.h"
#include "VinSpumat.h"
#include "Functions.h"
#include <list>

int main()
{
	list<Vin*> vin;
	readCSV("stoc.csv", vin);

	for (auto& it : vin)
	{
		it->afisare(cout);
		cout << endl;
	}
	return 0;
}