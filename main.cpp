#include <iostream>
#include <cmath>

#include "triangulo.h"
#include "rectangulo.h"
#include "pentagono.h"
#include "hexagono.h"
#include "heptagono.h"
#include "octagono.h"

int main()
{
    Triangulo oTri;
    Rectangulo oRec;
    Pentagono oPen;
    Hexagono oHex;
    Heptagono oHep;
    Octagono oOct;
    Poligono* ptrP1 = &oTri;
    Poligono* ptrP2 = &oRec;
    Poligono* ptrP3 = &oPen;
    Poligono* ptrP4 = &oHex;
    Poligono* ptrP5 = &oHep;
    Poligono* ptrP6 = &oOct;
    ptrP1->setValues(4,5);
    ptrP2->setValues(4,5);
    ptrP3->setValues(4,5);
    ptrP4->setValues(4,5);
    ptrP5->setValues(4,5);
    ptrP6->setValues(4,5);
    std::cout<< oTri.area() << std::endl ;
    std::cout<< oRec.area() << std::endl ;
    std::cout<< oPen.area() << std::endl ;
    std::cout<< oHex.area() << std::endl ;
    std::cout<< oHep.area() << std::endl ;
    std::cout<< oOct.area() << std::endl ;
}
