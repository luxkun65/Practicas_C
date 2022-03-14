#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace::std;

void validar();
void menu();
void factorial();
void histograma();
void serie_decremento();
void cuadrado();

void validar(){

int numero;

do{

    cout<<"ingrese un numero entre 18 y 25: ";
    cin>>numero;

    if(numero <18 || numero >25){

        cout<<"\n numero fuera de rango; ingreselo nuevamente\n"<<endl;
        }

}while(numero <18 || numero >25);{

        cout<<"\n numero correcto\n"<<endl;

}


}


void factorial(){

long numero, fact = 1;

cout<<"ingrese el numero: ";
cin>>numero;
if(numero ==0 || numero == 1){

    cout<<"el factorial de "<<numero<<" es 1"<<endl;

}else{
    for(int i =1; i <= numero; i++){

        fact*=i;//fact = fact *i;

    }

cout<<"el factorial, de "<<numero<<" es "<<fact<<endl;

}

}

void histograma(){
int numero;
do{

    cout<<"ingrese un numero positivo mayor que 0: ";
    cin>>numero;

    if(numero <=0){
        cout<<"numero incorrecto, vuelva a ingrasar un valor."<<endl;
    }

}while(numero <=0);

int a = 0;

while(a < numero){
    cout<<"*";
    a++;
}
cout<<endl<<endl;
}

void serie_decremento(){
int valor_mayor;

cout<<"ingrese el valor mayor ";
cin>>valor_mayor;

for(int n = valor_mayor; n > 0; n--){

    cout<<endl<<n;
}

cout<<endl<<endl;

}

void cuadrado(){

int lado;

cout<<"ingrese el valor del lado: ";
cin>>lado;

for(int fila = 1; fila <= lado; fila++){

    for(int col =1 ; col<= lado; col++){

        cout<<"*";
        Sleep(500);
        }

    cout<<endl;
    }


}


void menu(){

int opc;

do{

    cout<<"1. validar numero"<<endl;
    cout<<"2. factorial"<<endl;
    cout<<"3. histograma"<<endl;
    cout<<"4. serie decremento"<<endl;
    cout<<"5. cuadrado"<<endl;
    cout<<"0. salir de la aplicacion"<<endl;
    cout<<"seleccione una opcion"<<endl;
    cin>>opc;

    switch(opc){

        case 1: validar(); break;
        case 2: factorial();break;
        case 3: histograma();break;
        case 4: serie_decremento();break;
        case 5: cuadrado();break;
        case 0: cout<<"bye"<<endl;break;
        default: cout<<"\n opcion incorrecta\n\n";

    }

}while(opc !=0);{



}

}



int main (){

menu();


}
