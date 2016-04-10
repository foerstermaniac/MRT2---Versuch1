class Complex {
private:
	double real;
	double imag;
public:
	// Konstrukturen
	Complex(double r = 0.0, double i = 0.0);
	// Zugriff auf die Attribute
	double Re() const;
	double Im() const;
};
