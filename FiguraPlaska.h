#ifndef __FIGURA_PLASKA_H__
#define __FIGURA_PLASKA_H__

#include <iostream>

class FiguraPlaska
{
protected:
	virtual void Wypisz(std::ostream& out) const = 0;
	friend std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura);
	static int liczbaObiektow;

public:
	FiguraPlaska();
	virtual ~FiguraPlaska();
	virtual double Pole() = 0;
	virtual double Obwod() = 0;
};

#endif /* __FIGURA_PLASKA_H__ */