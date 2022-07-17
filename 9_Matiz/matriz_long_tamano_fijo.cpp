/*
Ejemplo que declara una matriz de tipo long (enteros) de tamaño fijo.
Esta forma de declarar la matriz se utiliza cuando se conoce cuantos datos se almacenaran
en la matriz.

Este ejemplo crea una matriz de tipo long de 3 x 2 (3 filas x 2 columnas).
En total la matriz almacena 6 valores.
*/

#include<iostream>
using namespace std;
#include<stdlib.h>//srand() y rand()
#include<time.h>//time(NULL)

long largos[3][2];//matriz de tipo long de 3 x 2 (3 filas x 2 columnas)
int cant_filas = 3;
int cant_columnas = 2;

void leer_matriz(){
    cout<<"Ingreso de datos"<<endl;

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"largos["<<f<<"]["<<c<<"] = ";
            cin>>largos[f][c];
        }
    }
    cout<<endl;
}

//Metodo para llenar (asignar) la matriz con numeros aletorios entre 1 y 100
void llenar_matriz(){
    srand(time(NULL));
    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            largos[f][c] = 1 + rand() % 100;//calcular un numero aletorio entre 1 y 100
        }
    }
}

void imprimir_matriz(){
    cout<<"Datos de la matriz"<<endl;

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"largos["<<f<<"]["<<c<<"] = "<<largos[f][c]<<"   ";
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
