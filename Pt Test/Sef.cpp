#include "Sef.h"

Sef::Sef(string nume, string prenume, int varsta, string departament, int vechime, int nrAngajati, string proiect) : Angajat(nume,prenume,varsta,departament,varsta)
{
	this->nrAngajati = nrAngajati;
	this->proiect = proiect;
	head = NULL;
}

void Sef::adaugareSef() {
	string nume;
	string prenume;
	int ani;
	string departament;
	int vechime;
	int nrAngajati;
	string proiect;
	cout << "Dati Numele Sefului: "; cin >> nume;
	cout << "Dati Prenumele Sefului: "; cin >> prenume;
	cout << "Dati Varsta Sefului: "; cin >> ani;
	cout << "Dati Departamentul: "; cin >> departament;
	cout << "Dati Vechimea: "; cin >> vechime;
	cout << "Dati Numarul de Angajati in Subordine: "; cin >> nrAngajati;
	cout << "Dati Numele Proiectului: "; cin >> proiect;
	Sef* sef = new Sef(nume, prenume, ani, departament, vechime, nrAngajati, proiect);
	sef->next = head;
	head = sef;
}

void Sef::afisare()
{
	Sef
	Angajat::afisare();
	cout << "Angajati in Subordine: " << nrAngajati;
	cout << "Proiect: " << proiect << endl;
}

void Sef::cautareSef(string nume_aux)
{
	Sef* p;
	p = head;
	while (p)
	{
		if (p->nume.compare(nume_aux) == 0)
		{
			p->afisare();
		}
		p = p->next;
	}
}

void Sef::stergeSef(string nume_sters)
{
	Sef* p, * q;
	p = q = head;
	if (p)
	{
		while (p && p->nume.compare(nume_sters) != 0)
		{
			q = p;
			p = p->next;
		}
		if (p)
		{
			if (p != q)
			{
				q->next = p->next;
				delete p;
			}
			else
			{
				head = p->next;
				delete p;
			}
		}
		else
		{
			cout << "Seful nu exista!" << endl;
		}
	}
	else
	{
		cout << "Lista este vida!" << endl;
	}
}