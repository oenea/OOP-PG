#ifndef __OKRAG_H__
#define __OKRAG_H__

#include "FiguraPlaska.h"

class Okrag : public FiguraPlaska
{
private:
	static int liczbaOkregow;
	double r;

protected:
	void Wypisz(std::ostream& out) const override;

public:
	Okrag(double r);
	~Okrag() override;

	double GetR() const;

	void SetR(double r);

	double Obwod() override;
	double Pole() override;
};

#endif /* __OKRAG_H__ */