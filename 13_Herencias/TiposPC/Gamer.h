#ifndef GAMER_H
#define GAMER_H

#include"Programador.h"

class Gamer: public Programador
{
    public:
        Gamer();
        virtual ~Gamer();
        void setMemGPU();
        void setValor();
        int getMemGPU();
        string getInfo();

    protected:

    private:
        int memoriaGPU;
};

#endif // GAMER_H
