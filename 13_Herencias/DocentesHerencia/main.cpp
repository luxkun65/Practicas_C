#include <iostream>
using namespace std;

#include "DTC.h"
#include "DHC.h"

int main()
{
    DTC objTC;
    cout<<"Prueba de TC"<<endl;
    objTC.setNumID();
    objTC.setApellido();
    objTC.setNombre();
    objTC.setProfesion();
    objTC.setHorasInv();
    objTC.setSalario();

    cout<<objTC.getNumID()<<endl;
    cout<<objTC.getApellido()<<endl;
    cout<<objTC.getNombre()<<endl;
    cout<<objTC.getProfesion()<<endl;
    cout<<objTC.getHorasInv()<<endl;
    cout<<objTC.getSalario()<<endl;

    DHC objDH;
    cout<<"Prueba de DHC"<<endl;
    objDH.setNumID();
    objDH.setApellido();
    objDH.setNombre();
    objDH.setProfesion();
    objDH.setNivelEstudios();
    objDH.setHorasTrab();
    objDH.setSalario();

    cout<<objDH.getNumID()<<endl;
    cout<<objDH.getApellido()<<endl;
    cout<<objDH.getNombre()<<endl;
    cout<<objDH.getProfesion()<<endl;
    cout<<objDH.getNivelEstudios()<<endl;
    cout<<objDH.getHorasTrab()<<endl;
    cout<<objDH.getSalario()<<endl;

    return 0;
}
