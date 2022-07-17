#include <iostream>
using namespace std;

#include"Automovil.h"

void defecto(){
    cout<<"defecto"<<endl;

    Automovil a1;
    cout<<a1.getMarca()<<endl;
    cout<<a1.getModelo()<<endl;
    cout<<a1.getCilindraje()<<endl;
    cout<<a1.getCantBocinas()<<endl;
    cout<<a1.getTipoDireccion()<<endl<<endl;
}

void basica(){
    cout<<"basica"<<endl;

    Automovil a2("HONDA", "XD-520");
    cout<<a2.getMarca()<<endl;
    cout<<a2.getModelo()<<endl;
    cout<<a2.getCilindraje()<<endl;
    cout<<a2.getCantBocinas()<<endl;
    cout<<a2.getTipoDireccion()<<endl<<endl;
}

void intermedia(){
    cout<<"intermedia"<<endl;

    Automovil a3("HONDA", "XD-560", 5);
    cout<<a3.getMarca()<<endl;
    cout<<a3.getModelo()<<endl;
    cout<<a3.getCilindraje()<<endl;
    cout<<a3.getCantBocinas()<<endl;
    cout<<a3.getTipoDireccion()<<endl<<endl;
}

void full(){
    cout<<"full"<<endl;

    Automovil a4("HONDA", "XD-600", 7, true);
    cout<<a4.getMarca()<<endl;
    cout<<a4.getModelo()<<endl;
    cout<<a4.getCilindraje()<<endl;
    cout<<a4.getCantBocinas()<<endl;
    cout<<a4.getTipoDireccion()<<endl<<endl;
}

int main()
{
    defecto();
    basica();
    intermedia();
    full();
    return 0;
}
