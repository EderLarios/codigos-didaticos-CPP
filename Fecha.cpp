#include <iostream>
#include "Fecha.h"

using namespace std;

int main (){
	int dia1 = 0, mes1 = 0, anio1 =  0;
	
	cout << "Dame el dia : \t";
	cin >> dia1;
	
	cout << "Dame el mes : \t";
	cin >> mes1;
	if (mes1 > 12 || mes1 < 1){
		mes1 = 1;
	}
	
	cout << "Dame el año  \t";
	cin >> anio1;
	
	Fecha fecha(dia1, mes1, anio1);
	fecha.mostrarFecha();
	
	
	
}









































