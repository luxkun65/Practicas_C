#include <iostream>
using namespace std;

#include"Cuadrado.h"
#include"Rectangulo.h"
#include"Paralelogramo.h"
#include"Circulo.h"

int main()
{
    Cuadrado objC;
    Rectangulo objR;
    Paralelogramo objP;
    Circulo objCr;

    cout << "Datos de Cuadrado" << endl;
    objC.setBase();

    cout << "Datos de Rectangulo" << endl;
    objR.setBase();
    objR.setAltura();

    cout << "Datos de Paralelogramo" << endl;
    objP.setBase();
    objP.setAltura();

    cout << "Datos de Circulo" << endl;
    objCr.setRadio();

    Figuras2D *figC = &objC;
    Figuras2D *figR = &objR;
    Figuras2D *figP = &objP;
    Figuras2D *figCr = &objCr;

    figC->calcularArea();
    figR->calcularArea();
    figP->calcularArea();
    figCr->calcularArea();

    cout << "Datos del area" << endl;
    cout<<"Area de Cuadrado = "<<objC.getArea()<<endl;
    cout<<"Area de Rectangulo = "<<objR.getArea()<<endl;
    cout<<"Area de Paralelogramo = "<<objP.getArea()<<endl;
    cout<<"Area de Circulo = "<<objCr.getArea()<<endl;

    return 0;
}
