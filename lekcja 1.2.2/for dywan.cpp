#include <iostream>
using namespace std;

int main(){
	int s;
	int w;
	
	cout << "Podaj szerokosc: ";
	cin >> s;
	cout << "Podaj wysokosc: ";
	cin >> w;
	

   for(int d = 0; s > d; d++){  	
       for(int b = 0; w > b; b++){
           if (d == 1){
        		cout << "*";
		   }
		   if (d < s){

		   }
		   if (d >= s){
        		cout << "*";
		   }
       }
	   cout << endl;
   }
}