#include <iostream>
using namespace::std;

double parcial1, parcial2, trabajoFinal;
double definitiva;

//declaración de los prototipos de funciones

void leer_notas();
void calcular_Def ();
void salida ();

//implementación de las funciones
void leer_notas (){
cout<<"ingrese la nota del primer parcial: ";
cin>>parcial1;

cout<<"ingrese la nota del segundo parcial: ";
cin>>parcial2;

cout<<"ingrese la nota del trabajo final: ";
cin>>trabajoFinal;
}
void calcular_Def (){
    definitiva = (parcial1 * 0.3) +
                 (parcial2 * 0.3) +
                 (trabajoFinal * 0.4);

}
void salida () {

    cout<<"la definitiva es: "<<definitiva<<endl;
    if(definitiva >= 2.95) {

        cout<<"aprobo"<<endl;
        }
        else{

          if (definitiva >= 1.95){

                cout<<"habilita"<<endl;}
                else{

                cout<<"reprobo"<<endl;
                }
        }
}



        int main (){
        leer_notas();
        calcular_Def();
        salida();
        return 0;
        }
