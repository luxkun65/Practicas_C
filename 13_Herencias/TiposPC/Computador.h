#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include"CPU.h"

class Computador
{
    public:
        CPU objCPU;
        Computador();
        virtual ~Computador();
        void setMarca();
        void setReferencia();
        void setCPU();
        string getMarca();
        string getReferencia();
        virtual void setValor() = 0;//Metodo virtual para el polimorfismo. Debe ser implementado por los clases derivadas
        virtual string getInfo();//Metodo virtual para el polimorfismo. Debe ser implementado por los clases derivadas
        long getValor();

    protected:
        long valor;

    private:
        string marca, referencia;
};

#endif // COMPUTADOR_H
