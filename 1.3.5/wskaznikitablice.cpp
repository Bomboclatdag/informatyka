#include <iostream>
using namespace std;
//ZAD 5

//int main(){
	//int tablica[5];
	
	//cout << "podaj piec liczb ktore trzeba zsumowac: " << endl;
	//cin >> tablica[1];
	//cin >> tablica[2];
	//cin >> tablica[3];
	//cin >> tablica[4];
	//cin >> tablica[5];
	
	//int *wsk1 = &tablica[1];
	//int *wsk2 = &tablica[2];
	//int *wsk3 = &tablica[3];
	//int *wsk4 = &tablica[4];
	//int *wsk5 = &tablica[5];
	
	//cout << "Suma wynosi: " << *wsk1 + *wsk2 + *wsk3 + *wsk4 + *wsk5;
//}

//ZAD 6

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int losoweliczby[5];
	for (int a=1; a <= 1; a++){
		srand(time(NULL));
		int wylosowana_liczba = (rand() % 50) + 1;
		for (int i = 0; i <= 5; i++) {
			cout << (rand() % 50) + 7 << endl;
		}
	}
}
