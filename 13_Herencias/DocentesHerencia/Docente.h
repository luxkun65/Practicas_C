#ifndef DOCENTE_H
#define DOCENTE_H
#include<iostream>
using namespace::std;


class Docente
{
    public:
        long numID;
        string apellido, nombre, profesion;
        double salario;

        Docente();
        virtual ~Docente();
        void setNumID();
        void setApellido();
        void setNombre();
        void setProfesion();
        long getNumID();
        string getApellido();
        string getNombre();
        string getProfesion();
        double getSalario();

    protected:
    private:
};

#endif // DOCENTE_H
