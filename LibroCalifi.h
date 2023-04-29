#include <string>

class LibroCalifi{
	public:
		explicit LibroCalifi (std::string );
		void establecerNombreCurso (std::string);
		std::string obtenerNombreCurso() const;
		void mostrarMensaje() const;
		void determinarPromedioClase() const;
		
	private:
		std:: string nombreCurso;

};
