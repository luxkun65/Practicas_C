#include<iostream>
using namespace::std;
#include<ctime>

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

int main() {
    mostrarFecha();
    return 0;
}
