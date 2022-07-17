#include<iostream>
using namespace::std;

int tam;

//Definición de los prototipos de funciones
void proceso();
void leerTam();
void leerArreglo(int*);
void imprimir(int*);
long frecuencia(int*, int);

void proceso(){
    int *arreglo, x;
    long frec;

    leerTam();
    arreglo = new int[tam];
    leerArreglo(arreglo);
    imprimir(arreglo);

    cout<<"Ingrese el valor a buscar: ";
    cin>>x;
    frec = frecuencia(arreglo, x);
    cout<<x<<" esta "<<frec<<" veces en el arreglo"<<endl;
}

void leerTam(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;
}

void leerArreglo(int *arreglo) {
    for(int i = 0; i < tam; i++){
        cout<<"Ingrese arreglo["<<i<<"] = ";
        cin>>arreglo[i];
    }
}

void imprimir(int *datos){
    for(int i = 0; i < tam; i++){
        cout<<"arreglo["<<i<<"] = "<<datos[i]<<endl;
    }
}

long frecuencia(int *A, int x){
    long cont = 0;
    for(int i = 0; i < tam; i++){
        if(A[i] == x) cont++;
    }
    return cont;
}

int main() {
    proceso();
    return 0;
}
