#pragma once
#include "Figura.h"
#include "math.h"
ref class Circulo : public Figura
{
private:
	int radio;

public:
	int dameRadio();
	void ponRadio(int valorRadio);
	Circulo(int radio, int x, int y);
	float damePerimetro() override;
	float dameSuperficie() override;
};