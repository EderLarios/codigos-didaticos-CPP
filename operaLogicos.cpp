#include <iostream>

using namespace std;

int main () {
	
	cout << boolalpha << "AND logico (&&)\n"
	<< "false && false:  " << (false && false) << endl
	<< "false && true:  " << (false && true) << endl
	<< "true && false:  " << (true && false) << endl
	<< "true && true:  " << (true && true) << endl << endl;
	
	cout << "OR logico (||)\n"
	<< "false || false:  " << (false || false ) << endl
	<< "false || true:  " << (false || true ) << endl
	<< "true || false:  " << (true || false ) << endl
	<< "true || true:  " << (true || true ) << endl << endl;
	
	cout << "NOT logico (!)" << endl
	<< "!false:    " << (!false) << endl
	<< "!true:     " << (!true) << endl; 
	
	return 0;
}
