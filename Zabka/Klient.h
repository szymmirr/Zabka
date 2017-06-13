#include <vector>
#include <iostream>
using namespace std;

#ifndef __Klient_h__
#define __Klient_h__

#include "Zakup2.h"

namespace Zakup
{
	class Zakup2;
	class Klient;
}

namespace Zakup
{
	class Klient
	{
		private: int _klientID;
		private: string _imie;
		private: string _nazwisko;
		private: string _e_mail;
		private: int _telefon;
		private: string _adres;
		private: string _nick;
		public: std::vector<Zakup::Zakup2*> _zakup2;
	};
}

#endif
