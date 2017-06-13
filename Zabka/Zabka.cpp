// Zabka.cpp : Zaplace wam dolara, kupicie sobie za to cala zabke.
//

#include "stdafx.h"
using namespace std;
#include "Produkt.h"
#include "Zakup2.h"

int main()
{
	Produkt produkt1(1, "Mleko", "Mleko 4,76% nowy lepszy smak", 3.50, 40);
	produkt1.WyswietlPrzedmioty();

	Produkt produkt2(2, "Telewizor LG 55 OLED 55EG910V","Telewizory OLED: Najciensze produkowane przez LG, najbardziej energooszczedne plaskie telewizory wygladaja jak prawdziwe dziela sztuki. Wbudowane tylne oswietlenie OLED zapewnia zywe kolory i glebokie czernie z wysokim wspolczynnikiem kontrastu, aby obraz byl jasniejszy, gladszy i czystszy. Oferujemy telewizory OLED z certyfikatem THX® Certification gwarantujacym wyjatkowa jakosc obrazu. Dzieki opatentowanym, nowoczesnym technologiom zastosowanym w telewizorach LG obraz jest doskonaly pod wzgledem szczegolow, kolorow i kontrastu.", 5039.00, 4);
	produkt2.WyswietlPrzedmioty();

	Produkt produkt3(3, "Telefon Apple iPhone 7 128GB Red Special Edition","Telefon iPhone marki Apple posiadajacy 128GB pamieci wewnetrznej z taktowaniem procesora na poziomie 2.4Ghz",3599.00,78 );
	produkt3.WyswietlPrzedmioty();

	Produkt produkt4(4, "Gamepad Microsoft Xbox 360 PC","Kontroler bezprzewodowy czarny",129.00,254 );
	produkt4.WyswietlPrzedmioty();
	
	Produkt produkt5(5, "Lodowka Samsung RB 31 FERNDBC","Klasa A+, 185 cm, No Frost, Multi Flow",1547.00,21 );
	produkt5.WyswietlPrzedmioty();
	
	Produkt produkt6(6, "Pamiec USB Sandisk Ultra Flair","64GB USB 3.0",99.90,3 );
	produkt6.WyswietlPrzedmioty();
	
	Produkt produkt7(7, "Zelazko Philips GC4527/00 Azur Performer Plus","moc 2600 W, uderzenie pary 220 g/min",254.99,345 );
	produkt7.WyswietlPrzedmioty();
	
	Produkt produkt8(8, "VILEDA UltraMax BOX","Zestaw mop+wiadro+wyciskacz",74.99,69 );
	produkt8.WyswietlPrzedmioty();


	getchar();
	getchar();
    return 0;
}
