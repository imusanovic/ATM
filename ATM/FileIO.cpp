#include "stdafx.h"
#include "FileIO.h"
#include "Racun.h"
#include "Korisnik.h"
#include <fstream>
#include <string>
#include <array>
#include <iostream>

bool FileIO::find_and_load_data(std::string file, std::string kor_ime, std::string sifra) {
	std::ifstream input(file);
	bool uspjeh = false;
	std::array <std::string, 6> a;
	while (!input.eof()) {
		input >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
		if (a[0] == kor_ime && a[1] == sifra) {
			for (int i = 0; i < 6; i++) {
				current[i] = a[i];
			}
			uspjeh = true;
		}
		else {
			podaci.push_back(a);
		}
	}
	input.close();
	return uspjeh;
}

void FileIO::save_data(std::string file) {
	std::ofstream output;
	output.open(file, std::ios::out);
	std::string za_unos;
	podaci.push_back(current);
	for (int i = 0; i < podaci.size(); i++) {
		za_unos = podaci[i][0] + " " + podaci[i][1] + " " + podaci[i][2] + " " +
			podaci[i][3] + " " + podaci[i][4] + " " + podaci[i][5] + "\n";
		output << za_unos;
	}
	output.close();
}

void FileIO::set_novo_stanje(double stanje) {
	current[5] = std::to_string(stanje);
}

std::string FileIO::get_un() {
	return current[0];
}

std::string FileIO::get_pw() {
	return current[1];
}

std::string FileIO::get_i() {
	return current[2];
}

std::string FileIO::get_p() {
	return current[3];
}

int FileIO::get_br_rac() {
	return std::stoll(current[4]);
}

double FileIO::get_st() {
	return std::stod(current[5]);
}