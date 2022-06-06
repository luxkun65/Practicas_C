#ifndef FIGURAS2D_H
#define FIGURAS2D_H
#include<iostream>
using namespace::std;


class figuras2d
{
    public:
        figuras2d();
        virtual ~figuras2d();

        virtual void setArea();

        double getArea();


    protected:

    double area;

    private:
};

#endif // FIGURAS2D_H
