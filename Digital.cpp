#include "Digital.h"

Digital::Digital()
{
    //ctor
}

Digital::~Digital()
{
    //dtor
}


const string &Digital::getFilePath() const {
    return filePath;
}

void Digital::setFilePath(const string &filePath) {
    Digital::filePath = filePath;
}

double Digital::AplicarDescuento() {
    return getPrecio() * 0.12;
}

