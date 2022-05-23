#ifndef DHC_H
#define DHC_H
#include"docente.h"
#include<iostream>
using namespace::std;

class DHC:public docente
{
    public:
        DHC();
        virtual ~DHC();

        int cantHT;
        string nivelEST;


        void setCantHT();
        void setNivelEST();
        void setSalarioPgar();

        int getCantHT();
        string getNivelEST();




    protected:

    private:
};

#endif // DHC_H
