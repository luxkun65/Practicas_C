#include<iostream>
#include<fstream>
#include<sstream>
using namespace::std;
#include<bits/stdc++.h>

//declaracion de prototipos de metodos
void crear_cliente();
void listado_general();
void menu();
void buscar_x_num_id();
void buscar_x_ciudad();
void buscar_x_ciudad_estado();
int getFrecuencia(string);
void modificar();

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
        if(getFrecuencia(to_string(num_id)) == 0){
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
        }else cout<<"El cliente con numero de ID "<<num_id<<" ya existe en el archivo"<<endl<<endl;
    }
}

int getFrecuencia(string num_id_buscar){
    int cont = 0;
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

            if(num_id_buscar.compare(num_id) == 0) cont++;
        }//fin del while
        archivo.close();
    }
    return cont;
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

void buscar_x_num_id(){
    ifstream archivo("clientes.csv", ios::in);
    if(!archivo){
        cout<<"Error en tratar de abrir el archivo 'clientes.csv'"<<endl<<endl;
    }else{
        string registro;
        string num_id, ape, nom, ciudad, correo, estado;
        string numid_buscar;
        cout<<"Ingrese el numero de ID a buscar: ";
        cin>>numid_buscar;
        bool existe = false;

        while(getline(archivo, registro)){
            //cout<<registro<<endl;
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, ape, ';');
            getline(token, nom, ';');
            getline(token, ciudad, ';');
            getline(token, correo, ';');
            getline(token, estado, ';');

            if(numid_buscar.compare(num_id) == 0){
                existe = true;
                cout<<num_id<<endl;
                cout<<ape<<" "<<nom<<endl;
                cout<<ciudad<<" "<<correo<<endl;
                cout<<estado<<endl<<endl;
            }
        }//fin del while
        archivo.close();
        if(!existe){//if(existe == false)
            cout<<"El cliente con numero de ID "<<numid_buscar<<
                  " no existe en el archivo"<<endl<<endl;
        }
    }
}

void modificar(){
    ifstream archivo("clientes.csv", ios::in);
    if(!archivo){
        cout<<"Error en tratar de abrir el archivo 'clientes.csv'"<<endl<<endl;
    }else{
        vector<string> all_registros;
        string registro;
        string num_id, ape, nom, ciudad, correo, estado;
        string numid_buscar;
        cout<<"Ingrese el numero de ID a buscar: ";
        cin>>numid_buscar;
        bool existe = false, modifico = false;
        int opc = 0;

        while(getline(archivo, registro)){
            //cout<<registro<<endl;
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, ape, ';');
            getline(token, nom, ';');
            getline(token, ciudad, ';');
            getline(token, correo, ';');
            getline(token, estado, ';');

            if(numid_buscar.compare(num_id) == 0){
                existe = true;
                cout<<"Datos actuales del cliente"<<endl;
                cout<<"Numero de ID = "<<num_id<<endl;
                cout<<"1. Apellido = "<<ape<<endl;
                cout<<"2. Nombre = "<<nom<<endl;
                cout<<"3. Ciudad = "<<ciudad<<endl;
                cout<<"4. Correo = "<<correo<<endl;
                cout<<"5. Estado = "<<estado<<endl;
                cout<<"0. Ninguno"<<endl;
                do{
                    cout<<"Seleccione el campo a modificar: ";
                    cin>>opc;
                }while(opc < 0 || opc > 5);

                fflush(stdin);

                switch(opc){
                    case 1: modifico = true;
                            cout<<"Ingrese el nuevo apellido: ";
                            getline(cin, ape);
                            break;
                    case 2: modifico = true;
                            cout<<"Ingrese el nuevo nombre: ";
                            getline(cin, nom);
                            break;
                    case 3: modifico = true;
                            cout<<"Ingrese la nueva ciudad: ";
                            getline(cin, ciudad);
                            break;
                    case 4: modifico = true;
                            cout<<"Ingrese el nuevo correo: ";
                            getline(cin, correo);
                            break;
                    case 5: modifico = true;
                            cout<<"Ingrese el estado [1 -> Afiliado, 0 -> No afiliado]: ";
                            getline(cin, estado);
                            break;
                }
                all_registros.push_back(num_id + ";" + ape + ";" + nom + ";" + ciudad + ";" + correo + ";" + estado);
            }else all_registros.push_back(registro);
        }//fin del while

        archivo.close();

        if(existe){//if(existe == true)
            if(modifico){
                ofstream nuevo("clientes.csv");
                for(int i = 0; i < int(all_registros.size()); i++){
                    nuevo<<all_registros[i]<<endl;
                }
                nuevo.close();
                cout<<"Se modifico el cliente"<<endl<<endl;
            }
        }else{
            cout<<"El cliente con numero de ID "<<numid_buscar<<
                  " no existe en el archivo"<<endl<<endl;
        }
    }
}

void buscar_x_ciudad(){
    ifstream archivo("clientes.csv", ios::in);
    if(!archivo){
        cout<<"Error en tratar de abrir el archivo 'clientes.csv'"<<endl<<endl;
    }else{
        string registro;
        string num_id, ape, nom, ciudad, correo, estado;
        string ciudad_buscar;
        fflush(stdin);
        cout<<"Ingrese la ciudad a buscar: ";
        getline(cin, ciudad_buscar);
        bool existe = false;

        transform(ciudad_buscar.begin(), ciudad_buscar.end(),
                  ciudad_buscar.begin(), ::toupper);//convertir ciudad_buscar a mayusculas. tolower

        while(getline(archivo, registro)){
            //cout<<registro<<endl;
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, ape, ';');
            getline(token, nom, ';');
            getline(token, ciudad, ';');
            getline(token, correo, ';');
            getline(token, estado, ';');

            transform(ciudad.begin(), ciudad.end(),
                  ciudad.begin(), ::toupper);

            if(ciudad_buscar.compare(ciudad) == 0){
                existe = true;
                cout<<num_id<<endl;
                cout<<ape<<" "<<nom<<endl;
                cout<<ciudad<<" "<<correo<<endl;
                cout<<estado<<endl<<endl;
            }
        }//fin del while
        archivo.close();
        if(!existe){//if(existe == false)
            cout<<"No existen clientes con ciudad de residencia "<<ciudad_buscar<<
                  " en el archivo"<<endl<<endl;
        }
    }
}

void buscar_x_ciudad_estado(){
    ifstream archivo("clientes.csv", ios::in);
    if(!archivo){
        cout<<"Error en tratar de abrir el archivo 'clientes.csv'"<<endl<<endl;
    }else{
        string registro;
        string num_id, ape, nom, ciudad, correo, estado;
        string ciudad_buscar, estado_buscar;
        fflush(stdin);
        cout<<"Ingrese la ciudad a buscar: ";
        getline(cin, ciudad_buscar);
        cout<<"Ingrese el estado a buscar [1 = Afiliado, 0 = No afiliado]: ";
        cin>>estado_buscar;
        bool existe = false;

        transform(ciudad_buscar.begin(), ciudad_buscar.end(),
                  ciudad_buscar.begin(), ::toupper);//convertir ciudad_buscar a mayusculas. tolower

        while(getline(archivo, registro)){
            //cout<<registro<<endl;
            stringstream token(registro);

            getline(token, num_id, ';');
            getline(token, ape, ';');
            getline(token, nom, ';');
            getline(token, ciudad, ';');
            getline(token, correo, ';');
            getline(token, estado, ';');

            transform(ciudad.begin(), ciudad.end(),
                  ciudad.begin(), ::toupper);

            if(ciudad_buscar.compare(ciudad) == 0 &&
                estado_buscar.compare(estado) == 0){
                existe = true;
                cout<<num_id<<endl;
                cout<<ape<<" "<<nom<<endl;
                cout<<ciudad<<" "<<correo<<endl;
                cout<<estado<<endl<<endl;
            }
        }//fin del while
        archivo.close();
        if(!existe){//if(existe == false)
            cout<<"No existen clientes con ciudad de residencia "<<ciudad_buscar<<
                  "y estado "<<estado_buscar <<" en el archivo"<<endl<<endl;
        }
    }
}

void menu(){
    int opc;
    do{
        cout<<"Menu de opciones"<<endl;
        cout<<"1. Crear cliente"<<endl;
        cout<<"2. Listado general de clientes"<<endl;
        cout<<"3. Consultar x numero de ID"<<endl;
        cout<<"4. Consultar x ciudad de residencia"<<endl;
        cout<<"5. Consultar x ciudad de residencia y estado"<<endl;
        cout<<"6. Modificar cliente x numero de ID"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;
        switch(opc){
            case 1: crear_cliente(); break;
            case 2: listado_general(); break;
            case 3: buscar_x_num_id(); break;
            case 4: buscar_x_ciudad(); break;
            case 5: buscar_x_ciudad_estado(); break;
            case 6: modificar(); break;
            case 0: break;
            default: cout<<"Opcion incorrecta"<<endl<<endl;
        }
    }while(opc != 0);
}

int main(){
    menu();
    return 0;
}

