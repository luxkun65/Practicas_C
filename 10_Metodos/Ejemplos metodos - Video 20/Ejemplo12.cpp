#include<iostream>
using namespace::std;
#include<cstdlib>//srand(), rand()
#include<ctime>//time()

void llenarMatriz(int [][2]);
void imprimirMatriz(int [][2]);
int *unir(int [][2], int[][2], int*);
void imprimirArreglo(int *, int, string);
void proceso();

void proceso(){
    int A[2][2], B[2][2];
    int *M;
    M = new int[8];

    srand(time(NULL));//generar una nueva semilla de numeros aleatorios
    llenarMatriz(A);
    llenarMatriz(B);

    cout<<endl<<"Matriz A"<<endl;
    imprimirMatriz(A);
    cout<<endl<<"Matriz B"<<endl;
    imprimirMatriz(B);

    M = unir(A, B, M);
    cout<<endl;
    imprimirArreglo(M, 8, "M");
}

void llenarMatriz(int mat[][2]) {
    for(int f = 0; f < 2; f++){
        for(int c = 0; c < 2; c++)
            mat[f][c] = 1 + rand() % 100;
    }
}

void imprimirMatriz(int mat[][2]){
    for(int f = 0; f < 2; f++){
        for(int c = 0; c < 2; c++){
            cout<<mat[f][c]<<" ";
        }
        cout<<endl;
    }
}

int *unir(int mat1[][2], int mat2[][2], int *arreglo){
    int i = 0;//indice para el arreglo

    //recorrer la primer matriz y pasar los elementos al arreglo
    for(int f = 0; f < 2; f++){
        for(int c = 0; c < 2; c++){
            arreglo[i] = mat1[f][c];
            i++;
        }
    }

    //recorrer la segunda matriz y pasar los elementos al arreglo
    for(int f = 0; f < 2; f++){
        for(int c = 0; c < 2; c++){
            arreglo[i] = mat2[f][c];
            i++;
        }
    }

    return arreglo;
}

void imprimirArreglo(int *arreglo, int tamano, string nomArreglo){
    for(int i = 0; i < tamano; i++){
        cout<<nomArreglo<<"["<<i<<"] = "<<arreglo[i]<<endl;
    }
}

int main() {
    proceso();
    return 0;
}
