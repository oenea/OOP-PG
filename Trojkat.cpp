#include "Trojkat.h"
#include <math.h>


void Trojkat::Wypisz(std::ostream& out) const {
	std::cout << "Trojkat(" << a << ", " << b << ", " << c << ")\n";
}

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {
	std::cout << "Konstruktor Trojkata(" << a << ", " << b << ", " << c << ")\n";
	liczbaTrojkatow++;
	std::cout << "Liczba figur: " << liczbaObiektow << ", Liczba trojkatow: " << liczbaTrojkatow << '\n';
}

double Trojkat::GetA() const {
	return a;
}

double Trojkat::GetB() const {
	return b;
}

double Trojkat::GetC() const {
	return c;
}

void Trojkat::SetA(double a) {
	this->a = a;
}

void Trojkat::SetB(double b) {
	this->b = b;
}

void Trojkat::SetC(double c) {
	this->c = c;
}

double Trojkat::Obwod() {
	return a + b + c;
}

double Trojkat::Pole() {
	double p = (a + b + c)/2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

Trojkat::~Trojkat() {
	std::cout << "Dekonstruktor Trojkata(" << a << ", " << b << ", " << c << ")" << std::endl;
}

int Trojkat::liczbaTrojkatow = 0;