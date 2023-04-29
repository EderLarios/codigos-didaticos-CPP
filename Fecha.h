#include <iostream>
#include <string>

class Fecha{
	public:
		explicit Fecha(int day, int mounth, int year){
			//uso de sus funciones de set (colocar) de la Clase Fecha
			setDay(day);
			setMounth(mounth);
			setYear(year);
		}
		void setDay(int day){
			dia = day;
		}
		int getDay () const {
			return dia;
		}
		
		void setMounth (int mounth){
			mes = mounth;
		}
		int getMounth () const {
			return mes;
		}
		
		void setYear(int year){
			anio = year;
		}
		int getYear (){
			return anio;
		}
		
		void mostrarFecha(){
			std::cout << "La fecha ingresada es:  \t" << getDay() << " / " << getMounth() << " / " << getYear(); 
		}
		
	private:
		int dia;
		int mes;
		int anio;
	
};
