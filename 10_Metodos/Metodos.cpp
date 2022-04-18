#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
//#include<conio.h>

using namespace::std;



void leer_edad2(){
int edad2;

cout<<"\ningrese la edad"<<endl;
cin>>edad2;

if(edad2 >= 18){

cout<<"es mayor de edad"<<endl;

}else{

cout<<"es menor de edad"<<endl;
}


}

////////////////////////////////////////////////////////////////////////
void mayor_edad(int edad){

if(edad>=18){

cout<<"es mayor de edad"<<endl;

}else{

cout<<"es menor de edad"<<endl;

}

}


void leer_edad(){
int edad;
cout<<"\ningrese su edad: ";
cin>>edad;
mayor_edad(edad);
}


////////////////////////////////////////////////////////////////////

void leer_notas();
void nota_def(double p1, double p2, double pf);



void leer_notas(){
double parcial1, parcial2, parcialF;
cout<<"ingrese parcial 1: ";
cin>>parcial1;
cout<<"ingrese parcial 2: ";
cin>>parcial2;
cout<<"ingrese parcial Final: ";
cin>>parcialF;

nota_def(parcial1,parcial2,parcialF);

}


void nota_def(double p1, double p2, double pf){

double def = (p1*03)+(p2*03)+(pf*04);

cout<<"\nLa definitiva es: "<<def<<endl;

}

//////////////////////////////////////////////////////////////////////

int *arreglo;
int tam;


void proceso();
void leer_tam();
void llenar();
void imprimir();
long cal_suma();
void mostrar_suma();

void proceso(){

leer_tam();
llenar();
imprimir();
mostrar_suma();

}

void leer_tam(){
cout<<"\ningrese el tamano del arreglo: ";
cin>>tam;
arreglo=new int [tam];

}

void llenar(){

srand(time(0));//genera numeros aleatorios
for(int i=0;i<tam;i++){

arreglo[i]= 1+rand() %100;

}

}

void imprimir(){

for(int i=0; i<tam; i++){

cout<<"\arreglo ["<<i<<"] = "<<arreglo[i]<<endl;

}

}


long cal_suma(){
long suma = 0;

    for(int i=0; i<tam; i++){

        suma+=arreglo[i];

    }
return suma;

}

void mostrar_suma(){
    long sum= cal_suma();
    cout<<"la suma de los elementos es: "<<sum<<endl;


}

////////////////////////////////////////////////////////////////////////////


//Definición de los prototipos de funciones
void mostrarFecha();
string getFechaActual();

string getFechaActual(){
    string fecha = "";
    time_t t = time(0); // get time now
    tm* now = localtime(&t);
    int dia = now->tm_mday;
    int mes = now->tm_mon + 1;
    int year = now->tm_year + 1900;

    if(dia < 10) fecha+="0" + to_string(dia) + "/";/*el metodo to_string convierte un valor numerico en
                                                    string para poder concatenarlo al string fecha*/
    else fecha+=to_string(dia) + "/";

    if(mes < 10) fecha+="0" + to_string(mes) + "/";
    else fecha+=to_string(mes) + "/";

    fecha+=to_string(year);

    return fecha;
}

void mostrarFecha(){
    string f = getFechaActual();
    cout<<"Fecha del sistema: "<<f<<endl;
}

//////////////////////////////////////////////////////////////////////////

double get_mayor();
void mostrar_mayor();


double get_mayor(){

srand(time(0));


double num1=rand() %100;
double num2=rand() %100;
double num3=rand() %100;


cout<<num1<<" "<<num2<<" "<<num3<<endl;



double mayor = max(num1, max(num2,num3));
return mayor;

}

void mostrar_mayor(){

double mayor= get_mayor();
cout<<"El mayor es: "<<mayor<<endl;

}


////////////////////////////////////////////////////////////////////////


int *arreglo2;
int tam2;

//Definición de los prototipos de funciones
void proceso2();
void leerTam2();
void llenar2();
void imprimir2();
long *getMenorMayor();
void mostrarMenorMayor();

void proceso2(){
    leerTam2();
    llenar2();
    imprimir2();
    mostrarMenorMayor();
}

void leerTam2(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam2;
    arreglo2 = new int[tam2];
}

void llenar2() {
    srand(time(NULL));//generar una nueva semilla de numeros aleatorios
    for(int i = 0; i < tam2; i++){
        arreglo2[i] = 1 + rand() % 100;
    }
}

void imprimir2(){
    for(int i = 0; i < tam2; i++){
        cout<<"arreglo["<<i<<"] = "<<arreglo2[i]<<endl;
    }
}

long *getMenorMayor(){
    long *tmp;
    tmp = new long[2];
    sort(arreglo2, arreglo2 + tam2);
    tmp[0] = arreglo2[0];
    tmp[1] = arreglo2[tam2-1];
    return tmp;
}

void mostrarMenorMayor(){
    long *datos = getMenorMayor();
    cout<<"El menor elemento es: "<<datos[0]<<endl;
    cout<<"El mayor elemento es: "<<datos[1]<<endl;
}


///////////////////////////////////////////////////////////////////
void proceso3();
int getMenor(int n1, int n2, int n3);

void proceso3(){
    int num1, num2, num3;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    cout<<"Ingrese el ultimo numero: ";
    cin>>num3;

    int menor = getMenor(num1, num2, num3);
    cout<<"El menor es: "<<menor<<endl;

}

int getMenor(int n1, int n2, int n3){
    int menor = min(n1, min(n2, n3));
    return menor;
}


////////////////////////////////////////////////////////////////////////////

int tam4;

//Definición de los prototipos de funciones
void proceso4();
void leerTam4();
void leerArreglo4(int*);
void imprimir4(int*);
long frecuencia4(int*, int);

void proceso4(){
    int *arreglo4, x;
    long frec4;

    leerTam4();
    arreglo4 = new int[tam4];
    leerArreglo4(arreglo4);
    imprimir4(arreglo4);

    cout<<"Ingrese el valor a buscar: ";
    cin>>x;
    frec4 = frecuencia4(arreglo4, x);
    cout<<x<<" esta "<<frec4<<" veces en el arreglo"<<endl;
}

void leerTam4(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam4;
}

void leerArreglo4(int *arreglo4) {
    for(int i = 0; i < tam4; i++){
        cout<<"Ingrese arreglo["<<i<<"] = ";
        cin>>arreglo4[i];
    }
}

void imprimir4(int *datos){
    for(int i = 0; i < tam4; i++){
        cout<<"arreglo["<<i<<"] = "<<datos[i]<<endl;
    }
}

long frecuencia4(int *A, int x){
    long cont = 0;
    for(int i = 0; i < tam4; i++){
        if(A[i] == x) cont++;
    }
    return cont;
}


/////////////////////////////////////////////////////////////////////

int tam5;

//Definición de los prototipos de funciones
void proceso5();
void leerTam5();
void leerArreglo5(int*, string);
void imprimir5(int*, string);
bool iguales5(int*, int*);

void proceso5(){
    int *arreglo51, *arreglo52;
    bool resp;

    leerTam5();
    arreglo51 = new int[tam5];
    arreglo52 = new int[tam5];

    cout<<endl<<"Leer Arreglo A"<<endl;
    leerArreglo5(arreglo51, "A");
    cout<<endl<<"Leer Arreglo B"<<endl;
    leerArreglo5(arreglo52, "B");

    cout<<endl;
    imprimir5(arreglo51, "A");
    cout<<endl;
    imprimir5(arreglo52, "B");

    cout<<endl;

    resp = iguales5(arreglo51, arreglo52);
    if(resp)//es lo mismo que -> if(resp == true)
        cout<<"Los arreglos son iguales"<<endl;
    else
        cout<<"Los arreglos no son iguales"<<endl;
}

void leerTam5(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam5;
}

void leerArreglo5(int *datos, string nomArreglo) {
    for(int i = 0; i < tam5; i++){
        cout<<"Ingrese "<<nomArreglo<<"["<<i<<"] = ";
        cin>>datos[i];
    }
}

void imprimir5(int *datos, string nomArreglo){
    for(int i = 0; i < tam5; i++){
        cout<<nomArreglo<<"["<<i<<"] = "<<datos[i]<<endl;
    }
}

bool iguales5(int *A, int *B){
    bool sw = true;//se asume que los dos arreglos son iguales
    for(int i = 0; i < tam5; i++){
        if(A[i] != B[i]){
            sw = false;//si existe una diferencia, cambiar el valor de la variable sw
            break;//romper el bucle para no seguir comparando
        }
    }
    return sw;
}


///////////////////////////////////////////////////////////////////////////



void llenarMatriz(int [][2]);
void imprimirMatriz(int [][2]);
long sumatoriaFila(int [][2], int);
long sumatoriaColumna(int [][2], int);
void proceso6();

void proceso6(){
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

///////////////////////////////////////////////////////////////////////


void llenarMatriz2(int [][2]);
void imprimirMatriz2(int [][2]);
int *unir(int [][2], int[][2], int*);
void imprimirArreglo2(int *, int, string);
void proceso7();

void proceso7(){
    int A[2][2], B[2][2];
    int *M;
    M = new int[8];

    srand(time(NULL));//generar una nueva semilla de numeros aleatorios
    llenarMatriz2(A);
    llenarMatriz2(B);

    cout<<endl<<"Matriz A"<<endl;
    imprimirMatriz2(A);
    cout<<endl<<"Matriz B"<<endl;
    imprimirMatriz2(B);

    M = unir(A, B, M);
    cout<<endl;
    imprimirArreglo2(M, 8, "M");
}

void llenarMatriz2(int mat[][2]) {
    for(int f = 0; f < 2; f++){
        for(int c = 0; c < 2; c++)
            mat[f][c] = 1 + rand() % 100;
    }
}

void imprimirMatriz2(int mat[][2]){
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

void imprimirArreglo2(int *arreglo, int tamano, string nomArreglo){
    for(int i = 0; i < tamano; i++){
        cout<<nomArreglo<<"["<<i<<"] = "<<arreglo[i]<<endl;
    }
}

int main(){

//1. leer_edad2();
//2.    leer_edad();
//3. leer_notas();
//4.proceso();
//5. mostrarFecha();
//6. mostrar_mayor();
//7. proceso2();
//8. proceso3();
//9. proceso4();
//10. proceso5();
//11. proceso6();
proceso7();
return 0;



}
