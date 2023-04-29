#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	double centinela = 0, tarifa = 0, salario = 0;
	
	cout << "Introduzca las horas trabajadas: (-1 para salir)\t";
	cin >> centinela;
	
	while (centinela != -1) {
		
		cout << "Introduzca la tarifa por horas del empleado ($00.00): \t";
		cin >> tarifa;
		
		if (centinela <= 40){
			salario = centinela * tarifa;
		} else {
			double extras = centinela - 40;
			salario = (centinela - extras)* tarifa;
			salario =  salario + ( extras * ( 1.5 * tarifa ));
		}
		
		cout << setprecision(2) << fixed; 
		cout << "El salario es: \t$" << salario << endl << endl;
		
		cout << "Introduzca las horas trabajadas: (-1 para salir)\t";
		cin >> centinela;
		
	} 
	
	
}
