#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main (){
	
	LibroCalificaciones libroCalificaciones1("CS101 Introduccion a la programacion en c++");
	LibroCalificaciones libroCalificaciones2("CS102 Estructura de datos en c++");
	
	cout << "LibroCalificaciones1 creado para el curso:  "
		<< libroCalificaciones1.getNameCourse()
		<< "LibroCalificaciones2 creado para el curso:  "
		<< libroCalificaciones2.getNameCourse()
		<< endl ;
	
	return 0;
}
