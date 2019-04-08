#pragma once
#ifndef FILEIO_H
#define FILEIO_H

#include <string>
#include <vector>
#include <array>

class FileIO {
private:
	std::array <std::string, 6> current;
	std::vector <std::array <std::string, 6>> podaci;
public:
	// funkcije
	bool find_and_load_data(std::string file, std::string kor_ime, std::string sifra);
	void save_data(std::string file);

	// postavljanje podataka
	void set_novo_stanje(double stanje);

	// dohvacanje podataka o korisniku i racunu
	std::string get_un();
	std::string get_pw();
	std::string get_i();
	std::string get_p();
	int get_br_rac();
	double get_st();
};

#endif // !FILEIO_H