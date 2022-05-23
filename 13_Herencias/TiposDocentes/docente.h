#ifndef DOCENTE_H
#define DOCENTE_H
#include<iostream>
using namespace::std;

class docente
{
    public:
        docente();
        virtual ~docente();
        long numID;
        string apellido, nombre, profesion;
        double salarioPagar;

        void setNumeroID();
        void setApellido();
        void setNombre();
        void setProfesion();
        virtual void setSalarioPgar();

        long getNumeroID();
        string getApellido();
        string getNombre();
        string getProfesion();
        double getSalarioPgar();

        string toString();

    protected:

    private:
};

#endif // DOCENTE_H
