#include <iostream>
#include <string>

class Empleado{
	public:
		explicit Empleado (std::string nombre, std::string apellido, float ganancia){
			//Utilizacion de las funciones SET (colocar) para inicializar los miembros del objeto
			setNombre(nombre);
			setApellido(apellido);
			setSalario(ganancia);
			
		}
		void setNombre(std::string nombre) {
			name = nombre; 
		}
		std::string getNombre() const {
			return name;
		}	
		
		void setApellido(std::string apellido) {
			last = apellido; 
		}
		std::string getApellido() const {
			return last;
		}
		
		void setSalario(float ganacia) {
			salario = ganacia; 
		}
		float getSalario() const {
			return salario;
		}
		void aumento(float porcentaje){
			float sal = getSalario();
			float aumento = (sal * porcentaje)/100;
			aumento = sal + aumento;
			setSalario(aumento);
		}
		void obtenerEmpleado(){
			std::cout << getNombre() <<"\t"<< getApellido() <<"\t$"<< getSalario() << "\n";
		}
	
	private:
		std::string name;
		std::string last;
		float salario;	
};
