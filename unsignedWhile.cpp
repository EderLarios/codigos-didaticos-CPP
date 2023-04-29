#include <iostream>
using namespace std;

int main () {
	unsigned int aprobados = 0;
	unsigned int reprobados = 0;
	unsigned int contadorEstudiante = 1;
	
	while ( contadorEstudiante <= 10) {
		
		cout << "Escriba el resultado ( 1 = Aprobado, 2 = Reprobado ): ";
		int resultado = 0;
		cin >> resultado;
		
		if (resultado == 1)
			aprobados++;
		else 
			reprobados++;
			
		contadorEstudiante++;
		
	}
	
	cout << "Aprobado    " << aprobados << "\nReprobado     " << reprobados << endl;
	
	if ( aprobados > 8 )
		cout <<  "Bono para el Instructor   " << endl ; 
	
	return 0;
}
