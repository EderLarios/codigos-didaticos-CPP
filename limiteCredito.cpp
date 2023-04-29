#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	double cuenta = 0, saldo = 0, cargos = 0, credito = 0, limite = 0, actual = 0;
	
	cout << "Escriba el numero de cuenta (o -1 para salir): \t";
	cin >> cuenta;
	
	while (cuenta != -1){
		
		cout << "Introduzca el saldo inicial : \t";
		cin >> saldo;
		
		cout << "Introduzca los cargos totales : \t";
		cin >> cargos;
		
		cout << "Introduzca los creditos totales:  \t";
		cin >> credito;
		
		cout << "Introduzca el limite de credito \t";
		cin >> limite;
		
		actual = saldo + cargos - credito;
		cout <<"EL NUEVO SALDO ES: \t" << actual << endl << endl;
		
		if (actual > limite){
			cout << "Cuenta \t"<< setw(32) << cuenta << endl;
			cout << "Limite de credito \t" << setw(32) << limite << endl;
			cout << "Saldo : \t" << setw(32) << saldo << endl;
			cout << "Se excedio el limite de credito."<< endl;
		}
		
		
		cout << "Escriba el numero de cuenta (o -1 para salir): \t";
		cin >> cuenta;	
		
		
	}
	
	
	
}
