/*22. Calcular e imprimir la tabla de multiplicar de los números del 1 al 12. (Por ejemplo, como aparece en la
“tapa” de algunos cuadernos)*/
#include<iostream>
#include<conio.h>
using namespace::std;


int main(){


for (int multiplicando = 1; multiplicando <= 12; multiplicando++){

    for(int multiplicador = 1; multiplicador <=12; multiplicador++){

            int producto = (multiplicando*multiplicador);

          cout<<multiplicando<<" x "<<multiplicador<<" = "<<producto<<endl;
    }

    cout<<endl;

    }

}
