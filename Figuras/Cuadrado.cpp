#include "pch.h"
#include "Cuadrado.h"

int Cuadrado::dameLado()
{
    return this->lado;
}

void Cuadrado::ponLado(int valorLado)
{
    if (valorLado > 0)
        this->lado = valorLado;
    else
        this->lado = 1;
}


Cuadrado::Cuadrado(int lado,int x, int y) : Figura(x,y)
{
    
    this->ponLado(lado);

}

float Cuadrado::damePerimetro()
{
    return this->lado * 4;
}

float Cuadrado::dameSuperficie()
{
    return this->lado * this->lado;
}
