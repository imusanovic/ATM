#pragma once
#ifndef RACUN_H
#define RACUN_H

#include <string>

class Racun {
private:
	long int broj_racuna;
	double stanje;

public:
	// konstruktor
	Racun();

	// seteri
	void set_broj_racuna(int b);
	void set_stanje(double s);

	// geteri
	int get_broj_racuna();
	double get_stanje();

	// funkcije
	void stanje_racuna();
};

#endif // !RACUN_H
