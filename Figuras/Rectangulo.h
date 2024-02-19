#pragma once
#include "Figura.h"
ref class Rectangulo :
    public Figura
{
private:
    int ladoLargo;
    int ladoCorto;
public:
    int dameladoCorto();
    void ponladoCorto(int ladoCortoPasado);
    int dameladoLargo();
    void ponladoLargo(int ladoLargoPasado);
    Rectangulo(int ladoLargo, int ladoCorto, int x, int y);
};

