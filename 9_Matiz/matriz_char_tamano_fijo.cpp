/*
Ejemplo que declara una matriz de tipo char (caracteres) de tamaño fijo.
Esta forma de declarar la matriz se utiliza cuando se conoce cuantos datos se almacenaran
en la matriz.

Este ejemplo crea una matriz de tipo char de 2 x 2 (2 filas x 2 columnas).
En total la matriz almacena 4 caracteres.
*/

#include<iostream>
using namespace std;
#include<conio.h>//usar el metodo getche() para leer un caracter desde el teclado

char letras[2][2];//matriz de tipo int de 2 x 2 (2 filas x 2 columnas)
int cant_filas = 2;
int cant_columnas = 2;

void leer_matriz(){
    cout<<"Ingreso de datos (Pulse solo un caracter sin ENTER)"<<endl;
    fflush(stdin);//limpiar el bufer de lectura. Es recomendable antes de leer un caracter

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"letras["<<f<<"]["<<c<<"] = ";
            letras[f][c] = getche();//leer un caracter desde el teclado
            cout<<endl;
        }
    }
    cout<<endl;
}

void imprimir_matriz(){
    cout<<"Datos de la matriz"<<endl;

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"letras["<<f<<"]["<<c<<"] = "<<letras[f][c]<<"   ";
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
