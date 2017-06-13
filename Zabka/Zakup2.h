#include <vector>
using namespace std;

#ifndef __Zakup2_h__
#define __Zakup2_h__

// #include "Klient.h"
// #include "Produkt.h"
#include "Sposob_zaplaty.h"

namespace Zakup
{
	class Klient;
	class Produkt;
	class Sposob_zaplaty;
	class Zakup2;
}

namespace Zakup
{
	class Zakup2
	{
		private: int _zamowienieID;
		private: string _data;
		private: string _czas;
		private: string _sumaZakupu;
		public: Zakup::Klient* _klientKlient;
		public: Zakup::Produkt* _produktProdukt;
		public: std::vector<Zakup::Sposob_zaplaty*> _sposob_zaplaty;
	};
}

#endif
