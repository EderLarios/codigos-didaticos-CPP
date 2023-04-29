#include <iostream>

using namespace std; 

int main () {
	int lado = 0, e = 1, i = 1, j = 0;
	
	cout << "Dame el numero de lados de tu cuadrado :  \t";
	cin >> lado;
	
	while (e <= lado){
		
		if(e == 1 || e == lado){
			i = 1;
			while (i <= lado){
				cout << "*" ;
				i++;
			}
			e++;
			cout << endl;
		} else {
			cout << "*";
			j = 1;
			while(j <= (lado-2)){
				cout << " ";
				j++;
			}
			cout << "*";
			cout << endl;
			e++;
		}
	}
	
	
}
	

