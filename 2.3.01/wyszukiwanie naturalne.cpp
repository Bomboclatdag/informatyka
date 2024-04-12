#include <iostream>
using namespace std;

int main(){
	int szukana;
	int zbiorliczb[25] = {1,2,12,32,3,10,9,6,4,6,8,3,8,9,10,20,11,13,19,15,16,17,15,4};
	int index;
	int liczby[25];
	
	cout << "Wybierz liczbe do wyszukania: ";
	cin >> szukana;
	
	for(int i=0; i< sizeof(zbiorliczb); i++){
        if(zbiorliczb[i] == szukana){
            liczby[index] = i;
            index++;
        }
    }
    
	cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
    for(int i =0; i < index; i++){
        cout << liczby[i] << ", ";
    }
}