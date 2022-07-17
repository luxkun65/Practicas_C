#include<iostream>
using namespace::std;
#include<cstdlib>//srand(), rand()
#include<ctime>//time()

//Definición de los prototipos de funciones
void proceso();
void imprimir(long, long, long);
long multiplicacion(long, long, long);

void proceso(){
    long numero1, numero2, numero3, resultado;

    srand(time(NULL));//generar una nueva semilla de numeros aleatorios
    numero1 = 1 + rand() % 100;
    numero2 = 1 + rand() % 100;
    numero3 = 1 + rand() % 100;

    cout<<"Valores antes de llamar al metodo multiplicacion"<<endl;
    imprimir(numero1, numero2, numero3);
    cout<<endl;

    resultado = multiplicacion(numero1, numero2, numero3);
    cout<<endl<<"Resultado = "<<resultado<<endl<<endl;

    cout<<"Valores despues de llamar al metodo multiplicacion"<<endl;
    imprimir(numero1, numero2, numero3);
}

void imprimir(long numero1, long numero2, long numero3){
    cout<<numero1<<endl;
    cout<<numero2<<endl;
    cout<<numero3<<endl;
}

long multiplicacion(long numero1, long numero2, long numero3){
    long resul = 0;

    numero1 = numero1 * 10;
    numero2 = numero2 * 10;
    numero3 = numero3 * 10;

    cout<<"Valores en el metodo multiplicacion"<<endl;
    imprimir(numero1, numero2, numero3);

    resul = numero1 + numero2 + numero3;
    return resul;
}

int main() {
    proceso();
    return 0;
}
