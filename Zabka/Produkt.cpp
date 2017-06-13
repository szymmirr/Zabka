#include <vector>
#include "stdafx.h"
#include "Produkt.h"
#include <iostream>
using namespace std;


void Zakup::Produkt::DodajPrzedmiot(int produktID, string nazwa, string opis, float cenaProduktu, int ilosc)
{
	_produktID = produktID;
	_nazwa = nazwa;
	_opis = opis;
	_cenaProduktu = cenaProduktu;
	_ilosc = ilosc;
}

void Zakup::Produkt::WyswietlPrzedmioty() const
{
	cout << "ID: " << _produktID << endl;
	cout << "Nazwa: " << _nazwa << endl;
	cout << "Opis: " << _opis << endl;
	cout << "Cena produktu: " << _cenaProduktu << " zl" << endl;
	cout << "Ilosc: " << _ilosc << endl << endl;
}
