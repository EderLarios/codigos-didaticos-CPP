#include <iostream>

using namespace std;

int main () {
	
	int valor = 0, valor1 = 0, suma = 0;
	
	cout << "Escribe el numero de numeros a introducir:  " << endl;
	cin >> valor;
	
	for (int i = 0; i < valor; i++){
		cin >> valor1;
		suma = suma + valor1;
	}
	cout << "La suma es:  \t" << suma;
	
}
