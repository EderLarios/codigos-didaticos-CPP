//Define la clase LibroCalificaciones con una funcion miembro llamado mostrarMensaje
//Crea un objeto LibroCalificaciones y llama a su funcion mostrarMensaje

#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones{
	public:
		
		void setNameCourse ( string nombre ){
			nombreCurso = nombre;
		}
		
		string getNameCourse () const {
			return nombreCurso;
		}
		
		void mostrarMensaje() const{
			cout << "Bienvenido al libro de calificaciones para\n" << getNameCourse() << " ! " <<endl ;
		}
	private:
		string nombreCurso;
};

int main(){
	
	string nombreDelCurso;
	LibroCalificaciones miLibroCalificaciones;
	
	cout << "El nombre inicial del curso es: " << endl << miLibroCalificaciones.getNameCourse() << endl;
	
	cout << "Escriba el nombre del Curso: " << endl ;
	getline(cin, nombreDelCurso);
	cout << endl ;
	
	miLibroCalificaciones.setNameCourse( nombreDelCurso );
	
	cout << endl ;
	miLibroCalificaciones.mostrarMensaje(); 
	
}
