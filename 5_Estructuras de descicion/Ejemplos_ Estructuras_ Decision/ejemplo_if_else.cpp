#include<iostream>
using namespace::std;

double nota;

void leer_nota();
void mensaje();

void leer_nota(){
    cout<<"Ingrese la nota: ";
    cin>>nota;
}

void mensaje(){
    if(nota >= 2.95){
        cout<<"Aprobo"<<endl;
    }else{
        if(nota >= 1.95){
            cout<<"Habilitar"<<endl;
        }else{
            if(nota < 1.95){
                cout<<"Reprobo"<<endl;
            }
        }
    }
}

int main(){
    leer_nota();
    mensaje();
    return 0;
}
