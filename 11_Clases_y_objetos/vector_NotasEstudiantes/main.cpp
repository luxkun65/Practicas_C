#include <iostream>
using namespace std;
#include<vector>

#include"Estudiante.h"

vector <Estudiante> vecEstudiantes;

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
        vecEstudiantes.push_back(obj);
    }
}

void imprimirDatos(){
    Estudiante obj;
    int n = vecEstudiantes.size();
    for(int i = 0; i < n; i++){
        cout<<"Datos del estudiante # "<<(i+1)<<endl<<endl;

        obj = vecEstudiantes.at(i);

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
    }
}

int main()
{
    leerDatos();
    imprimirDatos();
    system("pause");
    return 0;
}
