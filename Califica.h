#include <iostream>
#include <string>


std::string establecerNombreCurso();
void establecerNombreCurso();

class Libro{
	public:
		explicit Libro ( std::string nombre )
			:aCuenta( 0 ), bCuenta( 0 ), cCuenta( 0 ), dCuenta( 0 ), fCuenta( 0 ){
			establecerNombreCurso( nombre );	
		}
		
		void establecerNombreCurso (std::string nombre ){
			if (nombre.size() <= 25 )
				nombreCurso = nombre;
			else {
				nombreCurso = nombre.substr( 0, 25 );
				
				std::cerr << "El nombre es:  \"" << nombre << " excede la longuitud maxima ( 25 ). \n"
				<< "Se limito nombreCurso a los primeros 25 caracteres .\n" << std::endl;
			}
		}
		
		std::string obtenerNombreCurso(){
			return nombreCurso;
		}
		
		void mostrarMensaje() const {
			std::cout << "Bienvenido al libro de calificaciones para \n" << obtenerNombreCurso() << "!\n" << std::endl;
		}
		
		void recibirCali() {
			int calificacion;
			
			std::cout << "Esciba las calificaciones de letra  " << std::endl
				<< "Escriba el caracter EOF para terminar la entrada. " << std::endl;
			
			while ((calificacion = cin.get() ) != EOF ) {
				
				switch ( calificacion ) {
					case 'a':
					case 'A':
						aCuenta++;
						break;
					
					case 'b':
					case 'B':
						bCuenta++;
						break;
					
					case 'c':
					case 'C':
						cCuenta++;
						break;
					
					case 'd':
					case 'D':
						dCuenta++;
						break;
					
					case 'f':
					case 'F':
						fCuenta++;
						break;
					
					case '\n':
					case '\t':
					case ' ':
						break;
						
					default: 
						std::cout << "Se introdujo una letra de calificacion incorrecta. "
							<< "Escriba una nueva calificacion. " << std::endl;
						break;  			
				}	
			}
		}
		void mostrarReporteCalificaciones() const {
			
			std::cout << "\n\n Numero de estudiantes que recibieron cada calificacion en letra:  "
			<<"\nA: "<< aCuenta
			<<"\nB: "<< bCuenta
			<<"\nC: "<< cCuenta
			<<"\nD: "<< dCuenta
			<<"\nF: "<< fCuenta
			<< std::endl;
		}	
	
	private:
		std::string nombreCurso;
		unsigned int aCuenta;
		unsigned int bCuenta;
		unsigned int cCuenta;
		unsigned int dCuenta;
		unsigned int fCuenta;
	
};
