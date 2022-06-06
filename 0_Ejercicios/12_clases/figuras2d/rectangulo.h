#ifndef RECTANGULO_H
#define RECTANGULO_H
#include"cuadrado.h"
#include<iostream>
using namespace::std;


class rectangulo:public cuadrado
{
    public:
        rectangulo();
        virtual ~rectangulo();

        void setAltura();
        void setArea();

        double getAltura();

    protected:

    double altura;
    private:
};

#endif // RECTANGULO_H
