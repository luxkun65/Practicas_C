#include<iostream>
using namespace::std;
#include<cstdlib>//srand(), rand()
#include<ctime>//time()

//Definición de los prototipos de funciones
void proceso();
void llenarArreglo(long*, int);
void imprimir(long*, string, int);
long *multiplicacion(long*, long, int);

void proceso(){
    int tam;
    long *A, x;
    long *M;

    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;

    A = new long[tam];
    llenarArreglo(A, tam);
    cout<<endl<<"Valores del arreglo A antes de llamar al metodo multiplicacion"<<endl;
    imprimir(A, "A", tam);

    cout<<endl<<"Ingrese el escalar: ";
    cin>>x;
    M = multiplicacion(A, x, tam);

    cout<<endl<<"Valores del arreglo M despues de llamar al metodo multiplicacion"<<endl;
    imprimir(M, "M", tam);

    cout<<endl<<"Valores del arreglo A despues de llamar al metodo multiplicacion"<<endl;
    imprimir(A, "A", tam);//verificar que A fue afectado
}

void llenarArreglo(long *arreglo, int tam) {
    srand(time(NULL));//generar una nueva semilla de numeros aleatorios
    for(int i = 0; i < tam; i++){
        arreglo[i] = 1 + rand() % 100;
    }
}

void imprimir(long *datos, string nomArreglo, int tam){
    for(int i = 0; i < tam; i++){
        cout<<nomArreglo<<"["<<i<<"] = "<<datos[i]<<endl;
    }
}

long *multiplicacion(long *tmp, long x, int tamano){
    for(int i = 0; i < tamano; i++){
        tmp[i] = tmp[i] * x;
    }
    return tmp;
}

int main() {
    proceso();
    return 0;
}
