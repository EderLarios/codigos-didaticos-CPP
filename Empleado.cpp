#include <iostream>
#include "Empleado.h"

using namespace std;

int main (){
	
	string primero, segundo;
	float salar, aumen;
	
	cout << "Dame el Nombre del Empleado: 1\t";
	cin >> primero;
	
	cout << "Dame el Apellido del Empleado: 1 \t";
	cin >> segundo;
	
	cout << "Dame el Salario \t";
	cin >> salar;
	if (salar < 0){
		salar = 0;
	}
	
	Empleado empleado(primero, segundo, salar);
	
	primero = "";
	segundo = "";
	salar = 0;
	
	cout << "\nDame el Nombre del Empleado: \t";
	cin >> primero;
	
	cout << "Dame el Apellido del Empleado: \t";
	cin >> segundo;
	
	cout << "Dame el Salario \t";
	cin >> salar;
	if (salar < 0){
		salar = 0;
	}
	
	Empleado empleado2(primero, segundo, salar);
	
	empleado.obtenerEmpleado();
	empleado2.obtenerEmpleado();
	
	cout << "De cuanto seria el aumento \n";
	cin >> aumen;
	
	empleado2.aumento(aumen);
	empleado2.obtenerEmpleado();
	
}
