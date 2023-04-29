//Define la clase LibroCalificaciones con una funcion miembro llamado mostrarMensaje
//Crea un objeto LibroCalificaciones y llama a su funcion mostrarMensaje

#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones{
	public:
		
		void mostrarMensaje( string nombreCurso) const{
			cout << "Bienvenido al libro de calificaciones para\n" << nombreCurso << " ! " <<endl ;
		}
};

int main(){
	
	string nombreDelCurso;
	LibroCalificaciones miLibroCalificaciones;
	
	cout << "Escriba el nombre del Curso: " << endl ;
	getline(cin, nombreDelCurso);
	cout << endl ;
	
	miLibroCalificaciones.mostrarMensaje(nombreDelCurso); 
	
}
