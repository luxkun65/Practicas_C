#include<iostream>
using namespace::std;

void serie_1();
void serie_2();
void serie_3();
void serie_4();
void cajero();
void validar();
void cuadrado();

void serie_1(){
    //2, 4, 6, 8, 10, ...
    int cant_terminos, par = 2;
    cout<<"Ingrese la cantidad de terminos: ";
    cin>>cant_terminos;

    int x = 0;
    for(; x < cant_terminos; x++){
        cout<<par<<endl;
        par+=2;
    }
    cout<<endl;
}

void serie_2(){
    //2, 4, 6, 8, 10, ...
    int cant_terminos, par = 2;
    cout<<"Ingrese la cantidad de terminos: ";
    cin>>cant_terminos;

    int x = 0;
    for(; x < cant_terminos; ){
        cout<<par<<endl;
        par+=2;
        x++;
    }
    cout<<endl;
}

void serie_3(){
    //2, 4, 6, 8, 10, ...
    int cant_terminos, par = 2;
    cout<<"Ingrese la cantidad de terminos: ";
    cin>>cant_terminos;

    int x = 0;
    for(;;){
        cout<<par<<endl;
        par+=2;
        x++;
        if(x > cant_terminos-1) break;
    }
    cout<<endl;
}

void serie_4(){
    //2, 4, 6, 8, 10, ...
    int cant_terminos, par = 2;
    cout<<"Ingrese la cantidad de terminos: ";
    cin>>cant_terminos;

    int x = 0;
    while(true){
        cout<<par<<endl;
        par+=2;
        x++;
        if(x > cant_terminos-1) break;
    }
    cout<<endl;
}

void cajero(){
    long valor_articulo;
    int cant_articulos = 0;
    long total = 0;

    while(true){
       cout<<"Ingrese el valor del articulo: [-1 para terminar]";
       cin>>valor_articulo;
       if(valor_articulo == -1) break;
       else{
            cant_articulos++;
            total+=valor_articulo;
       }
    }
    cout<<cant_articulos<<endl;
    cout<<total<<endl;
}

void validar(){
    int valor;//15 - 25
    do{
        cout<<"Ingrese un valor entero [entre 15 y 25]: ";
        cin>>valor;
        if(valor < 15 || valor > 25){
            cout<<"Valor fuera de rango"<<endl<<endl;
        }
    }while(valor < 15 || valor > 25);
}

void cuadrado(){
    for(int fila = 1; fila <= 3; fila++){
        for(int columna = 1; columna <= 3; columna++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    serie_1();
    //serie_2();
    //serie_3();
    //serie_4();
    //cajero();
    //validar();
    //cuadrado();

    return 0;
}
