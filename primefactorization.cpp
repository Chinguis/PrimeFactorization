#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int number;
	cout << "Enter yo number fool" << endl;
	cin >> number;
	for (int i=2; i<=number ; i++) {
		int mod;
		mod = number % i;
		if (mod ==0) {
			number = number/i;
			cout << i<< endl;
			i = 1;
		}
	}
	return 0; 
}