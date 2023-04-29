#include <iostream>
#include "Cuenta.h"

using namespace std;

int main(){
	float cantidad = 0, abono = 0, retiro = 0; 
	
	cout << "Se inicializara una cuenta con : \n";
	cin >> cantidad;
	Cuenta cuenta1(cantidad);
	
	cout << "La cuenta tiene un saldo de: \n";
	cout << cuenta1.getSaldo() << endl ;
	
	cout << "Cuanto desea abonar? \n";
	cin >> abono;
	cuenta1.abonarSaldo(abono);
	
	cout << "La cuenta tiene un saldo de: \n";
	cout << cuenta1.getSaldo() << endl ;
	
	cout << "Cuanto desea retirar? \n";
	cin >> retiro;
	cuenta1.retirarSaldo(retiro);
	
	cout << "\n Saldo actual: \n";
	cout << cuenta1.getSaldo() << endl ;
	
}
