/*Escribir una aplicación en C++ que permita almacenar las calificaciones obtenidas por N estudiantes, donde cada uno
de ellos presenta 1 evaluación. La calificación es un numero entero entre 1 y 5, el cual es calculado de forma aleatoria.
Las calificaciones se almacenan en un arreglo de tamaño N. N es ingresado por el usuario.
Posteriormente, calcular la frecuencia de cada calificación, almacenarla en un matriz de N x 5, y visualizarla en forma
de grafico de barras verticales que se forman de arriba hacia abajo.*/
#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace::std;
int filas = 0;
int columnas = 0;
char **notas;

int numEstud=0;
int *estudiantes;

int frec[5];

//se declaran los prototipos de funciones
void cantEstudiantes();
void llenarNotas();
void frecuencia();
void tamMatriz();
void impMatriz();
void frecMatriz();

void cantEstudiantes(){

cout<<"ingrese la cantidad de estidiantes"<<endl;
cin>>numEstud;

estudiantes = new int [numEstud];
llenarNotas();
}


void llenarNotas(){

srand(time(NULL));

for(int i = 0; i<numEstud; i++){

    estudiantes[i] = 1+ rand() %5;

    cout<<"estudiante ["<<i<<"] = "<<estudiantes[i]<<endl;
}

tamMatriz();

}

void tamMatriz(){
filas = numEstud;
columnas=5;

notas = new char *[filas];
for(int f=0; f<filas; f++){
notas[f] = new char [columnas];
}

frecuencia();
}

void frecuencia(){


for(int i=0;i<numEstud;i++){

    switch(estudiantes[i]){

        case 1:frec[0]++;break;
        case 2:frec[1]++;break;
        case 3:frec[2]++;break;
        case 4:frec[3]++;break;
        case 5:frec[4]++;break;

    }
   }

frecMatriz();

}

void frecMatriz(){

for(int i=0; i<numEstud;i++){
    for(int j=0;j<5; j++){

    if(frec[j]>0){
    notas[i][j]='*';
    frec[j]=frec[j] -1;
    }
    else{
    notas[i][j]=' ';
    }
    }

}


impMatriz();

}


void impMatriz(){

for(int f=0; f<filas;f++){
    for(int c=0; c<columnas; c++){

        cout<<notas[f][c];
        }
    cout<<endl;
    }

}

int main(){
cantEstudiantes();


return 0;
}
