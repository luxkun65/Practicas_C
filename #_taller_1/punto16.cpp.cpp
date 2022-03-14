/*16. Calcular e imprimir los cuadrados de los números comprendidos entre un rango dado por el usuario.
Por ejemplo: rango de 2 a 5 => 4, 9, 16, 2*/

#include<iostream>
#include<conio.h>
using namespace::std;

//se declaran las funciones
void datos();
void resultado();

//se declaran las variables globales
int ini;
int fin;
int res;

void datos(){
 cout<<"ingrese el inicio del rango = ";
 cin>>ini;
 cout<<endl;

 cout<<"ingrese el final del rango = ";
 cin>>fin;
 cout<<endl;

}

void resultado(){

cout<<"rango de "<<ini<<" a "<<fin<<" = ";

for(int x = ini; x <= fin; x++){

res = x*x;
cout<<res;

if( x <fin ){

    cout<<", ";
}


}

cout<<endl;
}

int main(){

datos();
resultado();

return 0;

}
