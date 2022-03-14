#include <iostream>
using namespace::std;
#include <cmath>

//declarar los prototipos de funciones

void funcion1 ();
void funcion2 ();
void funcion3 ();
void menu();

void funcion1 (){
    double numero, raiz;
    cout<<"ingrese un numero ";
    cin>>numero;
    raiz = sqrt (numero);
    cout<<"la raiz cuadrada es igual a: "<<raiz<<endl;

}
void funcion2 () {
double numero, valor_abs;
cout<<"ingrese un numero";
cin>>numero;
valor_abs = abs(numero);
cout<<"el valor absoluto de su numero es: "<<valor_abs<<endl;


}
void funcion3 (){

    cout <<"en construccion ... "<<endl;

}
void menu () {
int opc;
cout<<"menu de opciones"<<endl;
cout<<"1. Raiz cuadrada"<<endl;
cout<<"2. Valor absoluto"<<endl;
cout<<"3. En construccion"<<endl;
cout<<"0. Salir"<<endl;
cout<<"seleccione una opcion: ";
cin>>opc;
switch (opc){
case 1: funcion1 (); break;
case 2: funcion2 (); break;
case 3: funcion3 (); break;
case 0: cout<<"suerte pirobo"<<endl; break;
default: cout<<"opcion incorrecta"<<endl;
  }
}

int main () {
    menu ();
    return 0;
}
