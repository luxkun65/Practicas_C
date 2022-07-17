#include<iostream>
using namespace::std;

//Definición de los prototipos de funciones
void proceso();
int getMenor(int n1, int n2, int n3);

void proceso(){
    int num1, num2, num3;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    cout<<"Ingrese el ultimo numero: ";
    cin>>num3;

    int menor = getMenor(num1, num2, num3);
    cout<<"El menor es: "<<menor<<endl;

}

int getMenor(int n1, int n2, int n3){
    int menor = min(n1, min(n2, n3));
    return menor;
}

int main() {
    proceso();
    return 0;
}
