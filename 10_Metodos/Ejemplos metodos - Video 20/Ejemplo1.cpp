#include<iostream>
using namespace::std;

void leerEdad() {
    int edad;
    cout<<"Ingrese la edad:";
    cin>>edad;

    if (edad > 17)
        cout<<"Es mayor de edad"<<endl;
    else
        cout<<"Es menor de edad"<<endl;
}

int main() {
    leerEdad();
    return 0;
}
