#include "figuras2d.h"
#include<iostream>
using namespace::std;

figuras2d::figuras2d()
{
  area = 0;  //ctor
}

figuras2d::~figuras2d()
{
    //dtor
}


void figuras2d::setArea(){
area = 0;
}
double figuras2d::getArea(){
return area;
}
