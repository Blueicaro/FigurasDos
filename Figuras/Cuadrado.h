#pragma once
#include "Figura.h"
ref class Cuadrado : public Figura
{
private:
	int lado;
public:
	int dameLado();
	void ponLado(int valorLado);
	Cuadrado(int lado, int x, int y);	
	float damePerimetro() override;
	float dameSuperficie() override;
};

