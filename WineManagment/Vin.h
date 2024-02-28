#pragma once
#include <iostream>

using namespace std;

class Vin {
	string nume;
	int pret;
	string tip;
	int an;
public:
	Vin(string nume, int pret, string tip,int an);

	virtual void afisare(ostream& os) = 0;

	string getNume();
	int getPret();
	string getTip();
	int getAn();

	friend ostream& operator << (ostream & os, Vin & vin);
	friend istream& operator >> (istream& is, Vin& vin);
};