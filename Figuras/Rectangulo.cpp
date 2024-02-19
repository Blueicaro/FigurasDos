#include "pch.h"
#include "Rectangulo.h"

int Rectangulo::dameladoCorto()
{
    return this->ladoCorto;
}

void Rectangulo::ponladoCorto(int ladoCortoPasado)
{
    if (ladoCortoPasado < 1)
        this->ladoCorto = 1;
    else
        this->ladoCorto = ladoCortoPasado;
}
int Rectangulo::dameladoLargo()
{
    return this->ladoLargo;
}

void Rectangulo::ponladoLargo(int ladoLargoPasado)
{
    if (ladoLargoPasado < 1)
        this->ladoLargo = 1;
    else
        this->ladoLargo = ladoLargoPasado;
}

Rectangulo::Rectangulo(int ladoLargo, int ladoCorto, int x, int y) : Figura (x,y)
{
    this->ladoLargo = ladoLargo;
    this->ladoCorto = ladoCorto;
}
