/*
Ejemplo que declara una matriz de tipo string (cadenas) de tamaño variable.
Esta forma de declarar la matriz se utiliza cuando no se conoce cuantos datos se almacenaran
en la matriz.

El usuario ingresa la cantidad de filas y columnas.
*/

#include<iostream>
using namespace std;

string **cadenas;
int cant_filas;
int cant_columnas;

void leer_tamano(){
    cout<<"Ingrese la cantidad de filas: ";
    cin>>cant_filas;
    cout<<"Ingrese la cantidad de columnas: ";//" "
    cin>>cant_columnas;

    cadenas = new string *[cant_filas];//crear la cantidad filas
    for(int f = 0; f < cant_filas; f++) {
       cadenas[f] = new string[cant_columnas];//crear la cantidad columnas
    }
    cout<<endl;
}

void leer_matriz(){
    cout<<"Ingreso de datos"<<endl;
    fflush(stdin);//limpiar el bufer de lectura. Es recomendable antes de leer un caracter o cadena

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"cadenas["<<f<<"]["<<c<<"] = ";
            getline(cin, cadenas[f][c]);
        }
    }
    cout<<endl;
}

void imprimir_matriz(){
    cout<<"Datos de la matriz"<<endl;

    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            cout<<"cadenas["<<f<<"]["<<c<<"] = "<<cadenas[f][c]<<"   ";
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
        cout<<"3. Imprimir la matriz"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;

        cout<<endl;

        switch(opc){
            case 1: leer_tamano(); break;
            case 2: leer_matriz(); break;
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
