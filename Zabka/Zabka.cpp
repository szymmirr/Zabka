// Zabka.cpp : Zaplace wam dolara, kupicie sobie za to cala zabke.
//

#include "stdafx.h"
using namespace std;
#include "Produkt.h"

int main()
{
	Produkt produkt1(1, "Mleko", "Mleko 4,76% nowy lepszy smak", 3.50, 40);
	produkt1.WyswietlPrzedmioty();

	Produkt produkt2(2, "Telewizor LG 55 OLED 55EG910V","Telewizory OLED: Najciensze produkowane przez LG, najbardziej energooszczedne plaskie telewizory wygl¹daja jak prawdziwe dziela sztuki. Wbudowane tylne oswietlenie OLED zapewnia zywe kolory i glebokie czernie z wysokim wspolczynnikiem kontrastu, aby obraz byl jasniejszy, gladszy i czystszy. Oferujemy telewizory OLED z certyfikatem THX® Certification gwarantujacym wyjatkowa jakosc obrazu. Dzieki opatentowanym, nowoczesnym technologiom zastosowanym w telewizorach LG obraz jest doskonaly pod wzgledem szczegolow, kolorow i kontrastu.", 5039.00, 4);
	produkt2.WyswietlPrzedmioty();

	getchar();
	getchar();
    return 0;
}
