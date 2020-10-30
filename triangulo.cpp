#include "triangulo.h"

double Triangulo::area(){
    return base*altura/2;
}

double Triangulo::perimetro(){
    return base+altura+sqrt(pow(base,2)+pow(altura,2));
}
