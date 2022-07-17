#include<iostream>
using namespace::std;

void esMayorEdad(int edad) {
    if (edad > 17)
        cout<<"Es mayor de edad"<<endl;
    else
        cout<<"Es menor de edad"<<endl;
}

void leerEdad(){
    int edad;
    cout<<"Ingrese la edad:";
    cin>>edad;
    esMayorEdad(edad);
}

int main() {
    leerEdad();
    return 0;
}
