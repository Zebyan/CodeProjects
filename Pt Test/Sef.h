#pragma once
#include "Angajat.h"

class Sef :public Angajat {
	int nrAngajati;
	string proiect;
	Sef* head;
	Sef* next;
public:
	Sef(string, string, int, string, int, int, string);

	void adaugareSef();
	void afisare();
	void cautareSef(string nume_aux);
	void stergeSef(string nume_sters);
};