#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	double dolares = 0, salario = 0;
	
	cout << "Intruduzca las ventas en dolares (-1 para salir) : \t";
	cin >> dolares;
	
	while ( dolares != -1 ) {
		
		salario  = 200 + (dolares * 0.09);
		cout << "El salario es:  \t$" << salario << endl << endl ;
		
		cout << setprecision(2) << fixed;
		cout << "Intruduzca las ventas en dolares (-1 para salir) : \t";
		cin >> dolares;
		
	}
	
	
	
}
