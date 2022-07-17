#include<iostream>
using namespace::std;
#include"ClienteBancoV2.h"

ClienteBancoV2 objeto1, objeto2, objeto3;

int main(){
    cout<<"Datos del objeto 1"<<endl;
    objeto1.setNumID();
    objeto1.setApellido();
    objeto1.setNombre();
    objeto1.setNumCuenta();

    cout<<"Datos del objeto 2"<<endl;
    objeto2.setNumID(20);
    objeto2.setApellido("ROA");
    objeto2.setNombre("ANA");
    objeto2.setNumCuenta(100020);

    cout<<"Datos del objeto 3"<<endl;
    objeto3.setNumID();
    objeto3.setApellido();
    objeto3.setNombre();
    objeto3.setNumCuenta(100030);

    cout<<"Datos del objeto 1"<<endl;
    cout<<objeto1.getNumID()<<" "<<objeto1.getApellido()<<", ";
    cout<<objeto1.getNombre()<<" "<<objeto1.getNumCuenta()<<endl;

    cout<<"Datos del objeto 2"<<endl;
    cout<<objeto2.getNumID()<<" "<<objeto2.getApellido()<<", ";
    cout<<objeto2.getNombre()<<" "<<objeto2.getNumCuenta()<<endl;

    cout<<"Datos del objeto 3"<<endl;
    cout<<objeto3.getNumID()<<" "<<objeto3.getApellido()<<", ";
    cout<<objeto3.getNombre()<<" "<<objeto3.getNumCuenta()<<endl;

}
