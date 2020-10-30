#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "poligono.h"

class Rectangulo : public Poligono
{
public:
    double area();
    double perimetro();
};

#endif // RECTANGULO_H
