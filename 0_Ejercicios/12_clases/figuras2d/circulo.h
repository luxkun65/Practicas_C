#ifndef CIRCULO_H
#define CIRCULO_H
#include"figuras2d.h"
#include<iostream>
using namespace::std;


class circulo:public figuras2d
{
    public:
        circulo();
        virtual ~circulo();

        void setRadio();
        void setArea();

        double getRadio();


    protected:
    double radio;

    private:
};

#endif // CIRCULO_H
