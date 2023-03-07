#include "Okrag.h"
#include <math.h>

void Okrag::Wypisz(std::ostream& out) const {
	out << "Okrag(" << r << ")\n";
}

Okrag::Okrag(double r) : r(r) {
	std::cout << "Konstruktor Okrag(" << r << ")\n";
	liczbaOkregow++;
	std::cout << "Liczba figur plaskich: " << liczbaObiektow << ", Liczba okragow: " << liczbaOkregow << '\n';
}

double Okrag::GetR() const {
	return r;
}

void Okrag::SetR(double r) {
	this->r = r;
}

double Okrag::Obwod() {
	return 2 * M_PI * r;
}

double Okrag::Pole() {
	return M_PI * r * r;
}

Okrag::~Okrag() {
	std::cout << "Dekonstruktor Okrag(" << r << ")\n";
}

int Okrag::liczbaOkregow = 0;