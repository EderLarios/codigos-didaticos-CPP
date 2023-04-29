#include <iostream>

using namespace std;

int main () {
	
	unsigned int cuenta;
	
	for ( cuenta = 1; cuenta <=10; cuenta++ ){
		
		if ( cuenta == 5)
			continue;
			
		cout << cuenta << "   ";
	}
	
	cout << "\n Se uso continue para no imprimir el  5  " << endl;
	
	return 0;
}
