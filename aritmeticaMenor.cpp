//ejercicio numero 2.19 examen
#include <iostream>

using namespace std;

int main(){
	int a = 0, b = 0, c = 0;
	
	cout << "Dame tres numeros: \n";
	cin >> a >> b >> c;
	
	cout << "La suma es: \t" << a + b + c << "\n";
	cout << "El promedio es: \t" << (a + b + c)/3 << "\n";
	cout << "El producto es: \t" << a * b * c << "\n";
	
	if (a < b && b < c){
		cout << "El menor es: \t"<< a << endl ;
		cout << "El mayor es: \t"<< c << endl ;
	}
	if (a < c && c < b){
		cout << "El menor es: \t"<< a << endl ;
		cout << "El mayor es: \t"<< b << endl ;
	}
	if (b < a && a < c){
		cout << "El menor es: \t"<< b << endl ;
		cout << "El mayor es: \t"<< c << endl ;
	}
	if (b < c && c < a){
		cout << "El menor es: \t"<< b << endl ;
		cout << "El mayor es: \t"<< a << endl ;
	}
	if (c < b && b < a){
		cout << "El menor es: \t"<< c << endl ;
		cout << "El mayor es: \t"<< a << endl ;
	}
	if (c < a && a < b){
		cout << "El menor es: \t"<< c << endl ;
		cout << "El mayor es: \t"<< b << endl ;
	}
	
	return 0;
	
}
