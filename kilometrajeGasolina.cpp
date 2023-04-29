#include <iostream>
using namespace std;

int main (){
	double valor = 0, litros = 0, kpl = 0;
	
	cout << "Escriba los kilometros usados (-1 para salir)  \t";
	cin >> valor;
	
	while( valor != -1){
		
		cout << "Escriba los litros:  \t";
		cin >> litros;
		
		cout << "KPL en este reabastecimiento:   \t" ;
		kpl = valor / litros;
		cout << kpl << endl << endl ;
		
		cout << "Escriba los kilometros usados (-1 para salir)  \t";
		cin >> valor;
		
	}
	
	
	
}
