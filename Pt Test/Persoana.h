#pragma once
#include <iostream>
using namespace std;

class Persoana {
protected:
	string nume;
	string prenume;
	int varsta;
public:
	Persoana(string, string, int);

	virtual void afisare();
};