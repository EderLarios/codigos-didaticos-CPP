#include <iostream>

using namespace std;

int main () {
	
	int valor = 0;
	
	cout << "Escribe 5 numeros entre el 1 y el 30:  " << endl;
	
	for (int i = 0; i < 5; i++){
		cin >> valor;
		
		for (int j = 0; j < valor; j++){
			cout << "*";
		}
		
		cout << endl;
	}
	
	
}
