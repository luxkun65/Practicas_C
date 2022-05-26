#ifndef MONITOR_H
#define MONITOR_H
#include"docente.h"
#include<iostream>
using namespace::std;


class MONITOR:public docente
{
    public:
        MONITOR();
        virtual ~MONITOR();

        int horasTrab;

        void setHorasTrab();
        void setSalarioPgar();

        int getHorasTrab();



    protected:

    private:
};

#endif // MONITOR_H
