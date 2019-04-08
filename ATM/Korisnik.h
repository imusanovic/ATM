#pragma once
#ifndef KORISNIK_H
#define KORSINIK_H

#include "Racun.h"
#include "FileIO.h"
#include <string>

class Korisnik {
private:
	std::string username;
	std::string password;
	std::string ime;
	std::string prezime;
	Racun racun;
	FileIO baza;
public:
	// konstruktor
	Korisnik();
	~Korisnik();

	// seteri
	void set_username(std::string un);
	void set_password(std::string pw);
	void set_ime(std::string i);
	void set_prezime(std::string p);

	// geteri
	std::string get_username();
	std::string get_password();
	std::string get_ime();
	std::string get_prezime();

	// funkcije
	bool login();
	void podigni_novac();
	void prikazi_stanje();

};

#endif // !KORISNIK_H