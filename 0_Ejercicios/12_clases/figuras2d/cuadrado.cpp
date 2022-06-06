#include "cuadrado.h"
#include"figuras2d.h"
#include<math.h>
#include<cmath>
#include<iostream>
using namespace::std;

cuadrado::cuadrado()
{
    base = 0;//ctor
}

cuadrado::~cuadrado()
{
    //dtor
}


void cuadrado::setBase(){
cout<<"ingrese la base"<<endl;
cin>>base;
}


void cuadrado::setArea(){
cout<<"el area del cuadrado es:"<<endl;
area = base * base;

}
