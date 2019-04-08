#include "stdafx.h"
#include "Racun.h"
#include <iostream>

Racun::Racun() {
}
void Racun::set_broj_racuna(int b) {
	broj_racuna = b;
}
void Racun::set_stanje(double s) {
	stanje = s;
}

// geteri
int Racun::get_broj_racuna() {
	return broj_racuna;
}
double Racun::get_stanje() {
	return stanje;
}

// funkcije
void Racun::stanje_racuna() {
	std::cout << "\nNa racunu imate " << get_stanje() << " kuna.\n";
}