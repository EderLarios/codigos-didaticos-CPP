#include <iostream>
#include "LibroCalifi.h"

using namespace std;

LibroCalifi::LibroCalifi( string nombre){
	establecerNombreCurso( nombre );
}

void LibroCalifi::establecerNombreCurso( string nombre ){
	
	if ( nombre.size() <= 25)
		nombreCurso = nombre;
	else {
		nombreCurso = nombre.substr(0, 25);
		cerr << "El nombre \"" << nombre << "\" excede la longuitud maxima (25), \n"
		<< "Se limito nombreCurso a los primeros 25 caracteres. \n" << endl;  
	}
}

string LibroCalifi::obtenerNombreCurso() const {
	return nombreCurso;
}

void LibroCalifi::mostrarMensaje() const {
	cout << "Bienvenido al libro de Calificaciones para \n" << obtenerNombreCurso() << "!\n" << endl;
}

void LibroCalifi::determinarPromedioClase() const {
	int total = 0;
	unsigned int contadorCalif = 1;
	
	while ( contadorCalif <= 10 ){
		cout << "Escriba una calificacion:  ";
		int calificacion = 0;
		cin >> calificacion;
		total = total + calificacion;
		contadorCalif++;
	}
	int promedio = total / 10;
	
	cout << endl << "El total de las 10 calificaciones es   " << total << endl;
	cout << "El promedio de la clase es   " << promedio << endl;


}
