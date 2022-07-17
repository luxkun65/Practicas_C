#include<iostream>
using namespace::std;
#include<cstdlib>//srand(), rand()
#include<ctime>//time()

//Definición de los prototipos de funciones
void proceso();
void imprimir(long, long, long);
long multiplicacion(long &, long &, long &);

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

void imprimir(long num1, long num2, long num3){
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
}

long multiplicacion(long &num1, long &num2, long &num3){
    long resul = 0;

    num1 = num1 * 10;
    num2 = num2 * 10;
    num3 = num3 * 10;

    cout<<"Valores en el metodo multiplicacion"<<endl;
    imprimir(num1, num2, num3);

    resul = num1 + num2 + num3;
    return resul;
}

int main() {
    proceso();
    return 0;
}
