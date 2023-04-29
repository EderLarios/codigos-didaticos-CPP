//El programa calculara el producto de tres numeros
#include <iostream>

using namespace std;

int main(){
	int x = 0, y = 0, z = 0;
	
	cout << "Dame tres numeros a multiplicar:  \n";
	cin >> x >> y >> z;
	
	int resultado = x * y * z;
	
	cout << "El resultado es :\t" << resultado ;
	
	return 0;
	
}
