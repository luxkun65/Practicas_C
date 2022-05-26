#ifndef DMT_H
#define DMT_H
#include "DTC.h"
#include<iostream>

using namespace::std;


class DMT: public DTC
{
    public:
        DMT();
        virtual ~DMT();

        int trabajoGrado;

        void setTrabajoGrado();
        void setSalarioPgar();

        int getTrabajoGrado();

    protected:

    private:
};

#endif // DMT_H
