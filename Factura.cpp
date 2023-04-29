#include <iostream>
#include "Factura.h"

using namespace std;

int main(){
	string idp, descrip;
	int cantid = 0, precios = 0;
	
	cout<<"Dame el Id del producto: \t";
	cin>>idp;
	
	cout<<"Dame la descripcion: \t";
	cin>>descrip;
	
	cout<<"Dame la cantidad de productos: \t";
	cin>>cantid;
	
	cout<<"Dame el precio del producto: \t";
	cin>>precios;
	if (precios < 0){
		precios = 0;
		cout << "Precio invalido " << endl << endl ;
	}
	
	Factura factura(idp, descrip, cantid, precios);
	
	factura.obtenerFactura();
}
