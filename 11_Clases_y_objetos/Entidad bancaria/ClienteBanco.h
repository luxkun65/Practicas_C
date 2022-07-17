#ifndef CLIENTEBANCO_H
#define CLIENTEBANCO_H
#include<iostream>
using namespace::std;


class ClienteBanco
{
    public:
        long numID, numCuenta;
        string apellido, nombre;

        ClienteBanco() {
            numID = numCuenta = 0;
            apellido = nombre = "";
        }
        virtual ~ClienteBanco() {}

        //definicion del comportamiento
        void setNumID(){
            cout<<"Ingrese el numero de identificación: ";
            cin>>numID;
        }
        void setNumID(long num){
            numID = num;
        }
        long getNumID(){
            return numID;
        }
        void setNumCuenta(){
            cout<<"Ingrese el numero de cuenta: ";
            cin>>numCuenta;
        }
        void setNumCuenta(long num){
            numCuenta = num;
        }
        long getNumCuenta(){
            return numCuenta;
        }
        void setApellido(){
            fflush(stdin);
            cout<<"Ingrese el apellido: ";
            getline(cin, apellido);
        }
        void setApellido(string ape){
            apellido = ape;
        }
        string getApellido(){
            return apellido;
        }
        void setNombre(){
            fflush(stdin);
            cout<<"Ingrese el nombre: ";
            getline(cin, nombre);
        }
        void setNombre(string nom){
            nombre = nom;
        }
        string getNombre(){
            return nombre;
        }

    protected:

    private:
};

#endif // CLIENTEBANCO_H
