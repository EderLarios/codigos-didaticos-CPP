#include <iostream>
#include <string>

class Cuenta{
	public:
		explicit Cuenta ( float dinero ): saldo (dinero){
			
		}
		void setSaldo (float dinero){
			saldo = dinero;
		}
		float getSaldo () const {
			return saldo;
		}
		void abonarSaldo (float dinero){
			getSaldo ();
			saldo = saldo + dinero;
		}
		void retirarSaldo (float dinero){
			getSaldo ();
			if (dinero <= saldo ){
				saldo = saldo - dinero;
				mensaje("Retiro hecho de manera satisfactoria \n");
			}else{
				mensaje("Saldo insuficiente para dicha operacion \n"); 
			}
		}
		void mensaje(std::string linea) const {
			std::cout<<" Mensaje \n" << linea << std::endl ;
		}
	private:
		float saldo;
	
};
