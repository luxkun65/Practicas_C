//se incluyan la librerias
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace::std;

//se agregan los prototipos de funciones

void tamano();
void ramdonNotas();
void frecuencia();
void llenarM();
void imprimir();

//se agregan las variables con las que trabajaremos
//arreglo de estudiantes
int tam;
int *notasEst;

//arreglos de frecuencia
int frec[5];


//matriz final
int filas;
int columnas = 5;
char **matriz ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void tamano(){
cout<<"ingrese la cantidad de estudiantes a evaluar"<<endl;
cin>>tam;

notasEst = new int [tam];

/////////////////////////////////////

filas = tam;
matriz = new char *[filas];
for(int f=0; f<filas; f++){
    matriz[f]= new char [columnas];

}
ramdonNotas();
}


//////////////////////////////////////////////////////////////


void ramdonNotas(){
srand(time(NULL));

for(int i=0; i<tam;i++){

    notasEst[i]= 1+ rand() %5;
    cout<<"notas ["<<i<<"] = "<<notasEst[i]<<endl;
    }
frecuencia();
}


/////////////////////////////////////////////////////////


void frecuencia(){

for(int i =0; i<tam; i++){

        switch(notasEst[i]){

            case 1: frec[0]++;break;
            case 2: frec[1]++;break;
            case 3: frec[2]++;break;
            case 4: frec[3]++;break;
            case 5: frec[4]++;break;

        }

    }


llenarM();
}


//////////////////////////////////////////////////////////////


void llenarM(){

for(int f=filas-1; f>-1;f--){
    for(int c=columnas-1; c>-1;c--){

            if(frec[c]>0){
            matriz[f][c]='*';
            frec[c]=frec[c]-1;


            }else{
                matriz[f][c]=' ';
            }

        }

    }


imprimir();
}


/////////////////////////////////////////////////////////

void imprimir(){

for(int f=0; f<filas;f++){
    for(int c=0; c<columnas; c++){

        cout<<matriz[f][c];
        }
    cout<<endl;
    }
cout<<"12345"<<endl;
}


int main(){
tamano();



return 0;
}
