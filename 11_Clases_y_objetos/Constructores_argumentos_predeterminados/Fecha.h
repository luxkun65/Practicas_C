#ifndef FECHA_H
#define FECHA_H
#include<iostream>
using namespace::std;

class Fecha
{
    public:
        int dia, mes, year;
        string periodo;

        Fecha(int = 0, int = 0, int = 0, string = "AM");
        virtual ~Fecha();

        string getFecha();

    protected:

    private:
};

#endif // FECHA_H
