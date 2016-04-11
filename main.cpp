#include <iostream>
using namespace std;
#include "Complex.h"

inline ostream& operator<<(ostream& lhs, const Complex& rhs){
	return lhs << "(" << rhs.Re() << "," << rhs.Im() << ")";
	// Wird das erst aufgerufen, wenn das Programm an der Stelle durch läuft?
}

Complex operator+(const Complex& lhs,const Complex& rhs){
	Complex cret(lhs);
	return cret += rhs;
}


Complex operator-(const Complex& lhs, const Complex& rhs){
	Complex cret(lhs);
	return cret -= rhs;
}

Complex operator*(const Complex& lhs, const Complex& rhs){
	Complex cret(lhs);
	return cret *= rhs;
}

Complex operator/(const Complex& lhs, const Complex& rhs){
	Complex cret(lhs);
	return cret /= rhs;
}

// Berechnung der Transferfunktion
Complex j(0,1);
double C(1e-6), R(1000);
Complex transfer_function(double w){
	return R / (R + 1 / ( j * w * C));
}

int main ()
{
	// Berechnung Transferfunktion
	for (double w=1; w<1000; w+= 3){
		Complex r = transfer_function(w);
		cout << w << " " << r.Re() << " " << r.Im() << endl;
	}
 	return 0;
}
