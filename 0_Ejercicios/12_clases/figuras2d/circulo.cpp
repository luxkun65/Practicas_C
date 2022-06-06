#include "circulo.h"
#include"figuras2d.h"
#include<math.h>
#include<cmath>
#include<iostream>
using namespace::std;

circulo::circulo()
{
  radio = 0;  //ctor
}

circulo::~circulo()
{
    //dtor
}


void circulo::setArea(){
cout<<"el area del circulo es: "<<endl;
area = 3.1416 * pow(radio, 2);

}



void circulo::setRadio(){
cout<<"ingrese el radio: ";
cin>>radio;
}
