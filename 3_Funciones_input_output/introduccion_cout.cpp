//1. se incluye el archivo de cabecera
#include <iostream>
#include <math.h>

 //2. facilitar el uso de las funciones de las librerias iostream
using namespace::std;

//3. Usar cout con los caracteres de salida
//Ejemplo: cout<<"cadena de caracteres"|identificadot_variable|valor_retorno_funcio,|endl;

int base = 2;
int exponente = 3;

int main (){
    cout<<"el resultado de elevar "<<base<<" a la "<<exponente<<" es igual a "<<pow (base, exponente)<<endl;

    return 0;
}
