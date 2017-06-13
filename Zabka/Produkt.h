#include <vector>
using namespace std;

#ifndef __Produkt_h__
#define __Produkt_h__

#include "Zakup2.h"

namespace Zakup
{
	class Zakup2;
	class Produkt;
}

namespace Zakup
{
	class Produkt
	{
		public: void DodajPrzedmiot(int produktID, string nazwa, string opis, float cenaProduktu, int ilosc);
		//public: Produkt * m_nastepnyProdukt;
		//public:std::vector<Zakup::Zakup2*> _zakup2;
		//public:std::vector<Zakup::Zakup2*> _zakup3;
		
		public: int _produktID;
		public: string _nazwa;
		public: float _cenaProduktu;
		public: int _ilosc;
		public: string _opis;
		public: void WyswietlPrzedmioty() const;
		public: void Inicjuj();
	};
}

#endif

