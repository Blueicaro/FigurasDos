#pragma once
ref class Figura 
{
private:
	int posicionX;
	int posicionY;
public:
	int damePosicionX();
	void ponPosicionX(int numerico);
	int damePosicionY();
	void ponPosicionY(int numerico);
	Figura(int posicionX, int posicionY);
	virtual float damePerimetro() { return 0; };
	virtual float dameSuperficie() { return 0; };
};

