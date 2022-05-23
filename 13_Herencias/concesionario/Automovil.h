#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include<iostream>
using namespace::std;

class Automovil
{
    public:
        Automovil();
        virtual ~Automovil();

        string marca, modelo;
        double cilindraje;
        int cantBocinas;
        bool tipoDir;

        Automovil(string,string);//basic
        Automovil(string,string, int);//intermedio
        Automovil(string,string, int, bool);//full

        void setMarca();
        void setModelo();
        void setCilindraje();
        void setCantBocinas();
        void setTipoDir();

        string getMarca();
        string getModelo();
        int getCantBocinas();
        double getCilindraje();
        bool getTipoDir();

        void setDatos(string, string, int, double, bool);

    protected:

    private:
};

#endif // AUTOMOVIL_H
