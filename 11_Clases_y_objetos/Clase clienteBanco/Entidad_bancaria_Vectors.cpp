#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace::std;

#include "clienteBanco.h"

vector <clienteBanco> vecClientes;


//Definicion de metodos

void leerDatosCliente(){
system("CLS");
    cout<<"Datos del nuevo cliente."<<endl;
    cout<<"------------------------"<<endl;

    clienteBanco obj;
    obj.setNumeroID();
    obj.setApellido();
    obj.setNombre();
    obj.setNumeroCuenta(1000000+obj.getNumeroID());
    obj.setGenero();
    obj.setTipoCuenta();

    vecClientes.push_back(obj);


}

void listadoGeneral(){
    system("CLS");
cout<<"Listado general de clientes"<<endl;


    if(vecClientes.size() > 0){
      clienteBanco obj;

      for(int i=0;i<vecClientes.size();i++){

        cout<<"///////////////////////////"<<endl;
        obj = vecClientes.at(i);
        cout<<"Datos del cliente #"<<(i+1)<<endl;
        cout<<"Numero ID: "<<obj.getNumeroID()<<endl;
        cout<<"Nombre: "<<obj.getApellido()<<" "<<obj.getNombre()<<endl;
        cout<<"Genero: "<<obj.getGenero()<<endl;
        cout<<"Tipo de cuenta: "<<obj.getTipoCuenta()<<endl;
        cout<<"Numero ID: "<<obj.getNumeroCuenta()<<endl;
        cout<<endl;
      }
    }
    else{

     cout<<"Error #040304973793783 de tontito; ingrese valores pos home >:/"<<endl;
}

}

//////////////////////////////////////////////////////////////////////////////////////////////

void Consultat_X_ID(){
system("CLS");
    if(vecClientes.size() > 0){
      clienteBanco obj;
      long numeroBuscar;
        cout<<"Ingrese el numero ID a consultar"<<endl;
        cin>>numeroBuscar;
        bool existe = false;


      for(int i=0;i<vecClientes.size();i++){
        obj = vecClientes.at(i);

        if(obj.getNumeroID()==numeroBuscar){

        existe = true;

        cout<<"Datos del cliente #"<<(i+1)<<endl;
        cout<<"Numero ID: "<<obj.getNumeroID()<<endl;
        cout<<"Nombre: "<<obj.getApellido()<<" "<<obj.getNombre()<<endl;
        cout<<"Numero ID: "<<obj.getNumeroCuenta()<<endl;
        cout<<endl;

        }

      }

      if(!existe){

        cout<<"Cliente con numeno ID: "<<numeroBuscar<<" no existe error: 404"<<endl;


      }

    }
    else{

     cout<<"Error #040304973793783 de tontito; ingrese valores pos home >:/"<<endl;
}

}


//////////////////////////////////////////////////////////////////////////////////////////////////

void listadoXGenero(){
system("CLS");
    if(vecClientes.size() > 0){
      clienteBanco obj;
      char gender;
        cout<<"Ingrese el genero (F)(M)"<<endl;
        do{
           cin>>gender;
        }while((gender !='F')||(gender !='M'));



      for(int i=0;i<vecClientes.size();i++){
        obj = vecClientes.at(i);

        if(obj.getGenero()==gender){



       cout<<"Datos del cliente #"<<(i+1)<<endl;
        cout<<"Numero ID: "<<obj.getNumeroID()<<endl;
        cout<<"Nombre: "<<obj.getApellido()<<" "<<obj.getNombre()<<endl;
        cout<<"Genero: "<<obj.getGenero()<<endl;
        cout<<"Tipo de cuenta: "<<obj.getTipoCuenta()<<endl;
        cout<<"Numero ID: "<<obj.getNumeroCuenta()<<endl;
        cout<<endl;

        }
        else{

            cout<<endl;
        }

      }

    }


    else{

     cout<<"Error #040304973793783 de tontito; ingrese valores pos home >:/"<<endl;
}



}

/////////////////////////////////////////////////////////////////////////////////////////////////

void listadoXTipoCuenta(){
system("CLS");
    if(vecClientes.size() > 0){
      clienteBanco obj;
      int opc;
      string cuenta;

        cout<<"El tipo de cuenta a buscar."<<endl;

            cout<<"1. Ahorros"<<endl;
            cout<<"2. Corriente"<<endl;
            cout<<"3. Nequi"<<endl;

            cin>>opc;

            switch(opc){

                case 1: cuenta = "Ahorros";break;
                case 2: cuenta = "Corriente";break;
                case 3: cuenta = "Nequi";break;


            }

      for(int i=0;i<vecClientes.size();i++){
        obj = vecClientes.at(i);

        if(obj.tipoCuenta()==cuenta){



       cout<<"Datos del cliente #"<<(i+1)<<endl;
        cout<<"Numero ID: "<<obj.getNumeroID()<<endl;
        cout<<"Nombre: "<<obj.getApellido()<<" "<<obj.getNombre()<<endl;
        cout<<"Genero: "<<obj.getGenero()<<endl;
        cout<<"Tipo de cuenta: "<<obj.getTipoCuenta()<<endl;
        cout<<"Numero ID: "<<obj.getNumeroCuenta()<<endl;
        cout<<endl;

        }
        else{

            cout<<endl;
        }

      }

    }


    else{

     cout<<"Error #040304973793783 de tontito; ingrese valores pos home >:/"<<endl;
}



}

void menu(){
int opc;
do{
    cout<<"1.Crear cliente"<<endl;
    cout<<"2.Listado general"<<endl;
    cout<<"3.Consultar cliente por ID"<<endl;
    cout<<"4.Listado por genero"<<endl;
    cout<<"0.Salir"<<endl;
    cout<<"Seleccione una opcion"<<endl;

    cin>>opc;

    switch(opc){
    case 1: leerDatosCliente();break;
    case 2: listadoGeneral();break;
    case 3: Consultat_X_ID();break;
    case 4: listadoXGenero();break;
    case 0: break;
    default: cout<<"opcion incorrecta"<<endl<<endl;


    }
    system("pause");
    system("CLS");

}while(opc != 0);

}


int main(){

menu();
return 0;
}
