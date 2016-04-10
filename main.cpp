#include <iostream>
using namespace std;
#include "Complex.h"

inline ostream& operator<<(ostream& lhs, const Complex& rhs){
	return lhs << "(" << rhs.Re() << "," << rhs.Im() << ")";
	// Wird das erst aufgerufen, wenn das Programm an der Stelle durch läuft?
}

int main ()
{
	Complex c0(1,3), c1, c2(c0);
	cout << "c0 = (" << c0.Re() << "," << c0.Im() << ")" << endl;
	cout << c0 << endl;	//mit neuer deklaration
 	return 0;
}
