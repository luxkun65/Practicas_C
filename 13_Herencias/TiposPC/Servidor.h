#ifndef SERVIDOR_H
#define SERVIDOR_H

#include"Programador.h"

class Servidor: public Programador
{
    public:
        Servidor();
        virtual ~Servidor();
        void setCantCPU();
        void setValor();
        int getCantCPU();
        string getInfo();

    protected:

    private:
        int cantCPU;
};

#endif // SERVIDOR_H
