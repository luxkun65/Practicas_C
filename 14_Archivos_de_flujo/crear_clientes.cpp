#include<iostream>
#include<fstream>
using namespace::std;

//declaracion de prototipos de metodos
void crear_cliente();
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

void menu(){
    int opc;
    do{
        cout<<"Menu de opciones"<<endl;
        cout<<"1. Crear cliente"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;
        switch(opc){
            case 1: crear_cliente(); break;
            case 0: break;
            default: cout<<"Opcion incorrecta"<<endl<<endl;
        }
    }while(opc != 0);
}

int main(){
    menu();
    return 0;
}

