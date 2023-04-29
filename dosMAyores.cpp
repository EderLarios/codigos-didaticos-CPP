#include <iostream>

using namespace std;

int main () {
	int e = 0, numero = 0, mayor = 0, mayor1 = 0;
	
	while (e < 10) {
		
		cout << "Dame el numero   " << e+1 << endl,
		cin >> numero;
		
		if (numero > mayor1) {
			if ( numero > mayor ) {
				mayor1 = mayor;
				mayor = numero;
			} else {
				mayor1 = numero;
			}
		}
		e++;
	}
	
	cout << "El mayor es:    "<< mayor << endl;
	cout << "El segundo mayor es:    "<< mayor1 ;
	
	
}
