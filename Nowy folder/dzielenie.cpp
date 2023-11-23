// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    short a = 30;
    while (a >= 10) {
        cout << a << " ,";
        a -= 2;
    }

    short liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    do {
        cout << liczba << ", ";
        liczba = liczba / 2;
    } while (liczba > 0);

}