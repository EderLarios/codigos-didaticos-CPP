#include <iostream>
#include <string>

class Factura{
	public:
		explicit Factura (std::string idpro, std::string descripcion, int cantidad, int precio){
			//Uso de las Funciones set (colocar) para inicializar los datos miembro del objeto creado
			setId(idpro);
			setDes(descripcion);
			setCant(cantidad);
			setPre(precio);
			
		}
		std::string getId () const{
			return id;
		}
		void setId (std::string idpro){
			id = idpro;
		}
		
		std::string getDes () const{
			return descri;
		}
		void setDes (std::string descripcion){
			descri = descripcion;
		}
		
		int getCant () const{
			return canti;
		}
		void setCant (int cantidad){
			canti = cantidad;
		}
		
		int getPre () const{
			return prec;
		}
		void setPre (int precio){
			prec = precio;
		}
		
		void obtenerFactura(){
			std::string idfac = getId();
			std::string desfac = getDes();
			int canfac = getCant ();
			int prefac = getPre();
			
			std::cout << "\t FACTURA \n "<< "Id   \tDescripcion\tCantidad\tPrecio\t Total \n"
				<< idfac << "\t" << desfac << "\t" << canfac << "\t\t" << prefac << "\t" << total(canfac, prefac);
		}
		float total(int cantidad, int precio){
			float tot = cantidad * precio;
			return tot;
		}
	
	
	private:
		std::string id;
		std::string descri;
		int canti;
		int prec;
	
	
};
