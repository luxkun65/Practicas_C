#include<iostream>
using namespace::std;//cout, cin, endl
#include<stdlib.h>//srand(), rand()
#include<time.h>//time

int **mat;
int *arreglo;
int cant_f, cant_c;
long suma = 0;

void leer_tam();
void limpiar();
void leer_mat();
void llenar();
void sumatoria();

void leer_tam(){
    cout<<"Ingrese la cantidad de filas:";
    cin>>cant_f;
    cout<<"Ingrese la cantidad de columnas:";
    cin>>cant_c;

    mat = new int *[cant_f];
    for(int f = 0; f < cant_f; f++){
        mat[f] = new int[cant_c];
    }
    limpiar();
}

void limpiar(){
    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            mat[f][c] = 0;
        }
    }
}

void imprimir(){
   for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            cout<<mat[f][c]<<" ";
        }
        cout<<endl;//cout<<"\n";
    }
}

void leer_mat(){
    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            cout<<"Ingrese mat["<<f<<"]["<<c<<"] = ";
            cin>>mat[f][c];
        }
    }
}

void llenar(){
    srand(time(NULL));
    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            mat[f][c] = 1 + rand() % 100;
        }
    }
}

void sumatoria(){

    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            suma+=mat[f][c];//suma = suma + mat[f][c];
        }
    }
    cout<<"Sumatoria = "<<suma<<endl;
}

void promedio(){
    double prom = (double)suma / (double)(cant_f*cant_c);
    cout<<"Promedio = "<<prom<<"\n";
}

void maximo(){
    int max_pivote = mat[0][0];
    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            if(max_pivote < mat[f][c]) max_pivote = mat[f][c];
        }
    }
    cout<<"El numero mayor es = "<<max_pivote<<endl;
}

void minimo(){
    int min_pivote = mat[0][0];
    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            if(min_pivote > mat[f][c]) min_pivote = mat[f][c];
        }
    }
    cout<<"El numero menor es = "<<min_pivote<<endl;
}

void frecuencia(){//Punto 2
    int buscar = 0, cont = 0;
    cout<<"Ingrese el valor a buscar: ";
    cin>>buscar;
    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            if(buscar == mat[f][c]){
                cont++;
            }
        }
    }
    cout<<"El valor "<<buscar<<" esta "<<cont<<" veces\n";
}

void reemplazar(){//Punto 3
    int buscar, reemplazo;
    cout<<"Ingrese el valor a buscar: ";
    cin>>buscar;
    cout<<"Ingrese el valor por el cual se reemplazara: ";
    cin>>reemplazo;
    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            if(buscar == mat[f][c]){
                mat[f][c] = reemplazo;
            }
        }
    }
}

void llenar_arreglo(){//Punto 20
    arreglo = new int[cant_f * cant_c];
    int i = 0;

    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            arreglo[i] = mat[f][c];
            i++;
        }
    }

    for(i = 0; i < cant_f * cant_c; i++){
        cout<<"arreglo["<<i<<"] = "<<arreglo[i]<<endl;
    }
    cout<<endl;
}

void suma_filas(){//Punto 21
    arreglo = new int[cant_f];
    int i = 0, suma = 0;

    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
            suma+=mat[f][c];
        }
        arreglo[i] = suma;
        suma = 0;
        i++;
    }

    for(i = 0; i < cant_f; i++){
        cout<<"arreglo["<<i<<"] = "<<arreglo[i]<<endl;
    }
    cout<<endl;
}

void frecuencia_filas(){//Punto 31
    arreglo = new int[cant_f];
    int i = 0, cont = 0;
    int buscar;
    cout<<"Ingrese el valor a buscar: ";
    cin>>buscar;

    for(int f = 0; f < cant_f; f++){
        for(int c = 0; c < cant_c; c++){
           if(buscar == mat[f][c]) cont++;
        }
        arreglo[i] = cont;
        cont = 0;
        i++;
    }

    for(i = 0; i < cant_f; i++){
        cout<<"arreglo["<<i<<"] = "<<arreglo[i]<<endl;
    }
    cout<<endl;
}

int main(){
    leer_tam();
    //leer_mat();
    llenar();
    imprimir();
    sumatoria();
    promedio();
    maximo();
    minimo();
    frecuencia();

    reemplazar();
    imprimir();

    llenar_arreglo();

    suma_filas();

    frecuencia_filas();

    return 0;
}

