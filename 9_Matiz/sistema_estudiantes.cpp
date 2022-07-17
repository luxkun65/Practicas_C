/*
Implementar una aplicación en C++ que permita almacenar los datos para n estudiantes.
n es ingresado por el usuario.

Por cada estudiante se deben almacenar los siguientes datos:
- Código estudiantil
- Código del plan
- Apellidos
- Nombres
- Notas: 2 parciales, proyecto final y definitiva
- Letra 'A' o 'R' por cada parcial
- Asistencia por cada parcial

El código estudiantil y del plan se almacenan en una matriz de tipo long de tamaño n x 2
El Apellido y el nombre en una matriz de tipo string de tamaño n x 2
Las notas en una matriz de tipo double de tamaño n x 4
La letra de calificación (‘A’ => Aprobo, ‘R’ => Reprobo) por cada parcial en una matriz de tipo
char de tamaño n x 2
La asistencia por cada parcial (true o false) en una matriz de tipo bool de tamaño n x 2

En este caso solo es necesario solicitar el valor de n que representa la cantidad de filas de las
matrices. Es decir la cantidad de estudiantes.
*/

#include<iostream>
using namespace std;

long **codigos;//para almacenar el código estudiantil y del plan
string **nombres;//para almacenar el apellido y el nombre
double **notas;//para almacenar notas de los 2 parciales, proyecto final y definitiva
char **letra_calif;//para almacenar la calificación (‘A’ => Aprobo, ‘R’ => Reprobo) por cada parcial
bool **asistencia;//para almacenar la asistencia por cada parcial (true o false)

int cant_est;

void crear_matrices(){
    codigos = new long *[cant_est];//crear la cantidad filas (cantidad de estudiantes)
    for(int f = 0; f < cant_est; f++) {
       codigos[f] = new long[2];//crear la cantidad columnas (codigo estudiantil y codigo del plan)
    }

    nombres = new string *[cant_est];//crear la cantidad filas (cantidad de estudiantes)
    for(int f = 0; f < cant_est; f++) {
       nombres[f] = new string[2];//crear la cantidad columnas (apellidos y nombres)
    }

    notas = new double *[cant_est];//crear la cantidad filas (cantidad de estudiantes)
    for(int f = 0; f < cant_est; f++) {
       notas[f] = new double[4];//crear la cantidad columnas (3 parcial y la definitiva)
    }

    letra_calif = new char *[cant_est];//crear la cantidad filas (cantidad de estudiantes)
    for(int f = 0; f < cant_est; f++) {
       letra_calif[f] = new char[3];//crear la cantidad columnas (letra de calificación por cada parcial)
    }

    asistencia = new bool *[cant_est];//crear la cantidad filas (cantidad de estudiantes)
    for(int f = 0; f < cant_est; f++) {
       asistencia[f] = new bool[3];//crear la cantidad columnas (asistencia por cada parcial)
    }
}

void limpiar_matrices(){
    for(int f = 0; f < cant_est; f++){
        for(int c = 0; c < 2; c++){
            codigos[f][c] = 0;
        }
    }

    for(int f = 0; f < cant_est; f++){
        for(int c = 0; c < 4; c++){
            notas[f][c] = 0.0;
        }
    }

    for(int f = 0; f < cant_est; f++){
        for(int c = 0; c < 3; c++){
            letra_calif[f][c] = ' ';
        }
    }

    for(int f = 0; f < cant_est; f++){
        for(int c = 0; c < 3; c++){
            asistencia[f][c] = false;
        }
    }
}

void leer_cantidad_estudiantes(){
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>cant_est;

    crear_matrices();
    limpiar_matrices();
    cout<<endl;
}

void leer_datos(){
    int asis;//para leer la asistencia a los parciales

    for(int f = 0; f < cant_est; f++){
        cout<<"**** Datos del estudiante "<<f+1<<" ****\n\n";

        cout<<"Ingrese el codigo estudiantil: ";
        cin>>codigos[f][0];

        fflush(stdin);//limpiar el bufer de lectura. Es recomendable antes de leer un caracter o cadena
        cout<<"Ingrese el apellido(s): ";
        getline(cin, nombres[f][0]);
        cout<<"Ingrese el nombre(s): ";
        getline(cin, nombres[f][1]);

        cout<<"Ingrese el codigo del plan: ";
        cin>>codigos[f][1];

        for(int c = 0; c < 3; c++){

            cout<<"Ingrese la asistencia al parcial "<<c+1<<" (1-> Asistio, 2-> No asistio): ";
            cin>>asis;
            if(asis == 1) asistencia[f][c] = true;
            else asistencia[f][c] = false;

            cout<<"Ingrese la nota del parcial "<<c+1<<": ";
            cin>>notas[f][c];

            if(notas[f][c] >= 2.95) letra_calif[f][c] = 'A';
            else letra_calif[f][c] = 'R';
        }
        notas[f][3] = (notas[f][0] * 0.3) + (notas[f][1] * 0.3) + (notas[f][2] * 0.4);

        cout<<"\n";
    }
}

void listado(){
    for(int f = 0; f < cant_est; f++){
        cout<<"**** Datos del estudiante "<<f+1<<" ****\n\n";
        cout<<"Codigo estudiantil: "<<codigos[f][0]<<"\n";
        cout<<"Nombre: "<<nombres[f][0]<<" "<<nombres[f][1]<<"\n";
        cout<<"Codigo del plan: "<<codigos[f][1]<<"\n";
        for(int c = 0; c < 3; c++){
            cout<<"Nota del parcial "<<c+1<<": "<<notas[f][c]<<" ";
            cout<<letra_calif[f][c]<<" "<<asistencia[f][c]<<" (1 -> Si, 0 -> No)\n";
        }
        cout<<"Definitiva = "<<notas[f][3]<<"\n\n";
    }
}

void menu(){
    int opc;
    do{
        cout<<"1. Leer cantidad de estudiantes"<<endl;
        cout<<"2. Ingresar datos"<<endl;
        cout<<"3. Listado"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;

        cout<<endl;

        switch(opc){
            case 1: leer_cantidad_estudiantes(); break;
            case 2: leer_datos(); break;
            case 3: listado(); break;
            case 0: break;
            default: cout<<"Opcion incorrecta"<<endl<<endl;
        }
    }while(opc != 0);
}

int main(){
    menu();
    system("pause");
    return 0;
}



