// Zabka.cpp : Zaplace wam dolara, kupicie sobie za to cala zabke.
//

#include "stdafx.h"
using namespace std;
#include "Produkt.h"

int main()
{
	Produkt produkt1(1, "Mleko", "Mleko 4,76% nowy lepszy smak", 3.50, 40);
	produkt1.WyswietlPrzedmioty();

	Produkt produkt2(2, "Telewizor LG 55 OLED 55EG910V","Telewizory OLED: Najcie�sze produkowane przez LG, najbardziej energooszcz�dne p�askie telewizory wygl�daj� jak prawdziwe dzie�a sztuki. Wbudowane tylne o�wietlenie OLED zapewnia �ywe kolory i g��bokie czernie z wysokim wsp�czynnikiem kontrastu, aby obraz by� ja�niejszy, g�adszy i czystszy. Oferujemy telewizory OLED z certyfikatem THX� Certification gwarantuj�cym wyj�tkow� jako�� obrazu. Dzi�ki opatentowanym, nowoczesnym technologiom zastosowanym w telewizorach LG obraz jest doskona�y pod wzgl�dem szczeg��w, kolor�w i kontrastu.", 5039.00, 4);
	produkt2.WyswietlPrzedmioty();

	getchar();
	getchar();
    return 0;
}
