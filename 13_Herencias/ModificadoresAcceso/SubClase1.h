#ifndef SUBCLASE1_H
#define SUBCLASE1_H
#include"SuperClase.h"


class SubClase1: public SuperClase
{
    public:
        int d;
        SubClase1();
        virtual ~SubClase1();
        void setD(int);
        void setE(int);
        void setF(int);
        int getD();
        int getE();
        int getF();

    protected:
        int e;

    private:
        int f;
};

#endif // SUBCLASE1_H
