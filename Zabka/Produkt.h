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
		private: int _produktID;
		private: int _nazwa;
		private: int _opis;
		private: int _cenaProduktu;
		private: string _dostepnosc;
		private: int _ilosc;
		public: std::vector<Zakup::Zakup2*> _zakup2;
	};
}

#endif
