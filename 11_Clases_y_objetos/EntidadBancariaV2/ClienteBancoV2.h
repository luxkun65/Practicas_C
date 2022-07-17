#include<iostream>
using namespace::std;

#ifndef CLIENTEBANCOV2_H
#define CLIENTEBANCOV2_H


class ClienteBancoV2
{
    public:
        long numID, numCuenta;
        string apellido, nombre;

        ClienteBancoV2();
        virtual ~ClienteBancoV2();

        void setNumID();
        void setNumID(long num);
        long getNumID();
        void setNumCuenta();
        void setNumCuenta(long num);
        long getNumCuenta();
        void setApellido();
        void setApellido(string ape);
        string getApellido();
        void setNombre();
        void setNombre(string nom);
        string getNombre();

    protected:

    private:
};

#endif // CLIENTEBANCOV2_H
