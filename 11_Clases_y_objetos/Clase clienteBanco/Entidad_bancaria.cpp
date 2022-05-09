#include<iostream>
#include "clienteBanco.h"
#include<stdlib.h>



using namespace::std;

clienteBanco arreglo[3];

void leerDatosCliente(){

for(int i=0; i<3;i++){
    cout<<"Datos del cliente #"<<(i+1)<<endl;
    arreglo[i].setNumeroID();
    arreglo[i].setApellido();
    arreglo[i].setNombre();
    //arreglo[i].setNumeroCuenta();
    arreglo[i].setNumeroCuenta(10000+arreglo[i].getNumeroID());
    cout<<endl;
}

}

void ImprimirDatosCliente(){

    system("CLS");
cout<<"listado de los clientes"<<endl;


for(int i=0; i<3;i++){
    cout<<"Datos del cliente #"<<(i+1)<<endl;
    cout<<"Numero ID: "<<arreglo[i].getNumeroID()<<endl;
    cout<<"Nombre: "<<arreglo[i].getApellido()<<" "<<arreglo[i].getNombre()<<endl;
    cout<<"Numero ID: "<<arreglo[i].getNumeroCuenta()<<endl;
    cout<<endl;
}

}


int main(){


leerDatosCliente();
ImprimirDatosCliente();




    /*clienteBanco obj1;

    obj1.setNumeroID();
    obj1.setApellido();
    obj1.setNombre();
    obj1.setNumeroCuenta();

    cout<<obj1.getNumeroID()<<endl;
    cout<<obj1.getApellido()<<endl;
    cout<<obj1.getNombre()<<endl;
    cout<<obj1.getNumeroCuenta()<<endl;


    clienteBanco obj2;

    obj2.setNumeroID();
    obj2.setApellido();
    obj2.setNombre();
    obj2.setNumeroCuenta(10000+obj2.getNumeroID());

    cout<<obj2.getNumeroID()<<endl;
    cout<<obj2.getApellido()<<endl;
    cout<<obj2.getNombre()<<endl;
    cout<<obj2.getNumeroCuenta()<<endl;*/

return 0;
}
