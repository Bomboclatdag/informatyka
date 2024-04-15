using namespace std;
#include <iostream>

int main (){
	int n;
	int k = 2;
	
	cout << "Wpisz liczbe: ";
	cin >> n;
	cout << "Czynniki pierwsze liczby " << n << ": ";
	while(n > 1)
	{
		if(n % k == 0)
		{
			cout << k << " ";
			n = n / k;
		}
		else{
			k = k + 1;
		}
	}
	
}