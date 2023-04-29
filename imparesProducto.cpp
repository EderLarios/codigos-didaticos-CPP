#include <iostream>

using namespace std;

int main () {
	int i, producto = 1;
	
	for (i = 1; i <= 15; i++) {
		
		if (i % 2) {
			producto = producto * i;
		}
		
	}
	
	cout << "El producto es : \t" << producto;
	return 0;
	
}
