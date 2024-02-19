#pragma once
#include "Figura.h"
ref class Triangulo :public Figura
{
private:
	int lado1;
	int lado2;
	int lado3;

public:
	int dameLado1();
	void ponLado1(int valorLado1);
	Triangulo(int lado1, int lado2, int lado3, int x, int y);
	float damePerimetro() override;
	float dameSuperficie() override;
};

