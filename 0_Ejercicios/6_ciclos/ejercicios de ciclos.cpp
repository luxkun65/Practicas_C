//se agregan las librerias a usar
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<ctime>
#include <list>

using namespace::std;


//declaracion de prototipos de funciones
void menu();
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



void menu(){
int opc;

    do{
        cout<<"#####################################"<<endl;
        cout<<"MENU DE OPCIONES"<<endl;
        cout<<"#####################################"<<endl;
        cout<<"1.suma entre 1 a 10"<<endl;
        cout<<"2.suma entre 1 a n numeros"<<endl;
        cout<<"3.Pares hasta n numero"<<endl;
        cout<<"4.Cantidad de pares e impares"<<endl;
        cout<<"5.Suma entre 1 a n en pantalla"<<endl;
        cout<<"6.Rango de numeros"<<endl;
        cout<<"7.Suma de los numeros de rangos"<<endl;
        cout<<"8.Serie: 1,20,3,40,5,60,7,80,9,100"<<endl;
        cout<<"9.Serie: 1,-1 hasta n"<<endl;
        cout<<"10.Cantidad de notas de estudiantes"<<endl;
        cout<<"11.Elevado n de un numero X"<<endl;
        cout<<"0.salir"<<endl;
        cout<<"seleccione una opcion: ";
        cin>>opc;
        system("clear");
        switch(opc){

        case 1: ciclos_1();break;
        case 2: ciclos_2();break;
        case 3: ciclos_3();break;
        case 4: ciclos_4();break;
        case 5: ciclos_5();break;
        case 6: ciclos_6();break;
        case 7: ciclos_7();break;
        case 8: ciclos_8();break;
        case 9: ciclos_9();break;
        case 10: ciclos_10();break;
        case 11: ciclos_11();break;
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
//sea n ← 10, el programa muestra en pantalla 2, 4 ,6, 8, 10.
void ciclos_3(){
int n;
int aux = 0;
cout<<"ingrese un numero y obtendra los pares comprendidos en 0 y el valor ingresado"<<endl;
cout<<"\n n:";
cin>>n;
cout<<"\n| ";

for(int x = 1; x<=n; x++){

    aux= x%2;

    if(aux == 0){

        cout<<x<<" | ";
        }

    }
cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");

}

//4. Leer n-números enteros positivos y determinar cuántos de ellos son pares y cuantos son impares. Donde
//n es ingresado por el usuario
void ciclos_4(){
int n;
int aux = 0;
int pares=0;
int impares=0;
cout<<"ingrese un numero y obtendra la cantidad de pares e impares"<<endl;
cout<<"\n n:";
cin>>n;
cout<<"\npares | impares";

    for(int x=1;x<=n;x++){

        aux=x%2;

        if(aux !=0){

            impares++;

        }else{

            pares++;

        }

    }

cout<<"\n  "<<pares<<"   |   "<<impares<<endl;
cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");
}

//5. Calcular la suma de los n-primeros números naturales positivos desde 1, donde n es ingresado por el
//usuario. Por ejemplo: sea n ← 5, el programa muestra en pantalla 15 (1+2+3+4+5)
void ciclos_5(){
int n;
int suma=0;
cout<<"ingrese el valor hasta donde ira la suma"<<endl;
cout<<"\nn:";
cin>>n;

    for(int x=1;x<=n;x++){

            suma=x+suma;

    }

cout<<suma<<" = (";

    for(int x=1;x<=n;x++){

      cout<<x;

      if(x < n ){

      cout<<"+";

      }





    }
cout<<")";
cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");
}

//6. Imprimir los números comprendidos entre un rango de valores dado por el usuario. Por ejemplo; si
//rango1 ← 5, rango2 ← 10, el programa muestra en pantalla 5, 6, 7, 8, 9, 10.
void ciclos_6(){
int rango1;
int rango2;
cout<<"\nIngrese el rango de los valores que desee imprimir"<<endl;
cout<<"Desde: ";
cin>>rango1;
cout<<"Hasta: ";
cin>>rango2;

    for(rango1;rango1<=rango2;rango1++){

        cout<<rango1;

        if(rango1 < rango2){

            cout<<",";

        }

    }




cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");
}

//7. Calcular la suma de los números comprendidos entre un rango de valores dado por el usuario. Por
//ejemplo; si rango_1 ← 2, rango_2 ← 5, el programa muestra en pantalla 14 (2+3+4+5)
void ciclos_7(){

int rango1=0;
int rango2=0;
int suma=0;
cout<<"\nIngrese el rango de los valores que desee imprimir"<<endl;
cout<<"Desde: ";
cin>>rango1;
cout<<"Hasta: ";
cin>>rango2;


    for(int x=rango1; x<=rango2;x++){

        suma = x+suma;

    }

cout<<suma;
cout<<" = (";

for(rango1;rango1<=rango2;rango1++){

        cout<<rango1;

        if(rango1 < rango2){

            cout<<"+";

        }

    }

cout<<")";


cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");
}

//8. Mostrar en pantalla la siguiente serie: 1,20,3,40,5,60,7,80,9,100.
void ciclos_8(){

int a=1;
int b=1;
int c=100;
int aux=1;

cout<<"\nSerie: 1,20,3,40,5,60,7,80,9,100"<<endl;


for(a; a<=c;a++){

    if(((aux %2)!=0)&&(aux==b)&&(aux<=10)){

    cout<<aux<<",";
    b++;
    aux=aux+2;
    }


    if((a %20)==0){

    cout<<a;
    b++;

        if(a<100){
            cout<<",";
        }

    }

}

cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");
}

//9. Mostrar un pantalla la siguiente serie: 1,-1,1,-1,1,-1,.... donde la cantidad de términos es ingresada por
//el usuario. Por ejemplo: si el usuario ingresa 5, el programa muestra en pantalla 1, -1, 1, -1, 1
void ciclos_9(){
int n;
cout<<"ingrese la cantidad de numeros que quiera en la serie"<<endl;
cin>>n;
    for(int x=1; x<=n;x++){

        if((x %2)!=0){

           cout<<1;

        }else{
            cout<<-1;

        }

        if(x<n){
            cout<<",";

        }

    }


cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");

}

/*10. Leer la calificación para n-estudiantes, donde n es ingresado por el usuario. La calificación es una letra
que va desde la ‘A’ hasta la ‘F’. Posteriormente mostrar una estadística con los resultados obtenidos por
cada calificación.
Por ejemplo: sea n ← 5, y asumiendo que las calificaciones ingresadas para cada estudiante son:
Calificación del estudiante 1: A
Calificación del estudiante 2: B
Calificación del estudiante 3: A
Calificación del estudiante 4: C
Calificación del estudiante 5: F
El programa muestra en pantalla:
A: 2
B: 1
C: 1
D: 0
E: 0
F: 1*/
void ciclos_10(){
int n;
int a=0,b=0,c=0,d=0,e=0,f=0;
char letra;
cout<<"\ningrese la cantidad de estudiantes: ";
cin>>n;
cout<<"\ningrese la nota del estudiante de la A a la F en mayusculas"<<endl;

for(int x=1;x<=n;x++){

    cout<<"Calificacion del estudiante "<<x<<": ";
    cin>>letra;

        if(letra=='A'){
        a++;
        }
        if(letra=='B'){
        b++;
        }
        if(letra=='C'){
        c++;
        }
        if(letra=='D'){
        d++;
        }
        if(letra=='E'){
        e++;
        }
        if(letra=='F'){
        f++;
        }

}

cout<<"\nLa cantidad de estudiantes que sacaron la misma nota fue."<<endl;
cout<<"\nA : "<<a<<endl;
cout<<"B : "<<b<<endl;
cout<<"C : "<<c<<endl;
cout<<"D : "<<d<<endl;
cout<<"E : "<<e<<endl;
cout<<"F : "<<f<<endl;


cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");
}

//11. Calcular el valor de Xn mediante un ciclo (multiplicaciones sucesivas), donde X y n son ingresados por el
//usuario. Por ejemplo; si X ← 2, n ← 3, el programa muestra en pantalla 8 (2*2*2)
void ciclos_11(){
int x;
int n;
int a=1;
int b=0;
int c=1;

cout<<"\nIngrese valores para calcular x elevado a la n"<<endl;
cout<<"\nX = ";
cin>>x;
cout<<"n = ";
cin>>n;

int elevado = x;
do{

    elevado=elevado*x;
    a++;

}while(a<n);


cout<<"\n"<<elevado<<" = (";

while(b<n){

cout<<x;

    if(c<n){
        cout<<"*";
    }

c++;
b++;

}
cout<<")"<<endl;
cout<<endl;
system("read -p 'Press Enter to continue...' var");
system("clear");
}



int main(){
menu();


return 0;
}
