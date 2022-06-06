#include "PC.h"
#include<iostream>
using namespace::std;


PC::PC()
{
    setDatos("-", 0, "-", false);
}

PC::~PC()
{
    //dtor
}


void PC::setDatos(string cpu, int ram, string gpu, bool rgb)
{
    CPU = cpu;
    RAM = ram;
    GPU = gpu;
    RGB = rgb;
}



PC::PC(string cpu, int ram)
{
    setDatos(cpu, 8, " ", false);
}


PC::PC(string cpu, int ram, string gpu)
{
    setDatos(cpu, 16, gpu, false);
}


PC::PC(string cpu, int ram, string gpu, bool rgb)
{
    setDatos(cpu, 32, gpu, true);
}


void PC::setCPU()
{
    fflush(stdin);
    cout<<"CPU:: ";
    getline(cin, CPU);
}

void PC::setGPU()
{
    fflush(stdin);
    cout<<"GPU:: ";
    getline(cin, GPU);
}


void PC::setRAM()
{
    cout<<"RAM:: ";
    cin>>RAM;
}

void PC::setRGB()
{
    int tipo;
    cin>>tipo;
    if(tipo==0){
    RGB = false;
    }else{RGB = true;}
}


string PC::getCPU(){
return CPU;
}
string PC::getGPU(){
return GPU;
}
int PC::getRAM(){
return RAM;
}
bool PC::getRGB(){
return RGB;
}
