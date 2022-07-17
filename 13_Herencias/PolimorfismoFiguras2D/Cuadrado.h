#ifndef CUADRADO_H
#define CUADRADO_H
#include"Figuras2D.h"

class Cuadrado: public Figuras2D
{
    public:
        Cuadrado();
        virtual ~Cuadrado();
        void setBase();
        void calcularArea();

    protected:
        double base;

    private:
};

#endif // CUADRADO_H
