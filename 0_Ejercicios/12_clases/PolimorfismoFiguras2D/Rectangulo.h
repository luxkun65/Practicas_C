#ifndef RECTANGULO_H
#define RECTANGULO_H

#include"Cuadrado.h"

class Rectangulo: public Cuadrado
{
    public:
        Rectangulo();
        virtual ~Rectangulo();
        void setAltura();
        void calcularArea();

    protected:
        double altura;

    private:
};

#endif // RECTANGULO_H
