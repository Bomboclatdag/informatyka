#include <iostream>
using namespace std;

int main() {
	//zad1	
		//int liczby[5];
		//int i;

		//cout << "podaj liczby: ";	
		//for(i=0; i<5; i++){
			//cin >> liczby[i];
		//}

		//cout << "Podales liczby: ";
		//for(i=4; i>=0; i--){
			//cout << liczby[i] << ", ";		
		//}


		//zad2
		//int liczby[5];
		//int i;

		//cout << "podaj liczby dodatnie i ujemne: ";	

		//for(i=0; i<5; i++){
			//cin >> liczby[i];
			//if(liczby[i] < 0){
				//liczby[i] = liczby[i] * -1;
			//}
		//}

		//cout << "Podales liczby: ";

		//for(i=0; i<5; i++){
			//cout << liczby[i] << ", ";		
		//}

		//zad3

	int i;
	cout << "podaj do jakiej liczby ma wypisaæ: ";
	cin >> i;
	int liczby[99];

	for (int b = 1; b <= i; b++) {
		liczby[b] = b;
		if (liczby[b] % 5) {
			cout << liczby[b] << " ";
		}
		else {
			cout << liczby[b] << " " << endl;
		}
	}
}