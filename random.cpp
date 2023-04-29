#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>

using namespace std;

int main () {
	
	default_random_engine motor( static_cast<unsigned int>( time(0)));
	uniform_int_distribucion<unsigned int> intAleatorio(1, 6);
	
	for (unsigned int e = 1; e <= 10; e++){
		
		cout << setw(10) << intAleatorio( motor );
		
		if ( e % 5 == 0 ){
			cout << endl;
		}
		
	}
	
	return 0;
}
