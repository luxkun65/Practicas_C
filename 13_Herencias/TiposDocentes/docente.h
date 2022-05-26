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
        string nombre, apellido, profesion;
        double salarioPagar;

        void setNumeroID();
        void setNombre();
        void setApellido();
        void setProfesion();
        virtual void setSalarioPgar();

        long getNumeroID();
        string getNombre();
        string getApellido();
        string getProfesion();
        double getSalarioPgar();

        string toString();

    protected:

    private:
};

#endif // DOCENTE_H
