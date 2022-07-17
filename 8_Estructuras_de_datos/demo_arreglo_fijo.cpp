#include<iostream>//cin, cout, endl
using namespace::std;

int valores[10];

void leer_datos();
void imprimir();
void sumar();
void buscar();

void leer_datos(){
   for(int i = 0; i < 10; i++){
        cout<<"Ingrese valores["<<i<<"] = ";
        cin>>valores[i];
   }
}

void imprimir(){
    int i = 0;
    while(i < 10){
        cout<<"valores["<<i<<"] = "<<valores[i]<<endl;
        i++;
    }
}

void sumar(){
    int suma = 0;
    for(int i = 0; i < 10; i++){
        suma+=valores[i];//suma = suma + valores[i];
    }
    cout<<"La sumatoria de los elementos es = "<<suma<<endl;
}

void buscar(){
    bool existe = false;
    int valor_buscar = 0;
    cout<<"Ingrese el valor a buscar: ";
    cin>>valor_buscar;

    for(int i = 0; i < 10; i++){
        if(valor_buscar == valores[i]){
            existe = true;
            cout<<"El valor "<<valor_buscar<<
                  " esta en la posición "<<i<<endl;
            break;
        }
    }
    if(!existe){//(existe == false)
        cout<<"El valor "<<valor_buscar<<
                  " no existe en el arreglo"<<endl;
    }
}

int main(){
    //leer_datos();
    llenar();
    imprimir();
    sumar();
    buscar();
    return 0;
}
