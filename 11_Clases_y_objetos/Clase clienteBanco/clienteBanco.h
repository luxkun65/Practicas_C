#ifndef CLIENTEBANCO_H
#define CLIENTEBANCO_H
#include<iostream>

using namespace::std;


class clienteBanco
{
    public:
        //Definicion de atributos
        long numeroID, numeroCuenta;
        string apellido, nombre, tipoCuenta;
        char genero;

        clienteBanco() {

            numeroID = numeroCuenta = 0;
            apellido = nombre = tipoCuenta = "-";
            genero = ' ';

        }
        virtual ~clienteBanco() {}

        //Implementacion de funciones set y get

        void setNumeroID(){
            cout<<"ingrese el Numero de identificacion: ";
            cin>>numeroID;
        }

        long getNumeroID(){

            return numeroID;
        }

////////////////////////////////////////////////////////////////////////
        void setApellido(){
            fflush(stdin);
            cout<<"ingrese el Apellido: ";
            getline(cin,apellido);
        }

        string getApellido(){

            return apellido;
        }

////////////////////////////////////////////////////////////////////////

        void setNombre(){
            fflush(stdin);
            cout<<"ingrese el Nombre: ";
            getline(cin,nombre);
        }

        string getNombre(){

            return nombre;
        }

////////////////////////////////////////////////////////////////////////

                void setNumeroCuenta(){
            cout<<"ingrese el Numero de cuenta: ";
            cin>>numeroCuenta;
        }

                void setNumeroCuenta(int nc){

            numeroCuenta = nc;

        }

        long getNumeroCuenta(){

            return numeroCuenta;
        }

/////////////////////////////////////////////////////////////////////////////

        void setGenero(){
            fflush(stdin);
            cout<<"ingrese el genero (F)Femenino (M)Masculino: ";
            cin>>genero;
        }

        char getGenero(){

            return genero;
        }


///////////////////////////////////////////////////////////////////////////////////

        void setTipoCuenta(){
            fflush(stdin);
            int opc;
            cout<<"ingrese el Tipo de Cuenta: "<<endl;
            cout<<"1. Ahorros"<<endl;
            cout<<"2. Corriente"<<endl;
            cout<<"3. Nequi"<<endl;

            cin>>opc;

            switch(opc){

                case 1: tipoCuenta = "Ahorros"; break;
                case 2: tipoCuenta = "Corriente"; break;
                case 3: tipoCuenta = "Nequi";break;


            }


        }

        string getTipoCuenta(){

            return tipoCuenta;
        }



    protected:

    private:
};

#endif // CLIENTEBANCO_H
