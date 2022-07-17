#include <iostream>
using namespace::std;

unsigned long factorial(long);/*se declara unsigned long para que la variable a
retornar tenga mas capacidad de almacenamiento, ya que solo se tomara la parte positiva
de la variable*/

unsigned long factorial(long numero){
    if ( numero <= 1 ) // evalúa el caso base
        return 1; // casos base: 0! = 1 y 1! = 1
    else // paso recursivo
        return numero * factorial(numero - 1);
}

int main() {
   long fact = factorial(5);
   cout<<fact<<endl;

   return 0;
}

