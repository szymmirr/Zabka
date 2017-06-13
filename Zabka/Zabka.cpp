// Zabka.cpp : Zaplace wam dolara, kupicie sobie za to cala zabke.
//

#include "stdafx.h"
using namespace std;
#include "Produkt.h"

int main()
{
	Produkt produkt1(1, "Mleko", "Mleko 4,76% nowy lepszy smak", 3.50, 40);
	produkt1.WyswietlPrzedmioty();

	Produkt produkt2(2, "Telewizor LG 55 OLED 55EG910V","Telewizory OLED: Najcieñsze produkowane przez LG, najbardziej energooszczêdne p³askie telewizory wygl¹daj¹ jak prawdziwe dzie³a sztuki. Wbudowane tylne oœwietlenie OLED zapewnia ¿ywe kolory i g³êbokie czernie z wysokim wspó³czynnikiem kontrastu, aby obraz by³ jaœniejszy, g³adszy i czystszy. Oferujemy telewizory OLED z certyfikatem THX® Certification gwarantuj¹cym wyj¹tkow¹ jakoœæ obrazu. Dziêki opatentowanym, nowoczesnym technologiom zastosowanym w telewizorach LG obraz jest doskona³y pod wzglêdem szczegó³ów, kolorów i kontrastu.", 5039.00, 4);
	produkt2.WyswietlPrzedmioty();

	getchar();
	getchar();
    return 0;
}
