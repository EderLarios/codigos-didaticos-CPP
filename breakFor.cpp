#include <iostream>

using namespace std;

int main () {
	
	unsigned int cuenta;
	
	for ( cuenta = 1; cuenta <=10; cuenta++ ){
		
		if ( cuenta == 5)
			break;
			
		cout << cuenta << "   ";
	}
	
	cout << "\n Salio del ciuclo cuenta:  "<< cuenta << endl;
	
	return 0;
}
