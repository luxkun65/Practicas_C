#ifndef CIRCULO_H
#define CIRCULO_H
#include"Figuras2D.h"

class Circulo: public Figuras2D
{
    public:
        Circulo();
        virtual ~Circulo();
        void setRadio();
        void calcularArea();

    protected:
        double radio;

    private:
};

#endif // CIRCULO_H
