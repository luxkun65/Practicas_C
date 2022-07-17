#include <iostream>
using namespace std;

#include"SuperClase.h"
#include"SubClase1.h"
#include"SubClase2.h"

int main()
{
    SuperClase sc;
    cout << "SuperClase" << endl;
    sc.a = 10;
    sc.setB(20);
    sc.setC(30);
    cout << "a = "<<sc.getA()<< endl;
    cout << "b = "<<sc.getB()<< endl;
    cout << "c = "<<sc.getC()<< endl;

    SubClase1 sc1;
    cout << "SubClase1" << endl;
    sc1.a = -10;
    sc1.setB(-20);
    sc1.setC(-30);
    sc1.d = 10;
    sc1.setE(20);
    sc1.setF(30);
    cout << "a = "<<sc1.getA()<< endl;
    cout << "b = "<<sc1.getB()<< endl;
    cout << "c = "<<sc1.getC()<< endl;
    cout << "d = "<<sc1.getD()<< endl;
    cout << "e = "<<sc1.getE()<< endl;
    cout << "f = "<<sc1.getF()<< endl;

    SubClase2 sc2;
    cout << "SubClase2" << endl;
    sc2.setC(30);
    sc2.setF(60);
    cout << "a = "<<sc2.getA()<< endl;
    cout << "b = "<<sc2.getB()<< endl;
    cout << "c = "<<sc2.getC()<< endl;
    cout << "d = "<<sc2.getD()<< endl;
    cout << "e = "<<sc2.getE()<< endl;
    cout << "f = "<<sc2.getF()<< endl;
    sc2.setSuma();
    cout << "suma = "<<sc2.getSuma()<< endl;


    return 0;
}
