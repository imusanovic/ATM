#include "stdafx.h"
#include "Korisnik.h"
#include "Racun.h"
#include <iostream>
#include <iomanip>

// konstruktor
Korisnik::Korisnik() {
}

Korisnik::~Korisnik() {
	baza.save_data("Racuni.txt");
}

// seteri
void Korisnik::set_username(std::string un) {
	username = un;
}

void Korisnik::set_password(std::string pw) {
	password = pw;
}
void Korisnik::set_ime(std::string i) {
	ime = ime;
}
void Korisnik::set_prezime(std::string p) {
	prezime = prezime;
}

// geteri
std::string Korisnik::get_username() {
	return username;
}
std::string Korisnik::get_password() {
	return password;
}
std::string Korisnik::get_ime() {
	return ime;
}
std::string Korisnik::get_prezime() {
	return prezime;
}

// funkcije
bool Korisnik::login() {
	std::string ime, sifra;
	bool uspjeh;
	std::cout << "Unesite korisnicko ime: ";
	std::cin >> ime;
	std::cout << "Unesite lozinku: ";
	std::cin >> sifra;
	uspjeh = baza.find_and_load_data("Racuni.txt", ime, sifra);
	if (uspjeh) {
		set_username(baza.get_un());
		set_password(baza.get_pw());
		set_ime(baza.get_i());
		set_prezime(baza.get_p());
		racun.set_broj_racuna(baza.get_br_rac());
		racun.set_stanje(baza.get_st());
	}
	else {
		std::cout << "\nUnijeli ste pogrešne podatke!\n";
		system("pause");
	}
	return uspjeh;
}

void Korisnik::podigni_novac() {
	int iznos;
	std::cout << "Koliko novca zelite podignuti: ";
	std::cin >> iznos;
	racun.set_stanje(racun.get_stanje() - iznos);
	baza.set_novo_stanje(racun.get_stanje());
	std::cout << "\Podigli ste " << std::setprecision(2) << std::fixed << iznos << " kuna.\n";
}

void Korisnik::prikazi_stanje() {
	std::cout << "Na racunu " << racun.get_broj_racuna() <<
		" imate " << racun.get_stanje() << " kuna\n";
}