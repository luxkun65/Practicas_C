#include<vector>
#include"Estudiante.h"
#include <iostream>

using namespace std;

//Definicon de funciones
void menu();
void subMenu();
void subMenuCons();
void ingresar();
void listadoGeneral();
void listado_x_plan();
void acerca();
void datos_x_cod();
void cant_aprob_reprob();
void prom_generales();
void cant_ap_rep_x_plan();
void histograma();
/////////////////

vector <Estudiante> vecEstudiantes;

//implementacion de funciones


//  MENU PRINCIPAL  //
//////////////////////////////////////////////////////////
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

void acerca(){

system("CLS");
cout<<"         Autor 1"<<endl;
cout<<"Jhon Stiven Rodas Fernandez\n";
cout<<"         codigo"<<endl;
cout<<"       202159954\n";
cout<<"   correo institucional\n";
cout<<"rodas.jhon@correounivalle.edu.co\n\n";


cout<<"        Autor 2"<<endl;
cout<<"Miguel Angel Escobar Velez\n";
cout<<"         codigo"<<endl;
cout<<"       202159832\n";
cout<<"   correo institucional\n";
cout<<"miguel.escobar.velez@correounivalle.edu.co\n\n";


}



//  SUBMENU //
///////////////////////////////////////////////////////////////
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




// SUBMENU CONSULTAS    //
/////////////////////////////////////////////////////////////


void datos_x_cod(){
system("CLS");

if(vecEstudiantes.size() > 0){
    Estudiante tmp;
    cout<<"Consulta por codigo\n\n";
    long codEstBuscar;
    bool existe=false;
    cout<<"Ingrese el codigo del estudiante a buscar:";
    cin>>codEstBuscar;

    for(int i=0; i<vecEstudiantes.size(); i++){

        tmp=vecEstudiantes[i];

        if(tmp.getCodigo()== codEstBuscar){

            existe = true;
            cout<<"\n"<<tmp.toString()<<"\n"<<endl;

        }

    }
    if(!existe){
        cout<<"No se encuentra el estudiante con codigo "<<codEstBuscar<<"\n\n";

    }
    }else{

        cout<<"\nNo existen estudiantes en el sistema\n\n";
    }
}

void cant_aprob_reprob(){
system("CLS");
    long cantAprob = 0;
    long cantReprob = 0;
    if(vecEstudiantes.size() > 0){
    Estudiante tmp;
    cout<<"Cantidad de estudiantes que aprobaron\n\n";
    bool existeAprob = false;
    bool existeReprob = false;
    for(int i=0; i<vecEstudiantes.size(); i++){

        tmp=vecEstudiantes[i];

        if(tmp.getNotas(3)>= 3.0){
            existeAprob = true;
            cantAprob++;
        }else{
            existeReprob = true;
            cantReprob++;
        }

    }
    if(!existeAprob){
        cout<<"No se encuentran estudiantes aprobados\n\n";

    }else{
        cout<<"La cantidad de estudiantes que aprobaron: "<<cantAprob<<endl;
    }
    if(!existeReprob){
        cout<<"No se encuentran estudiantes reprobados\n\n";
    }else{
        cout<<"La cantidad de estudiantes que Reprobaron: "<<cantReprob<<endl;
    }
    }else{
        cout<<"\nNo existen estudiantes en el sistema\n\n";
    }

}

void prom_generales(){
system("CLS");
    if(vecEstudiantes.size() > 0){
    Estudiante tmp;
    long cantAprob = 0;
    long cantReprob = 0;
    long cantEstud = 0;
    double promGeneral = 0;
    double notaGeneral = 0;
    double notaAprobados = 0;
    double notaReprobados = 0;
    double promAprob = 0;
    double promReprob = 0;
    bool existeAprob = false;
    bool existeReprob = false;
    cout<<"Promedios generales\n\n";
    for(int i=0; i<vecEstudiantes.size(); i++){

        tmp=vecEstudiantes[i];

        notaGeneral += tmp.getNotas(3);
        cantEstud++;
        if(tmp.getNotas(3)>= 3.0){
            existeAprob = true;
            cantAprob++;
            notaAprobados += tmp.getNotas(3);

        }else{
            existeReprob = true;
            cantReprob++;
            notaReprobados += tmp.getNotas(3);
        }

    }
    promGeneral = notaGeneral / cantEstud;
    promAprob = notaAprobados / cantAprob;
    promReprob = notaReprobados / cantReprob;
    if(!existeAprob){
        cout<<"No se encuentran estudiantes aprobados\n\n";
        promAprob = 0;
    }
    if(!existeReprob){
        cout<<"No se encuentran estudiantes reprobados\n\n";
        promReprob = 0;
    }
    cout<<"Promedio general: "<<promGeneral<<"\n\n";
    cout<<"Promedio aprobados: "<<promAprob<<"\n\n";
    cout<<"Promedio reprobados: "<<promReprob<<"\n\n";
    }else{

        cout<<"\nNo existen estudiantes en el sistema\n\n";
    }

}

void cant_ap_rep_x_plan(){
system("CLS");
    if(vecEstudiantes.size() > 0){
    Estudiante tmp;
    cout<<"Listado aprobados y reprobados por plan\n\n";
    long codPlanBuscar;
    bool existeAprob=false;
    bool existeReprob=false;
    long cantAprobs = 0;
    long cantReprobs = 0;
    cout<<"Ingrese el codigo del plan a buscar: ";
    cin>>codPlanBuscar;
    cout<<"\n\n";
    for(int i=0; i<vecEstudiantes.size(); i++){
        tmp=vecEstudiantes[i];
        if(tmp.getCodPlan()== codPlanBuscar){
            if(tmp.getNotas(3) >= 3.0){
                existeAprob = true;
                cantAprobs++;
            }else{
                existeReprob = true;
                cantReprobs++;
            }
        }

    }
    if(!existeAprob){
        cout<<"No esxisten estudiantes aprobados en el plan #"<<codPlanBuscar<<"\n\n";

    }else{
        cout<<"Cantidad estudiantes aprobados: "<<cantAprobs<<"\n\n";
    }
    if(!existeReprob){
        cout<<"No esxisten estudiantes reprobados en el plan #"<<codPlanBuscar<<"\n\n";
    }else{
        cout<<"Cantidad estudiantes reprobados: "<<cantReprobs<<"\n\n";
    }
    }else{

        cout<<"\n\nNo existen estudiantes en el sistema\n\n";
    }

}



void histograma(){

  system("CLS");
    if(vecEstudiantes.size() > 0){
    Estudiante tmp;
    cout<<"Histograma de notas\n\n";
    int rango1 = 0;
    int rango2 = 0;
    int rango3 = 0;
    int rango4 = 0;
    char *arreglo1;
    char *arreglo2;
    char *arreglo3;
    char *arreglo4;
    for(int i=0; i<vecEstudiantes.size(); i++){

        tmp=vecEstudiantes[i];
        if(tmp.getNotas(3)>=0&&tmp.getNotas(3)<=1.9){
            rango1++;
        }
        if(tmp.getNotas(3)>=2.0&&tmp.getNotas(3)<=2.9){
            rango2++;
        }
        if(tmp.getNotas(3)>=3.0&&tmp.getNotas(3)<=3.9){
            rango3++;
        }
        if(tmp.getNotas(3)>=4.0&&tmp.getNotas(3)<=5.0){
            rango4++;
        }
    }
    arreglo1 = new char(rango1);
    arreglo2 = new char(rango2);
    arreglo3 = new char(rango3);
    arreglo4 = new char(rango4);

    for(int a = 0; a<rango1; a++){
        arreglo1[a] = ' ';
        }
    for(int b = 0; b<rango2; b++){
        arreglo2[b] = ' ';
        }
        for(int c = 0;c<rango3; c++){
        arreglo3[c] = ' ';
        }
    for(int d = 0; d<rango4; d++){
        arreglo4[d] = ' ';
        }
cout<<"Rango de notas 0.0 - 1.9: ";
    for(int h = 0; h<rango1; h++){
        arreglo1[h] = '*';
        cout<<arreglo1[h]<<" ";
    }cout<<"\n\n";


    cout<<"Rango de notas 2.0 - 2.9: ";
    for(int j = 0; j<rango2; j++){
        arreglo2[j] = '*';
        cout<<arreglo2[j]<<" ";
    }cout<<"\n\n";


    cout<<"Rango de notas 3.0 - 3.9: ";
    for(int k = 0; k<rango3; k++){
        arreglo3[k] = '*';
        cout<<arreglo3[k]<<" ";
    }cout<<"\n\n";


    cout<<"Rango de notas 4.0 - 5.0: ";
    for(int l = 0; l<rango4; l++){
        arreglo4[l] = '*';
        cout<<arreglo4[l]<<" ";
    }cout<<"\n\n";


    }else{


        cout<<"\nNo existen estudiantes en el sistema\n\n";
    }
}

//  MENUS   //
////////////////////////////////////////////////////////////////////

void subMenu(){
system("CLS");
int opc;
do{
    cout<<"1.Listado generar\n";
    cout<<"2.listado por plan\n";
    cout<<"3.Volver al menu principal\n";

    cout<<"Seleccione una opcion\n";
    cin>>opc;
    switch(opc){
        case 1: listadoGeneral(); break;
        case 2: listado_x_plan(); break;
        case 3: break;
        default: cout<<"Opcion incorrecta\n\n";

    }
     system("pause");
    system("CLS");

}while(opc != 3);

}


void subMenuCons(){
system("CLS");
int opc;
do{
    cout<<"1.Consulta por codigo estudiantil\n";
    cout<<"2.Consulta cantidad de aprobados y reprobados\n";
    cout<<"3.Nota Promedio general\n";
    cout<<"4.Consulta por plan cantidad de aprobados y reprobados\n";
    cout<<"5.Representacion de nota definitiva\n";
    cout<<"6.Volver al menu principal\n";

    cout<<"Seleccione una opcion\n";
    cin>>opc;
    switch(opc){
        case 1: datos_x_cod(); break;
        case 2: cant_aprob_reprob(); break;
        case 3: prom_generales(); break;
        case 4: cant_ap_rep_x_plan(); break;
        case 5: histograma(); break;
        case 6: break;
        default: cout<<"Opcion incorrecta\n\n";

    }
     system("pause");
    system("CLS");

}while(opc != 6);

}


void menu(){
system("CLS");
int opc;
do{
    cout<<"1.Ingresar nuevo estudiante\n";
    cout<<"2.Submenu listados\n";
    cout<<"3.Submenu consultas\n";
    cout<<"4.Acerca de...\n";
    cout<<"5.Salir\n";
    cout<<"Seleccione una opcion\n";
    cin>>opc;
    switch(opc){
        case 1: ingresar(); break;
        case 2: subMenu(); break;
        case 3: subMenuCons(); break;
        case 4: acerca();break;
        case 5:break;
        default: cout<<"Opcion incorrecta\n\n";

    }
    system("pause");
    system("CLS");

}while(opc != 5);

}



int main()
{

    menu();
    return 0;
}
