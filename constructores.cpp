#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones{
	public:
		
		explicit LibroCalificaciones ( string nombre ) :nombreCurso (nombre){
			
		}
		void setNameCourse ( string nombre ){
			nombreCurso = nombre ;
		}
		string getNameCourse () const {
			return nombreCurso;
		}
		void mostrarMensaje () const{
			cout << "Bienvenido al libro de Calificaciones para\n" << getNameCourse() << " ! " << endl ;
		}
	private:
		string nombreCurso;
};

int main (){
	
	LibroCalificaciones libroCalificaciones1( " CS101 Introduccion a la programacion en C++ " );
	LibroCalificaciones libroCalificaciones2( " CS102 Estructura de datos en C++ " );
	
	cout << "libroCalificaciones1 se creo para el curso: \n" << libroCalificaciones1.getNameCourse() << endl << endl 
		<< "libroCalificaciones2 se creo para el curso: \n" << libroCalificaciones2.getNameCourse()
		<< endl ;
	
}
