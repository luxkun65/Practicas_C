#include<vector>
#include"Estudiante.h"
#include <iostream>

using namespace std;

//Definicon de funciones
void menu();
void ingresar();
void listadoGeneral();
void listado_x_plan();
/////////////////

vector <Estudiante> vecEstudiantes;

//implementacion de funciones

void ingresar(){
Estudiante obj;
cout<<"\nIngreso de nuevo estudiante\n";
cout<<"-----------------------------\n\n";
obj.setCodigo();
obj.setCodPlan();
obj.setNombre();
obj.setApellido();
obj.setNotas(0);
obj.setNotas(1);
obj.setNotas(2);
obj.setNotas(3);

vecEstudiantes.push_back(obj);
}

void listadoGeneral(){

if(vecEstudiantes.size() > 0){
    Estudiante tmp;
    cout<<"Listado general\n\n";
    for(int i=0; i<vecEstudiantes.size(); i++){

        tmp=vecEstudiantes[i];
        //cout<<tmp.getCodigo()<<" "<<tmp.getNombre()<<endl;
        cout<<"\n"<<tmp.toString()<<"\n"<<endl;
    }
    }else{

        cout<<"\nNo existen estudiantes en el sistema\n\n";
    }

}


void listado_x_plan(){

if(vecEstudiantes.size() > 0){
    Estudiante tmp;
    cout<<"Listado por plan\n\n";
    long codPlanAsk;
    bool existe=false;
    cout<<"Ingrese el codigo del plan a buscar:";
    cin>>codPlanAsk;

    for(int i=0; i<vecEstudiantes.size(); i++){

        tmp=vecEstudiantes[i];

        if(tmp.getCodPlan()== codPlanAsk){

            existe = true;
            cout<<"\n"<<tmp.toString()<<"\n"<<endl;

        }

    }
    if(!existe){
        cout<<"No esxisten estudiantes en el plan "<<codPlanAsk<<"\n\n";

    }
    }else{

        cout<<"\nNo existen estudiantes en el sistema\n\n";
    }

}



void menu(){
int opc;
do{
    cout<<"1.Ingresar nuevo estudiante\n";
    cout<<"2.Listado generar\n";
    cout<<"3.listado por plan\n";
    cout<<"0. Salir\n";
    cout<<"Seleccione una opcion\n";
    cin>>opc;
    switch(opc){
        case 1: ingresar(); break;
        case 2: listadoGeneral(); break;
        case 3: listado_x_plan(); break;
        case 0:break;
        default: cout<<"Opcion incorrecta\n\n";

    }
    system("pause");
    system("CLS");

}while(opc != 0);

}

int main()
{

    menu();
    return 0;
}
