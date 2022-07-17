#include<iostream>
using namespace::std;
#include<cstdlib>//srand(), rand()
#include<ctime>//time()

int *arreglo;
int tam;

//Definición de los prototipos de funciones
void proceso();
void leerTam();
void llenar();
void imprimir();
long calcularSuma();
void mostrarSuma();

void proceso(){
    leerTam();
    llenar();
    imprimir();
    mostrarSuma();
}

void leerTam(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;
    arreglo = new int[tam];
}

void llenar() {
    srand(time(0));//generar una nueva semilla de numeros aleatorios
    for(int i = 0; i < tam; i++){
        arreglo[i] = 1 + rand() % 100;
    }
}

void imprimir(){
    for(int i = 0; i < tam; i++){
        cout<<"arreglo["<<i<<"] = "<<arreglo[i]<<endl;
    }
}

long calcularSuma(){
    long suma = 0;
    for(int i = 0; i < tam; i++){
        suma+=arreglo[i];
    }
    return suma;
}

void mostrarSuma(){
    long sum = calcularSuma();
    cout<<"La sumatoria de los elementos es: "<<sum<<endl;
}

int main() {
    proceso();
    return 0;
}
