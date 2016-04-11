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
Complex& Complex::operator+=(const Complex& rhs){
	real+=rhs.real;
	imag+=rhs.imag;
	return *this;
}
Complex& Complex::operator+=(const double& rhs){
	real+=rhs;
	return *this;
}
Complex& Complex::operator-=(const Complex& rhs){
	real-=rhs.real;
	imag-=rhs.imag;
	return *this;
}
Complex& Complex::operator-=(const double& rhs){
	real-=rhs;
	return *this;
}
Complex& Complex::operator*=(const Complex& rhs){
	double realcp = this->real;
	real = this->real * rhs.real - this->imag * rhs.imag;
	imag = (realcp * rhs.imag) + (this->imag * rhs.real);
	return *this;
}
Complex& Complex::operator*=(const double& rhs){
	real *= rhs;
	imag *= rhs;
	return *this;
}
Complex& Complex::operator/=(const Complex& rhs){
	double realcp = real;
	real = ( real * rhs.real + imag * rhs.imag) / (rhs.real*rhs.real + rhs.imag*rhs.imag);
	imag = ( this->imag * rhs.real - realcp * rhs.imag) / (rhs.real*rhs.real + rhs.imag*rhs.imag);
	return *this;
}
Complex& Complex::operator/=(const double& rhs){
	real /= rhs;
	imag /= rhs;
	return *this;
}
