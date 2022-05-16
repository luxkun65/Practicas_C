#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include<iostream>
using namespace::std;


class Estudiante
{
    public:
        Estudiante();
        virtual ~Estudiante();
        void setCodigo();
        void setCodPlan();
        void setApellido();
        void setNombre();
        void setNotas(int); //0. Notas 1 parcial
                            //1. Notas 2 parcial
                            //2. Notas 3 parcial
                            //3. Nota definitiva
        long getCodigo();
        long getCodPlan();
        string getApellido();
        string getNombre();
        double getNotas(int);
        string toString();




    protected:

    private:

        long codigo, codPlan;
        string apellido, nombre;
        double notas[4];
};

#endif // ESTUDIANTE_H
