#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <iostream>
using namespace std;

class Producto {
private:
    string Nombre;
    double Precio;

    virtual double AplicarDescuento();
public:
    Producto();

    virtual ~Producto();

    virtual double ConvertirPrecio();

    const string &getNombre() const;

    void setNombre(const string &Nombre);

    double getPrecio() const;

    void setPrecio(double Precio);
};


#endif // PRODUCTO_H
