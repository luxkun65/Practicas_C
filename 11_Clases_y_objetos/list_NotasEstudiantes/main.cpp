#include <iostream>
using namespace std;
#include<list>

#include"Estudiante.h"

list <Estudiante> listEstudiantes;

void leerDatos();
void imprimirDatos();

void leerDatos(){
    Estudiante obj;
    //int n = vecEstudiantes.size();
    for(int i = 0; i < 2; i++){
        obj.setCodEstudiantil();
        obj.setApellido();
        obj.setNombre();
        obj.setCodPlan();
        obj.setNotas();
        obj.setDefinitiva();
        listEstudiantes.push_back(obj);
    }
}

void imprimirDatos(){
    Estudiante obj;
    list<Estudiante>::iterator it ;
    int i = 1;
    for(it = listEstudiantes.begin(); it != listEstudiantes.end(); ++it){
        cout<<"Datos del estudiante # "<<i<<endl<<endl;

        obj = *it;

        cout<<"Cod Estudiantil: "<<
            obj.getCodEstudiantil()<<endl;
        cout<<"Apellido: "<<
            obj.getApellido()<<endl;
        cout<<"Nombre: "<<
            obj.getNombre()<<endl;
        cout<<"Cod Plan: "<<
            obj.getCodPlan()<<endl;
        for(int j = 0; j < 3; j++){
            cout<<"Parcial # "<<(j+1)<<": "<<
              obj.getNota(j)<<endl;
        }
        cout<<"Definitiva: "<<obj.getNota(3)<<
            endl<<endl;

        i++;
    }
}

int main()
{
    leerDatos();
    imprimirDatos();
    system("pause");
    return 0;
}
