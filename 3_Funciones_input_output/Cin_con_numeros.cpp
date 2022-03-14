#include <iostream>
#include <math.h>
using namespace::std;

 int base;
 int exponente;
 double potencia;

int main () {

    cout<<"ingrese el valor de la base: ";
    cin>>base;
    cout<<"ingrese el valor del exponente: ";
    cin>>exponente;
    potencia= pow (base, exponente);
    cout<<" el valor de elevar "<<base<<" a la "<< exponente <<" es igual a "<< potencia <<endl;

    return 0;
}
