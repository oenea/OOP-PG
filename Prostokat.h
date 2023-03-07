#ifndef __PROSTOKAT_H__
#define __PROSTOKAT_H__

#include "FiguraPlaska.h"


class Prostokat : public FiguraPlaska
{
private:
	static int liczbaProstokatow;
	double a, b;

protected:
	void Wypisz(std::ostream& out) const override;

public:
	Prostokat(double a, double b);
	~Prostokat() override;

	double GetA() const;
	double GetB() const;

	void SetA(double a);
	void SetB(double b);

	double Obwod() override;
	double Pole() override;
};

#endif /* __PROSTOKAT_H__ */