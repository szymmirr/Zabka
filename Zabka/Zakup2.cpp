#include "stdafx.h"
#include <vector>
using namespace std;

#include "Zakup2.h"
#include "Klient.h"
#include "Produkt.h"
#include "Sposob_zaplaty.h"

Zakup::Zakup2::Zakup2()
{
}

void Zakup::Zakup2::finalizuj(Zakup::Produkt x)
{
	cout << "Zamowienie produktu " << x._nazwa << " zostalo zlozone!";
}