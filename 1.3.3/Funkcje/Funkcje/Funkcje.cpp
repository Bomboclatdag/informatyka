#include <iostream>
using namespace std;

//void Przywitanie(string imie, string nazwisko);

//int main()
//{
   //string imie, nazwisko;
    //cout << "Podaj swoje imie: ";
    //cin >> imie;
    //cout << "Podaj swoje nazwisko: ";
    //cin >> nazwisko;
    //Przywitanie(imie, nazwisko);
//}

//void Przywitanie(string imie, string nazwisko) {
    //cout << "Czesc! " << imie << " " << nazwisko;
    //return;
//}
float Brutto(float netto);
float Netto(float brutto);

int main()
{
    int wybor;
    float netto, brutto;
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << "Podaj kwote netto: ";
        cin >> netto;
        cout << "Brutto: " << Brutto(netto) << " zl" << endl;
        break;
    case 2:
        cout << "Podaj kwote brutto: ";
        cin >> brutto;
        cout << "Netto: " << Netto(brutto) << " zl" << endl;
        break;
    }
}   
float Brutto(float netto) {
    float procentzkwoty;
    procentzkwoty = netto * 0.23;
    netto = netto + procentzkwoty;
    return netto;
}
float Netto(float brutto) {
    float procentzkwoty;
    procentzkwoty = brutto * 0.23;
    brutto = brutto - procentzkwoty;
    return brutto;
}
