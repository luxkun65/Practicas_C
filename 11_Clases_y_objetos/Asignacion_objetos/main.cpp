#include <iostream>
using namespace std;

#include"Punto.h"

int main()
{
    Punto p1;
    p1.setCoord(10, 20);
    p1.mostrarCoord();

    Punto &p2 = p1;//asignacion por referencia, es decir los cambios del cualquier objeto se ven reflejados en el otro objeto
    p2.mostrarCoord();
    p1.setCoord(-10, -20);
    p1.mostrarCoord();
    p2.mostrarCoord();
    p2.setCoord(10, 20);
    p1.mostrarCoord();
    p2.mostrarCoord();

    Punto *p3 = &p1;
    p1.mostrarCoord();
    p2.mostrarCoord();
    p3->mostrarCoord();
    p3->setCoord(9, 19);
    p1.mostrarCoord();
    p2.mostrarCoord();
    p3->mostrarCoord();

    Punto p4(p1);
    p1.mostrarCoord();
    p4.mostrarCoord();
    p1.setCoord(-9, -19);
    p1.mostrarCoord();
    p4.mostrarCoord();
    p4.setCoord(7, 17);
    p1.mostrarCoord();
    p4.mostrarCoord();





    return 0;
}
