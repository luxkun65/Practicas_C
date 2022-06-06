#include <iostream>
#include"circulo.h"
#include"cuadrado.h"
#include"rectangulo.h"
#include"paralelogramo.h"

using namespace std;

int main()
{
    circulo cir;
    cuadrado cua;
    rectangulo rec;
    paralelogramo para;

    cout<<"Radio de circulo"<<endl;
    cir.setRadio();

    cout<<"Base de cuadrado"<<endl;
    cua.setBase();

    cout<<"Base y altura de rectangulo"<<endl;
    rec.setBase();
    rec.setAltura();

    cout<<"Base y altura de paralelogramo"<<endl;
    para.setBase();
    para.setAltura();


    figuras2d *figCir = &cir;
    figuras2d *figCua = &cua;
    figuras2d *figRec = &rec;
    figuras2d *figPara = &para;

    figCir->setArea();
    figCua->setArea();
    figRec->setArea();
    figPara->setArea();

    cout<<"Datos totales"<<endl;
    cout<<"Area circulo: "<<cir.getArea()<<endl;
    cout<<"Area cuadrado: "<<cua.getArea()<<endl;
    cout<<"Area Rectangulo: "<<rec.getArea()<<endl;
    cout<<"Area Paralelogramo: "<<para.getArea()<<endl;




    return 0;
}
