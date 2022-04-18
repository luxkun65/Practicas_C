/*
Ejemplo que declara una matriz de tipo double (reales) de tamaño variable.
Esta forma de declarar la matriz se utiliza cuando no se conoce cuantos datos se almacenaran
en la matriz.

El usuario ingresa la cantidad de filas y columnas.
*/

#include<iostream>
using namespace std;
#include<stdlib.h>//srand() y rand()
#include<time.h>//time(NULL)

double **reales;
int cant_filas;
int cant_columnas;

void limpiar(){
    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            reales[f][c] = 0.0;//inicializar cada posición de la matriz en cero
        }
    }
}

void leer_tamano(){
    cout<<"Ingrese la cantidad de filas: ";
    cin>>cant_filas;
    cout<<"Ingrese la cantidad de columnas: ";
    cin>>cant_columnas;

    reales = new double *[cant_filas];//crear la cantidad filas
    for(int f = 0; f < cant_filas; f++) {
       reales[f] = new double[cant_columnas];//crear la cantidad columnas
    }
    limpiar();/*cuando se declara una matriz de forma dinamica es necesario inicializar cada posición
    de la matriz en un valor por defecto*/
    cout<<endl;
}

void leer_matriz(){
    cout<<"Ingreso de datos"<<endl;

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"reales["<<f<<"]["<<c<<"] = ";
            cin>>reales[f][c];
        }
    }
    cout<<endl;
}

//Metodo para llenar (asignar) la matriz con numeros aletorios entre 1 y 100
void llenar_matriz(){
    srand(time(NULL));
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
        cout<<"1. Leer el tamaño de la matriz"<<endl;
        cout<<"2. Leer la matriz"<<endl;
        cout<<"3. Llenar la matriz"<<endl;
        cout<<"4. Imprimir la matriz"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;

        cout<<endl;

        switch(opc){
            case 1: leer_tamano(); break;
            case 2: leer_matriz(); break;
            case 3: llenar_matriz(); break;
            case 4: imprimir_matriz(); break;
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
