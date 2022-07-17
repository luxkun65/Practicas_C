//se incluyen las librerias a usar
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace::std;

//se incluyen los prototipos de funciones
void tamano();
void llenarNotas();
void notaAlta();
void frecuencia();
void imprimirArreglo();

void imprimirNotas();



//se agregan las variables con las que trabajaremos
//Matriz de notas de estudiantes
int tam;
int notaA;
int filas1;
int columnas1;
int **notasEst;

//arreglo de frecuencia
int *frec;



//matriz final
char *arreglo1;
char *arreglo2;
char *arreglo3;
char *arreglo4;
char *arreglo5;


void limpiador(){

frec = new int [columnas1];

for(int f=0;f<5;f++){
        frec[f]=0;

}
frecuencia();
}

void tamano(){
cout<<"ingrese la cantidad de estudiantes a ser evaluados"<<endl;
cin>>tam;

filas1=tam;
columnas1=4,

notasEst = new int *[filas1];
for(int f=0; f<filas1; f++){
    notasEst[f]= new int [columnas1];

}

llenarNotas();
}


//////////////////////////////////////////////


void llenarNotas(){
srand(time(NULL));
for(int f=0;f<filas1;f++){
    for(int c=0;c<columnas1-1;c++){

        notasEst[f][c]= 1+ rand() %5;
        cout<<notasEst[f][c];
    }
cout<<endl;
}

notaAlta();
}


///////////////////////////////////////////////////////

void notaAlta(){
notaA=0;

for(int f=0;f<filas1;f++){
    for(int c=0;c<columnas1-1;c++){

            notaA= max(notaA , notasEst[f][c]);
            notasEst[f][3]=notaA;

        }

notaA=0;
    }

    imprimirNotas();
}


////////////////////////////////////////////

void frecuencia(){



for(int f=0;f<filas1;f++){
    for(int c=3;c<columnas1;c++){

         switch(notasEst[f][c]){

            case 1: frec[0]++;break;
            case 2: frec[1]++;break;
            case 3: frec[2]++;break;
            case 4: frec[3]++;break;
            case 5: frec[4]++;break;

        }
    }


}
imprimirArreglo();
}


/////////////////////////////////////////////////////////////////


void imprimirNotas(){

cout<<"las notas son:"<<endl;


for(int f=0;f<filas1;f++){cout<<"|";
    for(int c=0;c<columnas1;c++){

            cout<<notasEst[f][c]<<"|";

        }

cout<<endl;
    }

limpiador();

}


/////////////////////////////////////////////////


void imprimirArreglo(){

cout<<"la freciencia es"<<endl;
cout<<"|1="<<frec[0]<<"|2="<<frec[1]<<"|3="<<frec[2]<<"|4="<<frec[3]<<"5="<<frec[4];
for(int f=0; f>filas1;f++){

   if(frec[0]>0){


}


    }



}



int main(){
tamano();


return 0;
}
