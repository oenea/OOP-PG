#include "FiguraPlaska.h"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura) {
	figura.Wypisz(os);
	return os;
}

FiguraPlaska::FiguraPlaska() {
	liczbaObiektow++;
}

FiguraPlaska::~FiguraPlaska() {
	liczbaObiektow--;
}

int FiguraPlaska::liczbaObiektow = 0;