#include<iostream>
using namespace::std;

//Definición de los prototipos de funciones
void leerNotas();
void notaDefinitiva(double p1, double p2, double pf);

void leerNotas(){
    double parcial1, parcial2, parcialFinal;
    cout<<"Ingrese parcial 1: ";
    cin>>parcial1;
    cout<<"Ingrese parcial 2: ";
    cin>>parcial2;
    cout<<"Ingrese parcial final: ";
    cin>>parcialFinal;

    notaDefinitiva(parcial1, parcial2, parcialFinal);
}

void notaDefinitiva(double p1, double p2, double pf) {
    double def = (p1 * 0.3) + (p2 * 0.3) + (pf * 0.4);
    cout<<"Definitiva: "<<def<<endl;
}

int main() {
    leerNotas();
    return 0;
}
