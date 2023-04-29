/*comparacion de enteros mediante instrucciones i, operadores
relacionales y operadores de Igualdad
*/
#include <iostream> //permite al programa realizar operaciones de entrada y salida

using std::cout; //el programa usa cout
using std::cin; // el programa usa cin
using std::endl; //el programa usa endl

//la funcion main empiez ala ejecucion del programa
int main(){
	
	int numero1 = 0; //primer entero a comparar (se inicializa con cero)
	int numero2 = 0; //segundo entero a comparar (se inicializa con cero)
	
	cout << "Escriba dos numeros enteros a comparar:  \n"; //pide los datos al usuario
	cin >> numero1 >> numero2; //lee dos enteros del usuario 
	
	if (numero1 == numero2)
		cout << numero1 << " == " << numero2 << endl;
	
	if (numero1 != numero2)
		cout << numero1 << " != " << numero2 << endl;
		
	if (numero1 < numero2)
		cout << numero1 << " < " << numero2 << endl;
	
	if (numero1 > numero2)
		cout << numero1 << " > " << numero2 << endl;
		
	if (numero1 <= numero2)
		cout << numero1 << " <= " << numero2 << endl;
		
	if (numero1 >= numero2)
		cout << numero1 << " >= " << numero2 << endl;
	
}//fin de la funcion

