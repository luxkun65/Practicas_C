#include<iostream>
using namespace::std;

#include "ClienteBancoV2.h"

ClienteBancoV2::ClienteBancoV2()
{
    numID = numCuenta = 0;
    apellido = nombre = "";
}

ClienteBancoV2::~ClienteBancoV2()
{
    //dtor
}

//definicion del comportamiento
void ClienteBancoV2::setNumID()
{
    cout<<"Ingrese el numero de identificación: ";
    cin>>numID;
}
void ClienteBancoV2::setNumID(long num)
{
    numID = num;
}
long ClienteBancoV2::getNumID()
{
    return numID;
}
void ClienteBancoV2::setNumCuenta()
{
    cout<<"Ingrese el numero de cuenta: ";
    cin>>numCuenta;
}
void ClienteBancoV2::setNumCuenta(long num)
{
    numCuenta = num;
}
long ClienteBancoV2::getNumCuenta()
{
    return numCuenta;
}
void ClienteBancoV2::setApellido()
{
    fflush(stdin);
    cout<<"Ingrese el apellido: ";
    getline(cin, apellido);
}
void ClienteBancoV2::setApellido(string ape)
{
    apellido = ape;
}
string ClienteBancoV2::getApellido()
{
    return apellido;
}
void ClienteBancoV2::setNombre()
{
    fflush(stdin);
    cout<<"Ingrese el nombre: ";
    getline(cin, nombre);
}
void ClienteBancoV2::setNombre(string nom)
{
    nombre = nom;
}
string ClienteBancoV2::getNombre()
{
    return nombre;
}
