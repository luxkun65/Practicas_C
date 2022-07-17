#include <iostream>
using namespace::std;

unsigned long fibonacci(long);/*se declara unsigned long para que la variable a
retornar tenga mas capacidad de almacenamiento, ya que solo se tomara la parte positiva
de la variable*/

unsigned long fibonacci(long numero){
    if ((numero == 0) || (numero == 1))//casos base
        return numero;
    else //paso recursivo
        return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main() {
   long termino = fibonacci(7);
   cout<<termino<<endl;

   return 0;
}

