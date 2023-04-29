#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	int numero = 0, cantidad = 0, i;
	double total1 = 0.00;
	double total2 = 0.00;
	double total3 = 0.00;
	double total4 = 0.00;
	double total5 = 0.00;
	int producto1 = 0;
	int producto2 = 0;
	int producto3 = 0;
	int producto4 = 0;
	int producto5 = 0;
	
	cout << "Introduce el numero del producto (-1 para salir) :" << endl ;
	cin >> numero;
	
	for ( i = 1; numero != -1; i++) {
		
		cout << "Dame la cantidad de productos vendidos:  "<< endl;
		cin >> cantidad;
		
		switch (numero){
			 case 1:
			 	producto1 = producto1 + cantidad;
			 	total1 = producto1 * 2.98;
			 	break;
			case 2:
			 	producto2 = producto2 + cantidad;
			 	total2 = producto2 * 4.50;
			 	break;
			case 3:
			 	producto3 = producto3 + cantidad;
			 	total3 = producto3 * 9.98;
			 	break;
			case 4:
			 	producto4 = producto4 + cantidad;
			 	total4 = producto4 * 4.49;
			 	break;
			case 5:
			 	producto5 = producto5 + cantidad;
			 	total5 = producto5 * 6.87;
			 	break;
			
			default:
				cout << "Espera, Que verga!!!"; break;
			
		}
		
		cout << "Introduce el numero del producto (-1 para salir) :" << endl ;
		cin >> numero;	
		
	}
	cout << "Producto   1:" << setw(15) << producto1 << endl; 
	cout << "Total   1:   " << setw(15) << total1 << endl;
	
	cout << "Producto   2:" << setw(15) << producto2 << endl; 
	cout << "Total   2:   " << setw(15) << total2 << endl;
	
	cout << "Producto   3:" << setw(15) << producto3 << endl; 
	cout << "Total   3:   " << setw(15) << total3 << endl;
	
	cout << "Producto   4:" << setw(15) << producto4 << endl; 
	cout << "Total   4:   " << setw(15) << total4 << endl;
	
	cout << "Producto   5:" << setw(15) << producto5 << endl; 
	cout << "Total   5:   " << setw(15) << total5 << endl;
	
}
