#pragma once
#include "Persoana.h"

class Angajat :public Persoana {
protected:
	string departament;
	int vechime;
	Angajat* head;
	Angajat* next;
public:
	Angajat(string, string, int, string, int);

	void adaugareAngajat();
	virtual void afisare();
	void cautareAngajat(string);
	void stergeAngajat(string);
};
