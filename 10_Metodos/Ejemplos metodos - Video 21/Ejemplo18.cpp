#include <iostream>
using namespace::std;

//prototipos de las funciones
long mayor(long, long, long);
long mayor(long, long, long, long);
double mayor(double, double, double);
double mayor(double, double, double, double);

long mayor(long num1, long num2, long num3){
    return max(num1, max(num2, num3));
}

long mayor(long num1, long num2, long num3, long num4){
    return max(mayor(num1, num2, num3), num4);
}

double mayor(double num1, double num2, double num3){
    return max(num1, max(num2, num3));
}

double mayor(double num1, double num2, double num3, double num4){
    return max(mayor(num1, num2, num3), num4);
}

int main(){
    long mayorLong = 0;
    long num1Long = 10;
    long num2Long = 64;
    long num3Long = -45;
    long num4Long = 179;

    mayorLong = mayor(num1Long, num2Long, num3Long);
    cout<<mayorLong<<endl;

    mayorLong = mayor(num1Long, num2Long, num3Long, num4Long);
    cout<<mayorLong<<endl;

    //----------------------------------------------------------------

    double mayorDouble = 0;
    double num1Double = 10.36;
    double num2Double = 64.45;
    double num3Double = -45.10;
    double num4Double = 179.89;

    mayorDouble = mayor(num1Double, num2Double, num3Double);
    cout<<mayorDouble<<endl;

    mayorDouble = mayor(num1Double, num2Double, num3Double, num4Double);
    cout<<mayorDouble<<endl;
}

