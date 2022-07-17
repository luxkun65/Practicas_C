#ifndef FECHA_H
#define FECHA_H

#include<iostream>
using namespace::std;

class Fecha
{
    public:
        int dia, mes, year;

        Fecha();
        virtual ~Fecha();

        void setFecha(string);
        string getFecha();

    protected:

    private:
};

#endif // FECHA_H
