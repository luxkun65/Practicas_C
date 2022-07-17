#ifndef CPU_H
#define CPU_H

#include<iostream>
using namespace::std;

class CPU
{
    public:
        CPU();
        virtual ~CPU();
        void setMarca();
        void setVelocidad();
        void setCantNucleos();
        string getMarca();
        double getVelocidad();
        int getCantNucleos();
        string getInfoCPU();

    protected:

    private:
        string marca;
        double velocidad;
        int cantNucleos;
};

#endif // CPU_H
