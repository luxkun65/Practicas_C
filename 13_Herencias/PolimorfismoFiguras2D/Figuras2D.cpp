#include "Figuras2D.h"

Figuras2D::Figuras2D()
{
    area = 0;
}

Figuras2D::~Figuras2D()
{
    //dtor
}

void Figuras2D::calcularArea(){
    area = 0;
}

double Figuras2D::getArea(){
    return area;
}
