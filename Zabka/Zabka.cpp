// Zabka.cpp : Zaplace wam dolara, kupicie sobie za to cala zabke.
//

#include "stdafx.h"
using namespace std;
#include "Produkt.h"

int main()
{
	Produkt produkt1(1, "Mleko", "Mleko 4,76% nowy lepszy smak", 3.50, 40);
	produkt1.WyswietlPrzedmioty();
	getchar();
	getchar();
    return 0;
}
