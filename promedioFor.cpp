#include <iostream>

using namespace std;

int main () {
	
	int i, ciclo = 0;
	double suma = 0, promedio = 0; 
	
	cout << "Este programa promedia los valores de enteros: (-1 para salir) " << endl;
	cin >> ciclo;
	
	for (i = 1; ciclo != -1; i++) {
		
		if (ciclo == -1){
			
		}else {
			suma = suma + ciclo;
		}
		cin >> ciclo;
	}
	promedio = suma / (i-1);
	cout << "El promedio es:   \t" << promedio;
	
	
}
