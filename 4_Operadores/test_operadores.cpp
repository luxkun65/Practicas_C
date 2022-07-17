#include<iostream>
using namespace::std;
#include<cmath>

int main(){
    cout<<10 % 2 + 3 * 2 / 2 + 10 * 2 - 3;
    cout<<endl;

    cout<<10 % (2 + 3) * 2 / 2 + 10 * (2 - 3);
    cout<<endl;

    cout<<5 + pow(2, 3) * 3 + sqrt(2) - 50 * 2;
    cout<<endl;

    bool resultado = (5 > 10);
    cout<<resultado<<endl;

    int c = 3;
    cout<<c<<endl;
    c+=7;
    cout<<c<<endl;

    c = 5;
    cout << c << endl; // imprime 5
    cout << c++ << endl; // imprime 5 y después postincrementa
    cout << c << endl; // imprime 6

    c = 5; // asigna 5 a c
    cout << c << endl; // imprime 5
    cout << ++c << endl; // preincrementa y después imprime 6
    cout << c << endl; // imprime 6

    cout<<(true == false) && (false != true);
    cout<<endl;

    cout<<(1 < 8) && (25 >= 26) || !(7 == -7);
    cout<<endl;

    return 0;
}
