#include <vector>
using namespace std;

class Produkt
{
	public: Produkt(int produktID, string nazwa, string opis, float cenaProduktu, int ilosc);
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
	public: void Dodaj(int _produktID, string _nazwa, string _opis, float _cenaProduktu, int _ilosc);
};



