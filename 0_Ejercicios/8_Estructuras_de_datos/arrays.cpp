#include<iostream>


using namespace::std;


int vectorA[]={2,4,6};
int vectorB[]={5,7,9};
int vectores[2];

//la suma de los vectores A y B
char a = 'x';
void suma(){

    for(int i =0;i<3;i++){

       vectores[i]=vectorA[i] + vectorB[i];

        for(a; a <= 'z';){
        cout<<" "<<a<<" = "<<vectores[i];
        a++;
        break;

        }



    }



}

int main(){
suma();

return 0;
}
