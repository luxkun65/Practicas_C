#include <iostream>
#include "Automovil.h"

using namespace::std;

///definicion de funciones;
void testNinguno();
void testBasica();
void testInter();
void testFull();




void testNinguno(){
    cout<<"--------------------------"<<endl;
//llamar al constructor por defecto
Automovil obj;
cout<<obj.getMarca()<<endl;
cout<<obj.getModelo()<<endl;
cout<<obj.getCantBocinas()<<endl;
cout<<obj.getCilindraje()<<endl;
cout<<obj.getTipoDir()<<endl;

}


void testBasica(){
cout<<"--------------------------"<<endl;
string mar, mod;
fflush(stdin);
cout<<"ingrese la marca:";
getline(cin,mar);
cout<<"ingrese el modelo:";
getline(cin,mod);
Automovil bas(mar, mod);


cout<<bas.getMarca()<<endl;
cout<<bas.getModelo()<<endl;
cout<<bas.getCantBocinas()<<endl;
cout<<bas.getCilindraje()<<endl;
cout<<bas.getTipoDir()<<endl;
}


void testInter(){

    cout<<"--------------------------"<<endl;
Automovil inter("kia", "k-250", 4);
cout<<inter.getMarca()<<endl;
cout<<inter.getModelo()<<endl;
cout<<inter.getCantBocinas()<<endl;
cout<<inter.getCilindraje()<<endl;
cout<<inter.getTipoDir()<<endl;

}


void testFull(){
cout<<"--------------------------"<<endl;
Automovil full("ford", "f-150", 8, false);

cout<<full.getMarca()<<endl;
cout<<full.getModelo()<<endl;
cout<<full.getCantBocinas()<<endl;
cout<<full.getCilindraje()<<endl;
cout<<full.getTipoDir()<<endl;

}


int main()
{
    testNinguno();
    testBasica();
    testInter();
    testFull();

    return 0;
}
