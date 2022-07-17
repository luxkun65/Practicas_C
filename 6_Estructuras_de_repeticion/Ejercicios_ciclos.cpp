#include<iostream>
using namespace::std;

void serie_pares();
void contar_pares_impares();
void serie_alternante();
void menu();

void serie_pares(){
    int cant_terminos;
    int pares = 2;
    cout<<"Ingrese la cantidad de terminos: ";
    cin>>cant_terminos;

    for(int i = 0; i < cant_terminos; i++){
        cout<<pares<<endl;
        pares+=2;//pares = pares + 2;
    }
}

void contar_pares_impares(){
    int cantidad_numeros;
    int cont_pares = 0, cont_impares = 0;
    int numero;

    cout<<"Ingrese la cantidad de numeros a leer: ";
    cin>>cantidad_numeros;

    int i = 0;
    while(i < cantidad_numeros){
        cout<<"Ingrese un numero (positivo): ";
        cin>>numero;
        if(numero % 2 == 0) cont_pares++;
        else cont_impares++;
        i++;
    }
    cout<<"Cant de pares = "<<cont_pares<<endl;
    cout<<"Cant de impares = "<<cont_impares<<endl<<endl;
}

void serie_alternante(){
    int cant_terminos;
    int termino = 1;
    cout<<"Ingrese la cantidad de terminos: ";
    cin>>cant_terminos;

    for(int x = 0; x < cant_terminos; x++){
        if(termino % 2 == 0) cout<<termino * 10<<endl;
        else cout<<termino<<endl;
        termino++;
    }
    cout<<endl<<endl;
}

void menu(){
    int opc;
    do{
       cout<<"Menu de la aplicación"<<endl;
       cout<<"1. Serie de numeros pares"<<endl;
       cout<<"2. Contar pares e impares"<<endl;
       cout<<"3. Serie de numeros alternantes"<<endl;
       cout<<"0. Salir de la aplicación" <<endl;
       cout<<"Seleccione una opción: ";
       cin>>opc;

       switch(opc){
           case 1: serie_pares(); break;
           case 2: contar_pares_impares(); break;
           case 3: serie_alternante(); break;
           case 0: break;
           default: cout<<"Opcion incorrecta"<<endl<<endl;
       }
    }while(opc != 0);
}

int main(){
    menu();
    return 0;
}

