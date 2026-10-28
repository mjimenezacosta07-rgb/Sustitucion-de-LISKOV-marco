#ifndef DIGITAL_H
#define DIGITAL_H
#include "Producto.h"

class Digital: public Producto {
private:
    string filePath;
    double AplicarDescuento() override;
public:
    Digital();

    virtual ~Digital();

    const string &getFilePath() const;

    void setFilePath(const string &filePath);
};


#endif // DIGITAL_H
