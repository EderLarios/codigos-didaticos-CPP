#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones( std::string nombre ){
	setNameCourse(nombre);
}
void LibroCalificaciones::setNameCourse( std::string nombre ){
	nombreCurso = nombre;
}
std::string LibroCalificaciones::getNameCourse () const {
	return nombreCurso;
}
void LibroCalificaciones::mostrarMensaje() const{
	
	cout << "Bienvenido al libro de calificaciones para \n" << getNameCourse() << " ! " << endl ;
}
	
