#ifndef CUADRADO_H
#define CUADRADO_H
#include"figuras2d.h"


class cuadrado:public figuras2d
{
    public:
        cuadrado();
        virtual ~cuadrado();

        void setBase();
        void setArea();

        double getBase();


    protected:
    double base;

    private:
};

#endif // CUADRADO_H
