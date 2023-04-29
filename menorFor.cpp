#include <iostream>

using namespace std;

int main () {
	
	int valor = 0, valor1 = 0, menor = 1000000000;
	
	cout << "Escribe el numero de numeros a introducir:  " << endl;
	cin >> valor;
	
	for (int i = 0; i < valor; i++){
		cin >> valor1;
		if (valor1 < menor) {
			menor = valor1;
		}
	}
	cout << "El numero menor es: \t" << menor;
	
}
