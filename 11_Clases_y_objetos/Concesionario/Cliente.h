#ifndef CLIENTE_H
#define CLIENTE_H

#include<iostream>
using namespace::std;

#include"Fecha.h"

class Cliente
{
    public:
        long numID;
        string apellido, nombre;
        Fecha fechaNac;

        Cliente();
        virtual ~Cliente();

        void setNumID();
        void setApellido();
        void setNombre();
        void setFechaNac();
        long getNumID();
        string getApellido();
        string getNombre();
        string getFechaNac();

    protected:

    private:
};

#endif // CLIENTE_H
