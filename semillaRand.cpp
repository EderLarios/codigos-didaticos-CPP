#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main () {
	
	unsigned int semilla = 0;
	
	cout << "Introduzca la semilla:   \t";
	cin >> semilla;
	srand( semilla );
	
	for ( unsigned int contador = 1; contador <= 10; contador++){
		
		cout << setw( 10 ) << ( 1 + rand() % 6);
		
		if ( contador % 5 == 0 )
			cout << endl;

	}
	
	return 0;	
}
