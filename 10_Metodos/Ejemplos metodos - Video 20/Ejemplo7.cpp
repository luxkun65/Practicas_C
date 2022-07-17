#include<iostream>
using namespace::std;
#include<cstdlib>//srand(), rand()
#include<ctime>//time()
#include<algorithm>//sort()

int *arreglo;
int tam;

//Definición de los prototipos de funciones
void proceso();
void leerTam();
void llenar();
void imprimir();
long *getMenorMayor();
void mostrarMenorMayor();

void proceso(){
    leerTam();
    llenar();
    imprimir();
    mostrarMenorMayor();
}

void leerTam(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;
    arreglo = new int[tam];
}

void llenar() {
    srand(time(NULL));//generar una nueva semilla de numeros aleatorios
    for(int i = 0; i < tam; i++){
        arreglo[i] = 1 + rand() % 100;
    }
}

void imprimir(){
    for(int i = 0; i < tam; i++){
        cout<<"arreglo["<<i<<"] = "<<arreglo[i]<<endl;
    }
}

long *getMenorMayor(){
    long *tmp;
    tmp = new long[2];
    sort(arreglo, arreglo + tam);
    tmp[0] = arreglo[0];
    tmp[1] = arreglo[tam-1];
    return tmp;
}

void mostrarMenorMayor(){
    long *datos = getMenorMayor();
    cout<<"El menor elemento es: "<<datos[0]<<endl;
    cout<<"El mayor elemento es: "<<datos[1]<<endl;
}

int main() {
    proceso();
    return 0;
}
