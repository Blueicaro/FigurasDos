#include "pch.h"
#include "Figura.h"

int Figura::damePosicionX()
{
    return this->posicionX;
}

void Figura::ponPosicionX(int numerico)
{
    if (numerico < 0)
        this->posicionX = 0;
    else
        this->posicionX = numerico;
}

int Figura::damePosicionY()
{
    return this->posicionY;
}

void Figura::ponPosicionY(int numerico)
{
    if (numerico < 0)
        this->posicionY = 0;
    else
        this->posicionY = numerico;
}




Figura::Figura(int posicionX, int posicionY) 
{
    ponPosicionX(posicionX);
    ponPosicionY(posicionY);
}
