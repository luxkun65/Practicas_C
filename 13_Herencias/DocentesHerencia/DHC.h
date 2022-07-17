#ifndef DHC_H
#define DHC_H

#include<iostream>
using namespace::std;

#include "Docente.h"

class DHC: public Docente
{
    public:
        int cantHorasTrab;
        string nivelEstudios;

        DHC();
        virtual ~DHC();
        void setHorasTrab();
        int getHorasTrab();
        void setNivelEstudios();
        string getNivelEstudios();
        void setSalario();

    protected:

    private:
};

#endif // DHC_H
