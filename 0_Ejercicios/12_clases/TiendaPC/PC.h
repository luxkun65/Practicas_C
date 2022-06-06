#ifndef PC_H
#define PC_H
#include<iostream>
using namespace::std;

class PC
{
    public:
        PC();
        virtual ~PC();

        string CPU, GPU;
        int RAM;
        bool RGB;

        PC(string, int);//oficina
        PC(string, int, string);//estudiante
        PC(string, int, string, bool);

        void setDatos(string, int, string, bool);
        void setCPU();
        void setGPU();
        void setRAM();
        void setRGB();

        string getCPU();
        string getGPU();
        int getRAM();
        bool getRGB();






    protected:

    private:
};

#endif // PC_H
