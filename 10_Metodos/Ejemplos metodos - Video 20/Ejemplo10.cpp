#include<iostream>
using namespace::std;

int tam;

//Definición de los prototipos de funciones
void proceso();
void leerTam();
void leerArreglo(int*, string);
void imprimir(int*, string);
bool iguales(int*, int*);

void proceso(){
    int *arreglo1, *arreglo2;
    bool resp;

    leerTam();
    arreglo1 = new int[tam];
    arreglo2 = new int[tam];

    cout<<endl<<"Leer Arreglo A"<<endl;
    leerArreglo(arreglo1, "A");
    cout<<endl<<"Leer Arreglo B"<<endl;
    leerArreglo(arreglo2, "B");

    cout<<endl;
    imprimir(arreglo1, "A");
    cout<<endl;
    imprimir(arreglo2, "B");

    cout<<endl;

    resp = iguales(arreglo1, arreglo2);
    if(resp)//es lo mismo que -> if(resp == true)
        cout<<"Los arreglos son iguales"<<endl;
    else
        cout<<"Los arreglos no son iguales"<<endl;
}

void leerTam(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;
}

void leerArreglo(int *datos, string nomArreglo) {
    for(int i = 0; i < tam; i++){
        cout<<"Ingrese "<<nomArreglo<<"["<<i<<"] = ";
        cin>>datos[i];
    }
}

void imprimir(int *datos, string nomArreglo){
    for(int i = 0; i < tam; i++){
        cout<<nomArreglo<<"["<<i<<"] = "<<datos[i]<<endl;
    }
}

bool iguales(int *A, int *B){
    bool sw = true;//se asume que los dos arreglos son iguales
    for(int i = 0; i < tam; i++){
        if(A[i] != B[i]){
            sw = false;//si existe una diferencia, cambiar el valor de la variable sw
            break;//romper el bucle para no seguir comparando
        }
    }
    return sw;
}

int main() {
    proceso();
    return 0;
}
