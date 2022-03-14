/*19. Imprimir en pantalla la siguiente figura de acuerdo a la cantidad de líneas deseadas.
Por ejemplo; si la cantidad de líneas es 5 en pantalla se visualizará:
*
**
***
****
******/

#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace::std;

//se agregan las fundiones
void recta();
void datos();


//se declaran las variable globales
int linea;

void datos(){

cout<<"ingrese la cantidad de lineas a imprimir"<<endl;

cin>>linea;

}

void recta(){



for (int col = 1; col <= linea; col++){

    for(int fila = 1; fila <=col; fila++){

          cout<<"*";
    }

    cout<<endl;
    Sleep(250);
    }

}

int main (){

datos();
recta();

return 0;
}
