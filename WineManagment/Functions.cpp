#include "Functions.h"
#include <fstream>

void readCSV(string numeFisier, list<Vin*>& vin)
{
	ifstream file(numeFisier);

	if (!file.is_open())
	{
		cerr << "Fisierul" << numeFisier<<" nu a putut fi deschis!" << endl;
		return;
	}

	string line;
	while (getline(file,line))
	{
		stringstream ss(line);
		string nume, tip,produs,pret1,an1;
		int pret, an;
		getline(ss, produs, ',');
		getline(ss, nume, ',');
		getline(ss, pret1, ',');
		getline(ss, tip, ',');
		getline(ss, an1, ',');
		pret = stoi(pret1);
		an = stoi(an1);
		if (produs == "VinSpumat")
		{
			string zahar;
			getline(ss, zahar, ',');
			vin.push_back(new VinSpumat(nume,pret, tip, an, zahar));
		}
		else if (produs == "VinNespumat")
		{
			string perlaj;
			getline(ss, perlaj, ',');
			vin.push_back(new VinNespumat(nume, pret, tip, an, perlaj));
		}
		else
		{
			cerr << "Nu Exista Acest Produs" << endl;
		}
	}


	file.close();
}

void cautare(list<Vin*>& vin, string perlaj)
{
	cout << "Produse cu perlaj " << perlaj << ": " << endl;
	for (auto& it : vin)
	{
		VinNespumat* vn = dynamic_cast <Vin*>(it);
	}
}
