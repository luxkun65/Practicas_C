#include<iostream>
using namespace::std;
#include<vector>
#include"ClienteBanco.h"
#include"utils.h"

vector<ClienteBanco> vec;

/*void pausa(){
    system("pause");
    system("cls");
}

void titulo(string texto){
    int longitud = texto.length();
    cout<<texto<<endl;
    for(int i = 0; i < longitud; i++) cout<<"-";
    cout<<endl<<endl;
}*/

void ingresar()
{
    system("cls");
    ClienteBanco tmp;
    titulo("Ingresar un nuevo cliente");
    tmp.setNumID();
    tmp.setApellido();
    tmp.setNombre();
    tmp.setNumCuenta();
    vec.push_back(tmp);
    cout<<endl;
    pausa();
}

void listar()
{
    system("cls");
    ClienteBanco tmp;
    string tit = "Listado General de clientes - [" + to_string(vec.size()) + "]";
    titulo(tit);

    for(int i = 0; i < vec.size(); i++)
    {
        cout<<"Datos del cliente # "<<(i+1)<<endl;
        tmp = vec.at(i);
        cout <<tmp.getNumID()<<" "<<tmp.getApellido()<<" "<<
             tmp.getNombre()<<" "<<tmp.getNumCuenta()<<endl<<endl;
    }
    pausa();
}

void consultar_x_ID(){
    system("cls");
    bool existe = false;
    ClienteBanco obj;
    long id;
    titulo("Consulta de cliente x ID");
    cout<<"Ingrese el numero de identificación: ";
    cin>>id;
    cout<<endl<<endl;

    for(int i = 0; i < vec.size(); i++){
        //obj = vec.at(i);
        obj = vec[i];
        if(obj.getNumID() == id){
            existe = true;
            cout<<"Datos del cliente"<<endl;
            cout <<obj.getNumID()<<" "<<obj.getApellido()<<" "<<
                 obj.getNombre()<<" "<<obj.getNumCuenta()<<endl<<endl;
            pausa();
            break;
        }
    }
    if(!existe){
        cout<<"El cliente con numero de identificación "<<id<<" no existe."<<endl<<endl;
        pausa();
    }
}

void eliminar_x_ID(){
    system("cls");
    bool existe = false;
    ClienteBanco obj;
    long id;
    titulo("Eliminar cliente x ID");
    cout<<"Ingrese el numero de identificación: ";
    cin>>id;
    cout<<endl<<endl;

    for(int i = 0; i < vec.size(); i++){
        obj = vec.at(i);
        if(obj.getNumID() == id){
            existe = true;
            cout<<"Datos del cliente"<<endl;
            cout <<obj.getNumID()<<" "<<obj.getApellido()<<" "<<
                 obj.getNombre()<<" "<<obj.getNumCuenta()<<endl<<endl;

            vec.erase(vec.begin()+i);

            pausa();
            break;
        }
    }
    if(!existe){
        cout<<"El cliente con numero de identificación "<<id<<" no existe."<<endl<<endl;
        pausa();
    }
}

void modificar_x_ID(){
    system("cls");
    bool existe = false;
    ClienteBanco obj;
    long id;
    titulo("Modificar cliente x ID");
    cout<<"Ingrese el numero de identificación: ";
    cin>>id;
    cout<<endl<<endl;

    for(int i = 0; i < vec.size(); i++){
        obj = vec.at(i);
        if(obj.getNumID() == id){
            existe = true;
            cout<<"Datos actuales del cliente"<<endl;
            cout <<obj.getNumID()<<" "<<obj.getApellido()<<" "<<
                 obj.getNombre()<<" "<<obj.getNumCuenta()<<endl<<endl;

            cout<<"Nuevos datos del cliente"<<endl<<endl;
            obj.setNumID();
            obj.setApellido();
            obj.setNombre();
            obj.setNumCuenta();

            vec[i] = obj;

            pausa();
            break;
        }
    }
    if(!existe){
        cout<<"El cliente con numero de identificación "<<id<<" no existe."<<endl<<endl;
        pausa();
    }
}

void menu()
{
    int opc;
    do
    {
        titulo("Menu Gestión de Clientes");
        cout<<"1. Ingresar nuevo cliente"<<endl;
        cout<<"2. Listar clientes"<<endl;
        cout<<"3. Consultar cliente x ID"<<endl;
        cout<<"4. Eliminar cliente x ID"<<endl;
        cout<<"5. Modificar cliente x ID"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opción: ";
        cin>>opc;
        switch(opc)
        {
        case 1: ingresar();break;
        case 2: listar(); break;
        case 3: consultar_x_ID();break;
        case 4: eliminar_x_ID();break;
        case 5: modificar_x_ID();break;
        case 0: break;
        default: cout<<endl<<"Opción incorrecta"<<endl;
                pausa();
        }
    }
    while(opc != 0);
}

int main()
{
    menu();
    return 0;
    return 0;
}
