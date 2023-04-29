//Este programa calcula los cuadrados y cubos de los enteros del 0 al 10. Use tabuladores.

#include <iostream>
using namespace std;
int main () {
	int entero=0, cuadrado=0, cubo=0; 
	cout << "Este programa calcula los cuadrados y cubos de los enteros del 0 al 10. \n";
	cout << "Entero " << " Cuadrado " << " Cubo " << endl;
	
	while ( entero <= 10 ) {
		cuadrado = entero * entero ;
		cubo = entero * entero * entero ;
		cout << entero << " \t" << cuadrado << " \t  " << cubo << " \t" << endl ;
		entero = entero + 1 ; 
	}
	return 0;
}
