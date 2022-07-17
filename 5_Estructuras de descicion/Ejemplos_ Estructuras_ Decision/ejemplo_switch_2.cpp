#include<iostream>
using namespace::std;
#include<conio.h>//getche()

char letra;

void leer_letra();
void mensaje();

void leer_letra(){
    cout<<"Presione una tecla: ";
    letra = getche();
    cout<<endl;
}

void mensaje(){
    switch(letra){
        case 'A': case 'a':
            cout<<"Vocal abierta"; break;
        case 'E': case 'e':
            cout<<"Vocal abierta"; break;
        case 'I': case 'i':
            cout<<"Vocal cerrada"; break;
        case 'O': case 'o':
            cout<<"Vocal abierta"; break;
        case 'U': case 'u':
            cout<<"Vocal cerrada"; break;
        default: cout<<"No es vocal";
    }
}

int main(){
    leer_letra();
    mensaje();
    return 0;
}
