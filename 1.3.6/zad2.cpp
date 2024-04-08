#include <iostream>
using namespace std;

struct Ksiazka {
    string tytul;
    string autor;
    int rok;
    string wydawca;
    double cena;
};

Ksiazka ksiazki[7] = {
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};

void poroku(int rok) {
    cout << "Znalezione ksiazki: " << endl;
    for (int i = 0; i < 7; i++) {
        if (ksiazki[i].rok > rok) {
            cout << "Tytul: " << ksiazki[i].tytul << " Autor: " << ksiazki[i].autor << " Rok: " << ksiazki[i].rok << " Wydawnictwo: " << ksiazki[i].wydawca << " Cena: " << ksiazki[i].cena << endl;
        }
    }
}

void pocenie(double cena) {
    cout << "Znalezione ksiazki: " << endl;
    for (int i = 0; i < 7; i++) {
        if (ksiazki[i].cena > cena) {
            cout << " Tytul: " << ksiazki[i].tytul << " Autor: " << ksiazki[i].autor << " Rok: " << ksiazki[i].rok << " Wydawnictwo: " << ksiazki[i].wydawca << " Cena: " << ksiazki[i].cena << endl;
        }
    }
}

void powydawcy(string wydawca) {
    cout << "Znalezione ksiazki: " << endl;
    for (int i = 0; i < 7; i++) {
        if (ksiazki[i].wydawca == wydawca) {
            cout << " Tytul: " << ksiazki[i].tytul << " Autor: " << ksiazki[i].autor << " Rok: " << ksiazki[i].rok << " Wydawnictwo: " << ksiazki[i].wydawca << " Cena: " << ksiazki[i].cena << endl;
        }
    }
}

int main() {
    int wybor;
    int rok;
    double cena;
    string wydawca;

    cout << "Witaj w ksiegarni" << endl;
    cout << "Po jakiej kategorii chcial bys wyszukac ksiazke: " << endl;
    cout << "1. Rok wydania" << endl;
    cout << "2. Cena" << endl;
    cout << "3. Wydawnictwo" << endl;
    cout << "0. Wyjscie" << endl;
    cin >> wybor;

    switch (wybor) {
	case 1:
	    cout << "Podaj rok ksiazki: ";
	    cin >> rok;
	    poroku(rok);
	    break;
	case 2:
	    cout << "Podaj cene ksiazki: ";
	    cin >> cena;
	    pocenie(cena);
		break;
	case 3:
	    cout << "Podaj Wydawnictwo ksiazki: ";
	    cin >> wydawca;
	    powydawcy(wydawca);
	    break;
	case 0:
	    break;
	}
}
           