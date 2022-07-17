#include<iostream>
using namespace::std;
#include<conio.h>//getche

char *letras;
string *cadenas;
int tam;

void leer_tam();
void imprimir_letras();
void imprimir_cadenas();
void limpiar();
void leer_letras();
void leer_cadenas();
void buscar_letras();
void buscar_cadenas();

void leer_tam(){
    cout<<"Ingrese el tamaño de los arreglos: ";
    cin>>tam;
    letras = new char[tam];
    cadenas = new string[tam];
}

void imprimir_letras(){
    for(int i = 0; i < tam; i++){
        cout<<"letras["<<i<<"] = "<<letras[i]<<endl;
    }
}

void imprimir_cadenas(){
    for(int i = 0; i < tam; i++){
        cout<<"cadenas["<<i<<"] = "<<cadenas[i]<<endl;
    }
}

void limpiar(){
    for(int i = 0; i < tam; i++){
        letras[i] = '-';
    }
}

void leer_letras(){
    for(int i = 0; i < tam; i++){
        cout<<"Presione una tecla [No ENTER] ";
        letras[i] = getche();
        cout<<endl;
    }
}

void leer_cadenas(){
    fflush(stdin);
    for(int i = 0; i < tam; i++){
       cout<<"Ingrese cadenas["<<i<<"] = ";
       getline(cin, cadenas[i]);
    }
}

void buscar_letras(){
    char letra_buscar;
    bool existe = false;
    cout<<"Ingrese le letra a buscar ";
    letra_buscar = getche();
    cout<<endl;

    for(int i = 0; i < tam; i++){
        if(letras[i] == letra_buscar){
            existe = true;
            cout<<"La letra "<<letra_buscar<<
              " existe en la posición "<<i<<endl;
            break;
        }
    }
    if(!existe){
        cout<<"La letra "<<letra_buscar<<
              " no existe en el arreglo"<<endl;
    }
}

void buscar_cadenas(){
    string cadena_buscar;
    bool existe = false;
    cout<<"Ingrese la cadena a buscar ";
    fflush(stdin);
    getline(cin, cadena_buscar);

    for(int i = 0; i < tam; i++){
         if(cadena_buscar.compare(cadenas[i]) == 0){
            existe = true;
            cout<<"La cadena "<<cadena_buscar<<
              " existe en la posición "<<i<<endl;
            break;
         }
    }
    if(!existe){
        cout<<"La cadena "<<cadena_buscar<<
              " no existe en el arreglo"<<endl;
    }

}

int main(){
    leer_tam();
    limpiar();
    leer_letras();
    leer_cadenas();
    imprimir_letras();
    imprimir_cadenas();
    buscar_letras();
    buscar_cadenas();
    return 0;
}
