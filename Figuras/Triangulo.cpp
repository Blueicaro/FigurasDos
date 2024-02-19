#include "pch.h"
#include "Triangulo.h"

int Triangulo::dameLado1()
{
    return this->lado1;
}

void Triangulo::ponLado1(int valorLado1)
{
    if (valorLado1 < 1)
        this->lado1 = 1;
    else
        this->lado1 = valorLado1;
}

Triangulo::Triangulo(int lado1, int lado2, int lado3, int x, int y) : Figura(x,y)
{
    this->ponLado1(lado1);
    this->lado2 = lado2;
    this->lado3 = lado3;
}

float Triangulo::damePerimetro()
{
    return lado1 + lado2 + lado3;
}

float Triangulo::dameSuperficie()
{
    float s = (this->lado1 + this->lado2 + this->lado3) / 2;
    //https://www.matesfacil.com/matematicos/Heron/Heron-de-Alejandria-formula-area-triangulo-metodo-aproximar-raiz-cuadrada-demostracion.html
    return System::Math::Sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
}
