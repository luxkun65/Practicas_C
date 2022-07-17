/*
Ejemplo que declara una matriz de tipo double (reales) de tamaño fijo.
Esta forma de declarar la matriz se utiliza cuando se conoce cuantos datos se almacenaran
en la matriz.

Este ejemplo crea una matriz de tipo double de 2 x 3 (2 filas x 3 columnas).
En total la matriz almacena 6 valores.
*/

#include<iostream>
using namespace std;
#include<stdlib.h>//srand() y rand()
#include<time.h>//time(NULL)

double reales[2][3];//matriz de tipo double de 2 x 3 (2 filas x 3 columnas)
int cant_filas = 2;
int cant_columnas = 3;

void leer_matriz(){
    cout<<"Ingreso de datos"<<endl;

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"matriz["<<f<<"]["<<c<<"] = ";
            cin>>reales[f][c];
        }
    }
    cout<<endl;
}

//Metodo para llenar (asignar) la matriz con numeros aletorios entre 1 y 100
void llenar_matriz(){
    srand(time(NULL));//generar una nueva semilla de numeros aleatorios
    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            reales[f][c] = 1 + rand() % 100;//calcular un numero aletorio entre 1 y 100
        }
    }
}

void imprimir_matriz(){
    cout<<"Datos de la matriz"<<endl;

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"reales["<<f<<"]["<<c<<"] = "<<reales[f][c]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void menu(){
    int opc;
    do{
        cout<<"1. Leer la matriz"<<endl;
        cout<<"2. Llenar la matriz"<<endl;
        cout<<"3. Imprimir la matriz"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;

        cout<<endl;

        switch(opc){
            case 1: leer_matriz(); break;
            case 2: llenar_matriz(); break;
            case 3: imprimir_matriz(); break;
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
