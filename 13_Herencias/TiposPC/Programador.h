#ifndef PROGRAMADOR_H
#define PROGRAMADOR_H
#include"Oficina.h"

class Programador: public Oficina
{
    public:
        Programador();
        virtual ~Programador();
        void setCapacidadSDD();
        void setValor();
        int getCapacidadSDD();
        string getInfo();

    protected:

    private:
        int capacidadSDD;
};

#endif // PROGRAMADOR_H
