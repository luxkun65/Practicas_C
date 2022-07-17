#ifndef OFICINA_H
#define OFICINA_H

#include"Computador.h"

class Oficina: public Computador
{
    public:
        Oficina();
        virtual ~Oficina();
        void setRam();
        void setCapacidadDD();
        void setValor();
        int getRam();
        int getCapacidadDD();
        string getInfo();

    protected:

    private:
        int ram, capacidadDD;
};

#endif // OFICINA_H
