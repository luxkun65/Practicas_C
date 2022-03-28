#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>//time
using namespace::std;

int cf = 5, cc = 3;
int mat [5][5];


void serie_par();
void imprimir();
void leer();
void llenar_aleatorio();
void sumatoria();
void menu();


void imprimir(){
cout<<"datos de la mariz"<<endl;

for (int f= 0; f < cf; f++){
    for (int c= 0; c < cc; c++){

       cout<<"mat ["<<f<<"] ["<<c<<"] ="<<mat [f][c]<<" ";
    }

    cout<<endl;
}

system("pause");
system("cls");
}

void leer(){
cout<<"lectura de la mariz"<<endl;

for (int f= 0; f < cf; f++){
    for (int c= 0; c < cc; c++){

        cout<<"ingrese mat ["<<f<<"] ["<<c<<"] =";
        cin>>mat [f][c];
    }

    cout<<endl;
}

system("pause");
system("cls");
}

void serie_par(){

int n = 2;

for (int f=0; f < cf ;f++){

    for(int c=0; c<cc;c++){
        mat [f][c] = n;
        n+=2;

    }

}

}

void llenar_aleatorio(){

srand(time(NULL));//generar una nueva semilla de numeros aleatorio

for(int f=0; f<cf; f++){
    for(int c=0; c<cc; c++){

        mat[f][c] = 1 + rand()%100;
    }
}

}


void sumatoria(){
double suma = 0;
for(int f=0; f<cf;f++){
    for (int c=0; c<cc; c++){
        suma+=mat [f][c];
    }
}
cout<<"sumatoria = "<<suma<<endl;
system("pause");
system("cls");
}

void menu(){
int opc;
do{
    cout<<"menu de opciones"<<endl;
    cout<<"================"<<endl;
    cout<<"1.leer la mariz"<<endl;
    cout<<"2.serie de numeros pares"<<endl;
    cout<<"3.llenar la matiz aleatoriamente"<<endl;
    cout<<"4.imprimir"<<endl;
    cout<<"5.sumatoria"<<endl;
    cout<<"0.salir"<<endl;
    cout<<"seleccione una opcion: ";
    cin>>opc;
    system("cls");
    switch(opc){
    case 1: leer();break;
    case 2: serie_par();break;
    case 3: llenar_aleatorio();break;
    case 4: imprimir();break;
    case 5: sumatoria();break;
    case 0 : break;
    default:cout<<"opcion incorrecta"<<endl<<endl;


    }
}while (opc != 0 );


}

int main(){
//leer();
//imprimir();
//serie_par();
//llenar_aleatorio();
//imprimir();
//sumatoria();
menu();
return 0;
}
