#include<iostream>
#include<cstdlib>//srand(),rand()
#include<ctime>//time()
using namespace::std;

//int valores [10];
int *valores;
int tam;

//declaracion de prototipos de funciones

void imprimir();
void leer_datos();
void sumatoria();
void llenar();
void frecuencia();
void leer_tam();
void inverso();

//implementacion de funciones

void imprimir(){

cout<<"elementos del arreglo valores"<<endl;

for (int i = 0; i < tam; i++){

    cout<<"valores["<<i<<"]"<<valores[i]<<endl;
    }
}

void leer_datos(){

cout<<"ingreso de datos al arreglo"<<endl;

for(int i=0; i<tam; i++){

    cout<<"valores["<<i<<"] = ";
    cin>>valores[i];

    }
}

void sumatoria(){

long suma = 0;

for (int x=0; x<tam; x++){

    suma+=valores[x];//suma=suma+valores[x]

}
cout<<"\nla sumatoria = "<<suma<<endl;

}

void llenar(){

srand(time(NULL));//generar una nueva semilla de numeros aleatorios

for(int i=0; i<tam; i++){

    valores[i]=1 + rand() % 10;

    }
}

void frecuencia(){

int cantidad = 0;
int valor_buscar;

cout<<"ingrese el valor a buscar: ";
cin>>valor_buscar;

for(int i = 0; i<tam; i++){

    if(valores[i] == valor_buscar) cantidad++;

    }

cout<<valor_buscar<<" esta "<<cantidad<<" veces "<<endl;

}

void leer_tam(){

cout<<"ingrese la cantidad de elementos del arreglo:";
cin>>tam;

valores = new int[tam];

}

void inverso(){

cout<<"Inverso del arreglo valores"<<endl;

for(int i= tam-1; i >= 0; i--){

    cout<<"valores["<<i<<"] = "<<valores[i]<<endl;
    }

}


int main(){
//leer_datos();
leer_tam();
llenar();
imprimir();
sumatoria();
frecuencia();
inverso();



return 0;
}
