#ifndef POLIGONOS_H
#define POLIGONOS_H


class Poligono
{
protected:
    int base,altura;
public:
    void setValues(int,int);
    ~Poligono();
    virtual double area()=0;
    virtual double perimetro()=0;
};

#endif // POLIGONOS_H
