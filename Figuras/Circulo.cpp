#include "pch.h"
#include "Circulo.h"


int Circulo::dameRadio()
{
    return 0;
}

void Circulo::ponRadio(int valorRadio)
{
    if (valorRadio < 1)
        this->radio = 1;
    else
        this->radio = valorRadio;
}

Circulo::Circulo(int radio, int x, int y): Figura (x,y)
{
    this->ponRadio(radio);
}

float Circulo::damePerimetro()
{
    return 2 * System::Math::PI * this->radio;
}

float Circulo::dameSuperficie()
{
    return System::Math::PI * System::Math::Pow(this->radio, 2);
}





