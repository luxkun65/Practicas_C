#include <iostream>
#include"PC.h"
using namespace std;

void oficina();
void estudiante();
void gamer();

void oficina(){
cout<<"-----------------------------"<<endl;

PC p("INTEL", 16);
cout<<p.getCPU()<<endl;
cout<<p.getRAM()<<endl;
cout<<p.getGPU()<<endl;

}


void estudiante(){
cout<<"-----------------------------"<<endl;

PC p("INTEL", 16, "AMD", false);
cout<<p.getCPU()<<endl;
cout<<p.getRAM()<<endl;
cout<<p.getGPU()<<endl;


}

void gamer(){
cout<<"-----------------------------"<<endl;

PC p("AMD", 32, "NVIDIA", true);
cout<<p.getCPU()<<endl;
cout<<p.getRAM()<<endl;
cout<<p.getGPU()<<endl;
cout<<p.getRGB()<<endl;

}

int main()
{
    oficina();
    estudiante();
    gamer();
    return 0;
}
