#include <iostream>
using namespace std;

#include"Estudiante.h"

Estudiante arregloEstudiantes[3];

void leerDatos();
void imprimirDatos();

void leerDatos(){
    for(int i = 0; i < 3; i++){
        arregloEstudiantes[i].setCodEstudiantil();
        arregloEstudiantes[i].setApellido();
        arregloEstudiantes[i].setNombre();
        arregloEstudiantes[i].setCodPlan();
        arregloEstudiantes[i].setNotas();
        arregloEstudiantes[i].setDefinitiva();
    }
}

void imprimirDatos(){
    for(int i = 0; i < 3; i++){
        cout<<"Datos del estudiante # "<<(i+1)<<endl<<endl;
        cout<<"Cod Estudiantil: "<<
            arregloEstudiantes[i].getCodEstudiantil()<<endl;
        cout<<"Apellido: "<<
            arregloEstudiantes[i].getApellido()<<endl;
        cout<<"Nombre: "<<
            arregloEstudiantes[i].getNombre()<<endl;
        cout<<"Cod Plan: "<<
            arregloEstudiantes[i].getCodPlan()<<endl;
        for(int j = 0; j < 3; j++){
            cout<<"Parcial # "<<(j+1)<<": "<<
              arregloEstudiantes[i].getNota(j)<<endl;
        }
        cout<<"Definitiva: "<<arregloEstudiantes[i].getNota(3)<<
            endl<<endl;
    }
}

int main()
{
    leerDatos();
    imprimirDatos();
    return 0;
}
