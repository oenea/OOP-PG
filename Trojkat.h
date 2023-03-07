#ifndef __TROJKAT_H__
#define __TROJKAT_H__

#include "FiguraPlaska.h"

class Trojkat : public FiguraPlaska
{
private:
	static int liczbaTrojkatow;
	double a, b, c;

protected:
	void Wypisz(std::ostream& out) const override;
	
public:
	Trojkat(double a, double b, double c);
	~Trojkat() override;

	double GetA() const;
	double GetB() const;
	double GetC() const;

	void SetA(double a);
	void SetB(double b);
	void SetC(double c);

	double Obwod() override;
	double Pole() override;
};

#endif /* __TROJKAT_H__ */