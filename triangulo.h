#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <cmath>
#include "poligono.h"

class Triangulo: public Poligono
{
public:
    double area();
    double perimetro();
};

#endif // TRIANGULO_H
