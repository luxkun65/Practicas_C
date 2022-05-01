#include<iostream>
#include<cstdlib>
#include<ctime>
#include<math.h>


using namespace::std;

int *arreglo;
int tam;

//declaracion de prototipos de funciones
void tamano();
void llenar();
void imprimir();

//en la funcion tamano recibimos el tamano ingresado por el usuario
void tamano(){

cout<<"ingrese el tamano del arreglo, que sea par"<<endl;
cin>>tam;

if(tam%2 ==0){
arreglo = new int [tam];
llenar();
}

else{

cout<<"\nNumero incorrecto; ingrese un valor par"<<endl;
//system("pause");
//sytem("cls");

system("read -p 'Press Enter to continue...' var");
system("clear");
tamano();

}

}


//Aqui llenamos de valores aleatorios el arreglo de tal forma que queden igual numero de pares e impares
void llenar(){

srand(time(NULL));

int pares = 0;
int impares = 0;
int pasos = 0;
cout<<"x se evaluo = ";

    for(int i=0; i<tam;){

        int x = 0;

        x = 1+ rand() %(tam * tam);



        if((x%2 == 0) && (pares != tam/2)){
            arreglo[i] = x;
            pares++;
            i++;


        }

        if((x%2 != 0)&&(impares != tam/2)){
            arreglo[i] = x;
            impares++;
            i++;
        }

    pasos++;

    }

cout<<pasos<<endl;
cout<<"el resiltado es; pares: "<<pares<<" impares: "<<impares<<endl<<"repartidos asi."<<endl;

imprimir();
}



void imprimir(){


    for(int i=0; i<tam; i++){


    cout<<"\narreglo["<<i<<"] = "<<arreglo[i]<<endl;


    }


}



int main(){

tamano();

return 0;
}
