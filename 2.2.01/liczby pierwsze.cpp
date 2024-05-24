#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Ile liczb pierwszych chcesz wyswietlic: " << endl;
    cin >> n;
	cout << "Liczby pierwsze: ";
    int lp = 0; 
    int p = 2;
 
    while (lp < n) {
        bool jestpierw = true;
 
        for (int d = 2; d <= p / 2; ++d) {
            if (p % d == 0) {
                jestpierw = false;
                break;
            }
        }
 
        if (jestpierw == true) {
            cout << p << ", ";
            lp = lp + 1;
        }
 
        p = p + 1;
    }
}