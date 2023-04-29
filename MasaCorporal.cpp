//Calculadora de indice de masa corporal
#include <iostream>

using namespace std;

int main (){
	float kilo = 0, altura = 0;
	double imc = 0;
	
	cout << "Dame el peso en Kilogramos : " << endl;
	cin >> kilo;
	
	cout << "Dame la altura en metros : " << endl;
	cin >> altura;
	
	imc = kilo / ( altura * altura );
	
	cout << " \n\nSu indice de masa corporal es de: \t" << imc;
	cout << "\n\nValores de IMC:\n";
	cout << "\nBajo peso:\t menos de 18.5\n";
	cout << "Normal:\t         entre 18.5 y 24.9\n";
	cout << "Sobrepeso:\t entre 25 y 29.9\n";
	cout << "Obeso:\t         30 o más\n";
	
	return 0;
	
}
