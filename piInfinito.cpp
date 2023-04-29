//Calculando pi
#include <iostream>

using namespace std;

int main () {
	double pi = 4, resta = 3, divi = 0;
	 
	for (int i = 3; i <= 1000; i++) {
		if (i % 2){
			double e = i;
			if (e == resta){
				divi = 4.00/e;
				pi = pi - divi;
				resta = resta + 8;
			}else {
				divi = 4.00/e;
				pi = pi + divi;
			}
		}
		
			
		
	}
	
	cout << "Pi es: \t" << pi << endl;
	
	
}

