#ifndef SUBCLASE2_H
#define SUBCLASE2_H
#include"SubClase1.h"


class SubClase2: public SubClase1
{
    public:
        SubClase2();
        virtual ~SubClase2();
        void setSuma();
        int getSuma();

    protected:

    private:
        int suma;
};

#endif // SUBCLASE2_H
