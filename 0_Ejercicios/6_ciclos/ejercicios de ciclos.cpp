//se agregan las librerias a usar
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<ctime>

using namespace::std;






//declaracion de prototipos de funciones
void menu();
void pause();
void ciclos_1();
void ciclos_2();
void ciclos_3();
void ciclos_4();
void ciclos_5();
void ciclos_6();
void ciclos_7();
void ciclos_8();
void ciclos_9();
void ciclos_10();
void ciclos_11();
void ciclos_12();
void ciclos_13();
void ciclos_14();
void ciclos_15();
void ciclos_16();
void ciclos_17();
void ciclos_18();
void ciclos_19();
void ciclos_20();
void ciclos_21();
void ciclos_22();
void ciclos_23();
void ciclos_24();
void ciclos_25();
void ciclos_26();

void pause(){
   std::cout<<"Press any key to continue";
   std::getchar();
}

void menu(){
int opc;

    do{
        cout<<"menu de opciones"<<endl;
        cout<<"===================================="<<endl;
        cout<<"1.suma entre 1 a 10"<<endl;
        cout<<"2.sume entre 1 a n numeros"<<endl;
        cout<<""<<endl;
        cout<<"0.salir"<<endl;
        cout<<"seleccione una opcion: ";
        cin>>opc;
        system("clear");
        switch(opc){

        case 1: ciclos_1();break;
        case 2: ciclos_2();break;
        case 3: ciclos_3();break;
        case 0: break;
        default:cout<<"opcion incorrecta"<<endl<<endl;

        }


    }

    while (opc != 0);

}

//1. Calcular la suma de los enteros comprendidos del 1 al 10
void ciclos_1(){
int suma = 0;
    for(int x=0; x<11; x++){

        suma = x + suma;
    }

cout<<"la suma de los numeros es: "<<suma<<endl;

system("read -p 'Press Enter to continue...' var");
system("clear");

}

//2. Calcular la suma de los n-primeros números naturales positivos.
void ciclos_2(){

int suma = 0;
int n;

cout<<"ingrese hasta que numero hacer la suma: ";
cin>>n;

        for(int x=0; x<=n; x++){

            suma= x + suma;
        }
cout<<"la suma de 0 hasta "<<n<<" es: "<<suma<<endl;

system("read -p 'Press Enter to continue...' var");
system("clear");
}

//3. Imprimir los primeros n-números pares desde el dos, donde n es ingresado por el usuario. Por ejemplo:
//sea n ← 10, el programa muestra en pantalla 2, 4 ,6, 8, 10, 12, 14, 16, 18, 20.
void ciclos_3(){

}



int main(){
menu();


return 0;
}
