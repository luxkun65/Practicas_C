#ifndef DTC_H
#define DTC_H

#include<iostream>
using namespace::std;

#include "Docente.h"

class DTC: public Docente
{
    public:
        int cantHorasInv;

        DTC();
        virtual ~DTC();
        void setHorasInv();
        int getHorasInv();
        void setSalario();

    protected:

    private:
};

#endif // DTC_H
