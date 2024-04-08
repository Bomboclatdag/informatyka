#include <iostream>
using namespace std;

int main(){
char zmienna;
float pierwszaliczba;
float drugaliczba;
cout << "Podaj pierwsza liczbe: ";
cin >> pierwszaliczba;
cout << "Podaj druga liczbe: ";
cin >> drugaliczba;
cout << "Co zrobic?";
cin >> zmienna;
	
	switch( zmienna )
{
case '-':
    cout << pierwszaliczba << " - " << drugaliczba << " = " << pierwszaliczba - drugaliczba;
    break;
   
case '+':
    cout << pierwszaliczba << " + " << drugaliczba << " = " << pierwszaliczba + drugaliczba;
    break;
    
case '/':
    cout << pierwszaliczba << " / " << drugaliczba << " = " << pierwszaliczba / drugaliczba;
    break;
   
case '*':
    cout << pierwszaliczba << " * " << drugaliczba << " = " << pierwszaliczba * drugaliczba;
    break;
}
}
	