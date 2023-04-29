#include <string>

class LibroCalificaciones{
	public:
		explicit LibroCalificaciones(std::string);
		
		void setNameCourse ( std::string );
		std::string getNameCourse() const;
		void mostrarMensaje () const;
	
	private:
		std::string nombreCurso;
	
};
