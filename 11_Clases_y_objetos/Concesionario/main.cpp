#include <iostream>
using namespace std;

#include"Cliente.h"
#include"Vehiculo.h"
#include"Fecha.h"

Cliente cl;
Vehiculo vh;

void testCliente(){
    cout<<"testCliente"<<endl<<endl;
    cl.setNumID();
    cl.setApellido();
    cl.setNombre();
    cl.setFechaNac();
    cout<<cl.getNumID()<<endl;
    cout<<cl.getApellido()<<endl;
    cout<<cl.getNombre()<<endl;
    cout<<cl.getFechaNac()<<endl<<endl;
}

void testVehiculo(){
    cout<<"testVehiculo"<<endl<<endl;
    vh.setMarca();
    vh.setModelo();
    vh.setFechaImporte();
    cout<<vh.getMarca()<<endl;
    cout<<vh.getModelo()<<endl;
    cout<<vh.getFechaImporte()<<endl<<endl;
}

int main()
{
    testCliente();
    testVehiculo();
    return 0;
}
