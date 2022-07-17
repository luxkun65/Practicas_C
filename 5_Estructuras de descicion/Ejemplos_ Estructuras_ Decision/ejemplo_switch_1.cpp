#include<iostream>
using namespace::std;

int opcion, resultado;

void leer_opcion();
void calcular();

void leer_opcion(){
    cout<<"Ingrese la opcion: (1, 2, 3, 4) ";
    cin>>opcion;
}

void calcular(){
    switch(opcion){
        case 1: resultado = opcion * 10; break;
        case 2: resultado = opcion * 20; break;
        case 3: resultado = opcion * 30; break;
        case 4: resultado = opcion * 40; break;
        default: resultado = opcion * 100;
    }
    cout<<resultado<<endl;
}

int main(){
    leer_opcion();
    calcular();
    return 0;
}
