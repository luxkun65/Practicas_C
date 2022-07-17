#include<iostream>
using namespace::std;
#include<cstdlib>//srand(), rand()
#include<ctime>//time()

void llenarMatriz(int [][2]);
void imprimirMatriz(int [][2]);
long sumatoriaFila(int [][2], int);
long sumatoriaColumna(int [][2], int);
void proceso();

void proceso(){
    int A[3][2];
    long sumaFila = 0, sumaCol = 0;

    srand(time(NULL));//generar una nueva semilla de numeros aleatorios
    llenarMatriz(A);

    cout<<endl<<"Matriz A"<<endl;
    imprimirMatriz(A);

    sumaFila = sumatoriaFila(A, 0);//obtener la sumatoria de los elementos de la fila 0 de la matriz
    sumaCol = sumatoriaColumna(A, 1);//obtener la sumatoria de los elementos de la columna 1 de la matriz
    cout<<endl<<"La suma de los elementos de la fila 0 = "<<sumaFila<<endl;
    cout<<"La suma de los elementos de la columna 1 = "<<sumaCol<<endl;
}

void llenarMatriz(int mat[][2]) {
    for(int f = 0; f < 3; f++){
        for(int c = 0; c < 2; c++)
            mat[f][c] = 1 + rand() % 100;
    }
}

void imprimirMatriz(int mat[][2]){
    for(int f = 0; f < 3; f++){
        for(int c = 0; c < 2; c++){
            cout<<mat[f][c]<<" ";
        }
        cout<<endl;
    }
}

long sumatoriaFila(int mat[][2], int indicadorFila){
    long suma = 0;

    //recorrer solo la fila indicada
    for(int c = 0; c < 2; c++){
        suma+=mat[indicadorFila][c];

    }

    return suma;
}

long sumatoriaColumna(int mat[][2], int indicadorColumna){
    long suma = 0;

    //recorrer solo la columna indicada
    for(int f = 0; f < 3; f++){
        suma+=mat[f][indicadorColumna];

    }

    return suma;
}

int main() {
    proceso();
    return 0;
}
