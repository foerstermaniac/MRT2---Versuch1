#include "Complex.h"

Complex::Complex(double r, double i) :
	real(r), imag(i) {

	}
double Complex::Re() const {
	return real;
}
double Complex::Im() const {
	return imag;
}
