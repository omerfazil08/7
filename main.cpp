#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	int a, b, c; 

	cout << "Enter a number and see what happens: ";
	cin >> a;
	b = 0;
	c = 0;
	cout << "1";
	if (a % 7 == 0) {
		
			while (b < a) {
				b = b + 7;
				cout << endl << b;
			}
		
	}

	else {
		for (int i = 1; i < 7; i++) {
			if ((a - i) % 7 == 0) {
				while (c < (a - i)) {
					c = c + 7;
					cout << endl << c;
				}
				
			}
		}
	}
	cout <<endl<< "WOW!!!";
}
