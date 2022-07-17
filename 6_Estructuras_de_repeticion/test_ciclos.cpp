#include<iostream>
using namespace::std;

void ejemplo_for(){
    for(int x = 1; x <= 10; x++){
        if(x % 2 == 0){
            cout<<x<<" es par"<<endl;
        }else{
            cout<<x<<" es impar"<<endl;
        }
    }
}

void ejemplo_while(){
    int x = 1;
    while(x <= 10){
        if(x % 2 == 0){
            cout<<x<<" es par"<<endl;
        }else{
            cout<<x<<" es impar"<<endl;
        }
        x++;
    }
}

void ejemplo_do(){
    int x = 1;
    do{
        if(x % 2 == 0){
            cout<<x<<" es par"<<endl;
        }else{
            cout<<x<<" es impar"<<endl;
        }
        x++;
    }while(x <= 10);
}

int main(){
    //ejemplo_for();
    //ejemplo_while();
    ejemplo_do();
    return 0;
}
