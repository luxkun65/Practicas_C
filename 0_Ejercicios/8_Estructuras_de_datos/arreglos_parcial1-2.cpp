/*Llenar aleatoriamente un arreglo de tipo entero de tamaño N, donde N debe ser par. Los números aleatorios deben
estar entre 1 y N x N. El arreglo debe ser asignado desde los extremos de forma alternante, es decir posición [0] y
posición [N-1], después posición [1] y posición [N-2], después posición [2] y posición [N-3], ...., hasta llenar todas las
posiciones. N es ingresado por el usuario.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<math.h>

using namespace::std;

//se declaran las variables y arreglos

int *arreglo;
int tam;



//se declaran los prototipos de funciones
void tamano();
void llenar();


//pedimos al usuario que ingrese el tamano del arreglo
void tamano(){
       cout<<"ingrese el tamano del arreglo, que sea par"<<endl;
       cin>>tam;

       if(tam%2 == 0){
            arreglo = new int [tam];
            llenar();
       }
       else{
       cout<<"ingrese un valor valido, par"<<endl;
       system("read -p 'Press Enter to continue...' var");
       system("clear");
       tamano();

       }
}


//se llena el arreglo aleatoriamente
void llenar(){

int resta=0;
int aux = 1;
int x;

srand(time(NULL));

    for(int i=0;i<tam;i++){

        x = 0;
        x = 1+ rand() %(tam*tam);
        resta = tam - aux;

        if((i <= tam/2)&&(resta >= tam/2)){

        arreglo[i]=x;

        x=0;
        x = 1+ rand() %(tam*tam);

        arreglo[resta]=x;

        cout<<"arreglo ["<<i<<"] = "<<arreglo[i]<<endl;
        cout<<"arreglo ["<<resta<<"] = "<<arreglo[resta]<<endl;

        }

    aux++;
    }


}



int main(){
tamano();

return 0;
}
