#include <iostream>
using namespace std;

int main() {
	//zad 1
	//float a;
	//float b;

	//char tablica[100];
	//cout<<"Podaj imie i nazwisko: "; 
	//cin.getline(tablica,100);
	//for(int i = 0; i < 100; i++){
		//if(tablica[i] == ' '){
			//a = i;
		//}
		//if(tablica[i] == '\0'){
			//b = i;
			//break;
		//}
	//}
	//cout << "Twoje dane osobowe: " << tablica << endl;
	//cout << "Miejsce spacji: "<< a << endl;
	//cout << "Miejsce koncowe: "<< b << endl;

	//return 0;


	//zad2
	float a;
	float b;

	char tablica[100];
	cout << "Podaj imie i nazwisko: ";
	cin.getline(tablica, 100);
	for (int i = 0; i < 100; i++) {
		if (tablica[i] == ' ') {
			tablica[i] = '-';
		}
		if (tablica[i] == '.') {
			tablica[i] = '-';
		}
	}
	cout << "Twoje dane osobowe: " << tablica << endl;
}
