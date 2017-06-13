// Zabka.cpp : Zaplace wam dolara, kupicie sobie za to cala zabke.
//

#include "stdafx.h"
using namespace std;
#include "Produkt.h"
#include "Zakup2.h"

int main()
{
	cout << "Sklep internetowy ZABKA" << endl << endl;
	Zakup::Produkt produkty[1000];
	produkty[1].DodajPrzedmiot(1, "Mleko", "Mleko 4,76% nowy lepszy smak", 3.50, 40);
	produkty[1].WyswietlPrzedmioty();

	produkty[2].DodajPrzedmiot(2, "Telewizor LG 55 OLED 55EG910V", "Telewizory OLED: Najciensze produkowane przez LG, najbardziej energooszczedne plaskie telewizory wygladaja jak prawdziwe dziela sztuki. Wbudowane tylne oswietlenie OLED zapewnia zywe kolory i glebokie czernie z wysokim wspolczynnikiem kontrastu.", 5039.00, 4);
	produkty[2].WyswietlPrzedmioty();

	produkty[3].DodajPrzedmiot(3, "Telefon Apple iPhone 7 128GB Red Special Edition","Telefon iPhone marki Apple posiadajacy 128GB pamieci wewnetrznej z taktowaniem procesora na poziomie 2.4Ghz",3599.00,78 );
	produkty[3].WyswietlPrzedmioty();

	produkty[4].DodajPrzedmiot(4, "Gamepad Microsoft Xbox 360 PC","Kontroler bezprzewodowy czarny",129.00,254 );
	produkty[4].WyswietlPrzedmioty();
	
	produkty[5].DodajPrzedmiot(5, "Lodowka Samsung RB 31 FERNDBC","Klasa A+, 185 cm, No Frost, Multi Flow",1547.00,21 );
	produkty[5].WyswietlPrzedmioty();
	
	produkty[6].DodajPrzedmiot(6, "Pamiec USB Sandisk Ultra Flair","64GB USB 3.0",99.90,3 );
	produkty[6].WyswietlPrzedmioty();
	
	produkty[7].DodajPrzedmiot(7, "Zelazko Philips GC4527/00 Azur Performer Plus","moc 2600 W, uderzenie pary 220 g/min",254.99,345 );
	produkty[7].WyswietlPrzedmioty();
	
	produkty[8].DodajPrzedmiot(8, "VILEDA UltraMax BOX","Zestaw mop+wiadro+wyciskacz",74.99,69 );
	produkty[8].WyswietlPrzedmioty();

	int wybor;
	cout << "Wybierz produkt, ktory chcesz kupic" << endl;
	cin >> wybor;

	Zakup::Zakup2::finalizuj(produkty[wybor]);

	getchar();
	getchar();
    return 0;
}
