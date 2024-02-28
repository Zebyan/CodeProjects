#include "Angajat.h"

Angajat::Angajat(string nume, string prenume, int varsta, string departament, int vechime):Persoana(nume,prenume,varsta)
{
	this->departament = departament;
	this->vechime = vechime;
	head = NULL;
}

void Angajat::adaugareAngajat()
{
	string nume;
	string prenume;
	int ani;
	string departament;
	int vechime;
	cout << "Dati Numele Angajatului: "; cin >> nume;
	cout << "Dati Prenumele Angajatului: "; cin >> prenume;
	cout << "Dati Varsta Angajatului: "; cin >> ani;
	cout << "Dati Departamentul: "; cin >> departament;
	cout << "Dati Vechimea Angajatului: "; cin >> vechime;
	Angajat* angajat = new Angajat(nume, prenume, ani, departament, vechime);
	angajat->next = head;
	head = angajat;
}

void Angajat::afisare()
{
	Persoana::afisare();
	cout << "Departament: " << departament<<endl;
	cout << "Vechime: " << vechime << " ani" << endl;
}

void Angajat::cautareAngajat(string nume_aux)
{
	Angajat* a;
	a = head;
	while (a!=NULL)
	{
		if (a->nume.compare(nume_aux) == 0)
		{
			a->afisare();
		}
		a = a->next;
	}
}


void Angajat::stergeAngajat(string nume_sters)
{
	Angajat* p,*q;
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
			cout << "Angajatul nu se gaseste in lista!"<<endl;
		}
	}
	else
	{
		cout << "Lista este vida!" << endl;
	}

}