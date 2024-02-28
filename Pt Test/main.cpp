#include "Persoana.h"
#include "Angajat.h"
#include "Sef.h"
#include "Menu.h"


int main()
{
	Angajat* angajat =new Angajat ("","",0,"",0);
	Sef* sef = new Sef ("","",0,"",0,0,"");
	int opt;
	string numeAngajat;
	string numeSef;
	do
	{
		menu();
		cin >> opt;
		switch (opt)
		{
		case 0:
			break;
		case 1:
			angajat->adaugareAngajat();
			break;
		case 2:
			sef->adaugareSef();
			break;
		case 3:
			angajat->afisare();
			break;
		case 4:
			sef->afisare();
			break;
		case 5:
			cout << "Dati Numele Angajatului pe care il Cautati: "; cin >> numeAngajat;
			angajat->cautareAngajat(numeAngajat);
			break;
		case 6:
			cout << "Dati Numele Sefului pe care il Cautati: "; cin >> numeSef;
			sef->cautareSef(numeSef);
			break;
		case 7:
			cout << "Dati Numele Angajatului pe care Doriti sa il Stergeti: "; cin >> numeAngajat;
			angajat->stergeAngajat(numeAngajat);
			break;
		case 8:
			cout << "Dati Numele Sefului pe care Doriti sa il Stergeti: "; cin >> numeSef;
			sef->stergeSef(numeSef);
			break;
		default:
			cout << "Optiunea este gresita!" << endl;
			break;
		}

	} while (opt!=0);

	return 0;
}