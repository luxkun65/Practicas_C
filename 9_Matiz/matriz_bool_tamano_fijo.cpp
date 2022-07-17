/*
Ejemplo que declara una matriz de tipo bool (valores logicos) de tamaño fijo.
Esta forma de declarar la matriz se utiliza cuando se conoce cuantos datos se almacenaran
en la matriz.

Este ejemplo crea una matriz de tipo bool de 2 x 3 (2 filas x 3 columnas).
En total la matriz almacena 6 valores logicos (true o false).
Al imprimir la matriz se muestra un:
  1 si el valor almacenado es true
  0 si el valor almacenado es false
*/

#include<iostream>
using namespace std;

bool logicos[2][3];//matriz de tipo bool de 2 x 3 (2 filas x 3 columnas)
int cant_filas = 2;
int cant_columnas = 3;

void leer_matriz(){
    cout<<"Ingreso de datos"<<endl;
    fflush(stdin);//limpiar el bufer de lectura. Es recomendable antes de leer un caracter

    int estado;

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"1 => Activo, 2 => Inactivo\n";
            cout<<"Seleccione un estado:";
            cin>>estado;
            if(estado == 1) logicos[f][c] = true;
            else logicos[f][c] = false;
            cout<<endl;
        }
    }
    cout<<endl;
}

void imprimir_matriz(){
    cout<<"Datos de la matriz"<<endl;
    /*
     Al imprimir la matriz se muestra un:
        1 si el valor almacenado es true
        0 si el valor almacenado es false
    */
    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"logicos["<<f<<"]["<<c<<"] = "<<logicos[f][c]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void menu(){
    int opc;
    do{
        cout<<"1. Leer la matriz"<<endl;
        cout<<"2. Imprimir la matriz"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;

        cout<<endl;

        switch(opc){
            case 1: leer_matriz(); break;
            case 2: imprimir_matriz(); break;
            case 0: break;
            default: cout<<"Opcion incorrecta"<<endl<<endl;
        }
    }while(opc != 0);
}

int main(){
    menu();
    system("pause");
    return 0;
}
