#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	
	for (int i = 1; i <= 10; i++) {
		
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl; 
	
	for (int i = 1; i <= 10; i++) {
		
		for (int j = 10; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	
	for (int i = 1; i <= 10; i++) {
		cout << setw(i);
		for (int j = 10; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	int h = 10;
	for (int i = 1; i <= 10; i++) {
		cout << setw(h);
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
		h--;
	}
	cout << endl; 
	
	
	return 0;
	
}
