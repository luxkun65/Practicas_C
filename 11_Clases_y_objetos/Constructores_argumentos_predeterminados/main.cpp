#include <iostream>
using namespace std;

#include"Fecha.h"


int main()
{
    Fecha f1;//dia, mes y year -> 0, y periodo -> "AM"
    cout<<f1.getFecha()<<endl<<endl;

    Fecha f2(20);//dia -> 20, mes y year -> 0, y periodo -> "AM"
    cout<<f2.getFecha()<<endl<<endl;

    Fecha f3(20, 7);//dia -> 20, mes -> 7 y year -> 0, y periodo -> "AM"
    cout<<f3.getFecha()<<endl<<endl;

    Fecha f4(20, 7, 1810);//dia -> 20, mes -> 7 y year -> 1810, y periodo -> "AM"
    cout<<f4.getFecha()<<endl<<endl;

    Fecha f5(20, 7, 1810, "PM");//dia -> 20, mes -> 7 y year -> 1810, y periodo -> "PM"
    cout<<f5.getFecha()<<endl<<endl;

    return 0;
}
