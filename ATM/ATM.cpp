// ATM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Korisnik.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("cls");
	cout << "Dobrodošli u bankomat!\n";
	cout << "Unesite korisnicko ime i lozinku za prijavu.\n\n";
	Korisnik kor;
	if (kor.login()) {
		int izbor;
		do {
			cout << "\n1 - pregled stanja racuna\n2 - Isplata\n0 - Izlaz\n";
			cout << "Sto zelite: ";
			cin >> izbor;
			switch (izbor)
			{
			case 1:
				kor.prikazi_stanje();
				break;
			case 2:
				kor.podigni_novac();
				break;
			case 0:
				break;
			default:
				cout << "Unijeli ste pogrešan unos!\n";
				break;
			}
		} while (izbor != 0);
	}
    return 0;
}