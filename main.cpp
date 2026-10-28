#include <iostream>
#include "Fisico.h"
#include "Digital.h"

using namespace std;

int main() {
    cout << "Sustitucion de Liskov\n" << endl;

    Fisico ProductoFisico;
    ProductoFisico.setNombre("Nintendo");
    ProductoFisico.setPrecio(500);
    ProductoFisico.setPeso(1200);

    Digital ProductoDigital;
    ProductoDigital.setNombre("Game");
    ProductoDigital.setPrecio(120);
    ProductoDigital.setFilePath("c:\\file\\game.app");

    cout << "[Producto Fisico] 30% Descuento $" << ProductoFisico.getPrecio() << ". Precio Final: $" <<
    ProductoFisico.ConvertirPrecio() << "\n" << endl;

    cout << "[Producto Digital ] 12% Descuento $" << ProductoDigital.getPrecio() << ". Precio Final: $"<<
    ProductoDigital.ConvertirPrecio() << "\n" << endl;

    return 0;
}
