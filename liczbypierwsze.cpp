#include <iostream>
using namespace std;

int main(){
	int ileliczb = 0;
	int p = 2;
	cout << "Ile ma wyświetlić liczb: " << endl;
	cin >> ileliczb;
	cout << "Liczby pierwsze: ";
	for(int a; a > ileliczb; a++){
		for(int d = 2; a % d != 0; d++){
			if(a / d == 1){
				cout << a << ", ";
			}
		}
	}
	
}