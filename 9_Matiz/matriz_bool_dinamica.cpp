/*
Ejemplo que declara una matriz de tipo bool (valores logicos) de tamaño variable.
Esta forma de declarar la matriz se utiliza cuando no se conoce cuantos datos se almacenaran
en la matriz.

El usuario ingresa la cantidad de filas y columnas.
*/

#include<iostream>
using namespace std;

bool **logicos;
int cant_filas;
int cant_columnas;

void limpiar(){
    for(int f = 0; f < cant_filas; f++){
        for(int c = 0; c < cant_columnas; c++){
            logicos[f][c] = false;//inicializar cada posición de la matriz con false
        }
    }
}

void leer_tamano(){
    cout<<"Ingrese la cantidad de filas: ";
    cin>>cant_filas;
    cout<<"Ingrese la cantidad de columnas: ";
    cin>>cant_columnas;

    logicos = new bool *[cant_filas];//crear la cantidad filas
    for(int f = 0; f < cant_filas; f++) {
       logicos[f] = new bool[cant_columnas];//crear la cantidad columnas
    }
    limpiar();/*cuando se declara una matriz de forma dinamica es necesario inicializar cada posición
    de la matriz en un valor por defecto*/
    cout<<endl;
}

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
