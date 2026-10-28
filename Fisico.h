#ifndef FISICO_H
#define FISICO_H
#include "Producto.h"
class Fisico : public Producto {
private:
    double Peso;
    double AplicarDescuento() override;
public:
    Fisico();

    virtual ~Fisico();

    double getPeso() const;

    void setPeso(double Peso);
};



#endif // FISICO_H
