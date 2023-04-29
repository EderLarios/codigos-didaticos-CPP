#include <iostream>

using namespace std;

int main () {
	
	int numero = 1;
	cout << "N\t10*N\t100*N\t1000*N" << endl << endl ;
	
	while (numero <= 5) {
		
		cout << numero << "\t" << numero * 10 << "\t" << numero * 100 << "\t" << numero * 1000 << endl ;
		numero++;
	}
	
}
