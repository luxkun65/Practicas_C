#include<iostream>
#include<fstream>
#include<sstream>
using namespace::std;

//declaracion de prototipos de metodos
void crear_cliente();
void listado_general();
void menu();

//implementacion de metodos
void crear_cliente(){
    ofstream archivo("clientes.csv", ios::app);
    if(!archivo){
        cout<<"Error al crear el archivo 'clientes.csv'"<<endl;
    }else{
        long num_id;
        string ape, nom, ciudad, correo;
        int estado;
        cout<<"Ingrese el numero de ID: ";
        cin>>num_id;
        fflush(stdin);//limpiar el buffer de lectura
        cout<<"Ingrese el apellido: ";
        getline(cin, ape);
        cout<<"Ingrese el nombre: ";
        getline(cin, nom);
        cout<<"Ingrese la ciudad de residencia: ";
        getline(cin, ciudad);
        cout<<"Ingrese el correo electronico: ";
        getline(cin, correo);
        cout<<"Afiliado? [1 = Esta afiliado, 0 = No esta afiliado]: ";
        cin>>estado;

        archivo<<num_id<<";"<<ape<<";"<<nom<<";"<<ciudad<<";"<<
                 correo<<";"<<estado<<endl;
        archivo.close();

        cout<<"Se ingreso con exito el cliente"<<endl<<endl;
    }
}

void listado_general(){
    ifstream archivo("clientes.csv", ios::in);
    if(!archivo){
        cout<<"Error en tratar de abrir el archivo 'clientes.csv'"<<endl<<endl;
    }else{
        string registro;
        string num_id, ape, nom, ciudad, correo, estado;
        while(getline(archivo, registro)){
            //cout<<registro<<endl;
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, ape, ';');
            getline(token, nom, ';');
            getline(token, ciudad, ';');
            getline(token, correo, ';');
            getline(token, estado, ';');

            cout<<num_id<<endl;
            cout<<ape<<" "<<nom<<endl;
            cout<<ciudad<<" "<<correo<<endl;
            cout<<estado<<endl<<endl;
        }
        archivo.close();
    }
}

void menu(){
    int opc;
    do{
        cout<<"Menu de opciones"<<endl;
        cout<<"1. Crear cliente"<<endl;
        cout<<"2. Listado general de clientes"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;
        switch(opc){
            case 1: crear_cliente(); break;
            case 2: listado_general(); break;
            case 0: break;
            default: cout<<"Opcion incorrecta"<<endl<<endl;
        }
    }while(opc != 0);
}

int main(){
    menu();
    return 0;
}

