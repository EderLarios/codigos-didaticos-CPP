#include <iostream>

using namespace std;

int main () {
	int e = 0, numero = 0, mayor = 0, numVendedor = 0;
	
	while (e < 10) {
		
		cout << "Introduce un numero de ventas realizadas por vendedor  " << e+1 << endl;
		cin >> numero;
		
		if (numero > mayor){
			mayor = numero;
			numVendedor = e +1;
		}
		
		e++;
	}
	  
	cout << "El vendedor con mas ventas fue el numero:    " << numVendedor << "  with  " << mayor << "  ventas  " << endl ;  
	
	
}
