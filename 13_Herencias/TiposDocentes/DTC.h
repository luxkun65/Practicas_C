#ifndef DTC_H
#define DTC_H
#include"docente.h"


class DTC: public docente
{
    public:
        DTC();
        virtual ~DTC();

        int cantHorasInv;

        void setHorasInv();
        int getHorasInv();
        void setSalarioPgar();

    protected:

    private:
};

#endif // DTC_H
