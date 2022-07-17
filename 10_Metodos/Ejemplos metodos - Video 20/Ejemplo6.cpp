#include<iostream>
using namespace::std;
#include<cstdlib>//srand(), rand()
#include<ctime>//time()

//Definición de los prototipos de funciones
double getMayor();
void mostrarMayor();

double getMayor(){
    srand(time(0));

    double num1 = rand();
    double num2 = rand();
    double num3 = rand();

    cout<<num1<<" "<<num2<<" "<<num3<<endl;

    double mayor = max(num1, max(num2, num3));
    return mayor;
}

void mostrarMayor(){
    double mayor = getMayor();
    cout<<"El mayor es: "<<mayor<<endl;
}

int main() {
    mostrarMayor();
    return 0;
}
