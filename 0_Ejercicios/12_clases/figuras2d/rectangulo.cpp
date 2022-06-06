#include "rectangulo.h"
#include"cuadrado.h"
#include<math.h>
#include<cmath>
#include<iostream>
using namespace::std;

rectangulo::rectangulo()
{
   altura = 0; //ctor
}

rectangulo::~rectangulo()
{
    //dtor
}



void rectangulo::setAltura(){
cout<<"ingrese la altura"<<endl;
cin>>altura;
}

void rectangulo::setArea(){
cout<<"el area del rectangulo es"<<endl;
area= base * altura;
}
