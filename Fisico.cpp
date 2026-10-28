#include "Fisico.h"

Fisico::Fisico()
{
    //ctor
}

Fisico::~Fisico()
{
    //dtor
}


double Fisico::getPeso() const {
    return Peso;
}

void Fisico::setPeso(double Peso) {
    Fisico::Peso = Peso;
}

double Fisico::AplicarDescuento() {
    return getPrecio() * 0.30;
}
