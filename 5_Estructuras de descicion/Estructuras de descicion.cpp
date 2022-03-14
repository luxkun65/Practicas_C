#include<iostream>
#include<conio.h>

using namespace::std;

string nom_articulo;

char tipo;

int cant_art_comprados;
double neto, valor_descuento, valor_pagar, valor_venta, valor_iva, precio_compra;




//declaracion de prototipos de funciones

void leer_datos_articulos();
void calc_valor_vender();
void imprimir_factura();
void leer_dato_venta();
void calcular_venta();

//implementacion de las funciones


void leer_datos_articulos(){

cout<<"ingrese el nombre: ";
getline (cin, nom_articulo);
cout<<"ingrese tipo de articulo [A, B, C]: ";
tipo = getche();
cout<<"\n ingrese el valor de compra: ";
cin>>precio_compra;
}


void calc_valor_vende(){

valor_venta = (precio_compra * 0.5) + precio_compra;

}

void leer_datos_venta(){

cout<<"ingrese cantidad de articulos comprados: ";
cin>>cant_art_comprados;

}


void calcular_venta(){

neto = valor_venta * cant_art_comprados;

switch(tipo){
    case'A': case 'a':
        valor_descuento = neto * 0.1; break;

    case 'B' : case 'b':
        if(cant_art_comprados < 5){

            valor_descuento = neto* 0.2;
        }

        else{
            if(cant_art_comprados >=5 && cant_art_comprados <=15){

                valor_descuento = neto* 0.25;
            }
            else{
                valor_descuento = neto* 0.22;
            }
        }
       break;

     case 'C' : case 'c':
        valor_descuento = neto* 0.3;break;
    }//fin del switch

valor_iva = (neto - valor_descuento) * 0.16;

valor_pagar = (neto - valor_descuento) + valor_iva;

}

void imprimir_factura(){

cout<<"\n factura de venta"<<endl;
cout<<"-------------------------------"<<endl;
cout<<"nombre del articulo: "<< nom_articulo<<endl;
cout<<"tipo articulo: "<<tipo<<endl;
cout<<"valor unitario: "<<valor_venta<<endl;
cout<<"cantidad de articulos a comprar: "<<cant_art_comprados<<endl;
cout<<"valor neto de la compra: "<<neto<<endl;
cout<<"valor descuento: "<<valor_descuento<<endl;
cout<<"valor del IVA: "<<valor_iva<<endl;
cout<<"valor a pagar: "<<valor_pagar<<endl;

}



int main(){
leer_datos_articulos();
calc_valor_vende();
leer_datos_venta();
calcular_venta();
imprimir_factura();


return 0;
}



















