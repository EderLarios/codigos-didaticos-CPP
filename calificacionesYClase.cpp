#include <iostream>
#include "calificacionesClase.h"

using namespace std;

int main (){
	
	LibroCalificaciones libroCalificaciones1( " CS101 Introduccion a la programacion en C++ " );
	LibroCalificaciones libroCalificaciones2( " CS102 Estructura de datos en C++ " );
	
	cout << "libroCalificaciones1 se creo para el curso: \n" << libroCalificaciones1.getNameCourse() << endl << endl 
		<< "libroCalificaciones2 se creo para el curso: \n" << libroCalificaciones2.getNameCourse()
		<< endl ;	
	
}
