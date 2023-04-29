//Digitos enteros
#include <iostream>

using namespace std;

int main(){
	int valor = 0, valor00 = 0, modulo = 0;
	
	cout << "Dame un valor a separar: \n";
	cin >> valor;
	
	valor00 = valor / 10000;
	modulo = valor % 10000;
	cout << valor00 << "   ";
	
	valor00 = modulo / 1000;
	modulo = modulo % 1000;
	cout << valor00 << "   ";
	
	valor00 = modulo / 100;
	modulo = modulo % 100;
	cout << valor00 << "   ";
	
	valor00 = modulo / 10;
	modulo = modulo % 10;
	cout << valor00 << "   ";
	
	valor00 = modulo / 1;
	modulo = modulo % 1;
	cout << valor00 << "   ";
	
	return 0;
}
