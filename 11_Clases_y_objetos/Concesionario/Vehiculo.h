#ifndef VEHICULO_H
#define VEHICULO_H

#include<iostream>
using namespace::std;

#include"Fecha.h"

class Vehiculo
{
    public:
        string marca, modelo;
        Fecha fechaImporte;

        Vehiculo();
        virtual ~Vehiculo();

        void setMarca();
        void setModelo();
        void setFechaImporte();
        string getMarca();
        string getModelo();
        string getFechaImporte();

    protected:

    private:
};

#endif // VEHICULO_H
