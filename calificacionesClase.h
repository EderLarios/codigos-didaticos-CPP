#include <iostream>
#include <string>

class LibroCalificaciones{
	public:
		
		explicit LibroCalificaciones ( std::string nombre ) : nombreCurso (nombre){
			
		}
		void setNameCourse ( std::string nombre ){
			nombreCurso = nombre ;
		}
		std::string getNameCourse () const {
			return nombreCurso;
		}
		void mostrarMensaje () const{
			std::cout << "Bienvenido al libro de Calificaciones para\n" << getNameCourse() << " ! " << std::endl ;
		}
	private:
		std::string nombreCurso;
};
