#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include<iostream>
using namespace::std;

class Automovil
{
    public:
        string marca, modelo;
        double cilindraje;
        int cantBocinas;
        bool tipoDireccion;/* false -> electrica,
                            true -> hidraulica */

        Automovil();
        virtual ~Automovil();
        Automovil(string, string);
        Automovil(string, string, int);
        Automovil(string, string, int, bool);
        void setMarca();
        void setModelo();
        string getMarca();
        string getModelo();
        double getCilindraje();
        int getCantBocinas();
        bool getTipoDireccion();

        void setDatos(string, string, double,
                      int, bool);
    protected:
    private:
};

#endif // AUTOMOVIL_H
