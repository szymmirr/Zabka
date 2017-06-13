
#ifndef __Sposob_zaplaty_h__
#define __Sposob_zaplaty_h__

#include "Zakup2.h"

namespace Zakup
{
	class Zakup2;
	class Sposob_zaplaty;
}

namespace Zakup
{
	class Sposob_zaplaty
	{
		private: int _zaplataID;
		private: string _metoda;
		private: string _kredyt;
		private: int _numerkarty;
		private: string _firma;
		public: Zakup::Zakup2* _zakupZamowienie;
	};
}

#endif
