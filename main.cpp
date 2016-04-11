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

int main ()
{
	Complex c0(1,3), c1(2,1);
	Complex c2 = c0 * c1;
	double x(2);
	cout << c0 << " + " << c1 << " = " << c0+c1 << endl;
	cout << c0 << " - " << c1 << " = " << c0-c1 << endl;
	cout << c0 << " * " << c1 << " = " << c2 << endl;
	cout << c0 << " / " << c1 << " = " << c0/c1 << endl;
	cout << c0 << " * " << x << " = " << c0*x << endl;
	cout << c0 << " / " << x << " = " << c0/x << endl;
 	return 0;
}
