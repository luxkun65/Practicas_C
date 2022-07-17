#include <iostream>
using namespace std;

#include"Computador.h"
#include"Oficina.h"
#include"Programador.h"
#include"Gamer.h"
#include"Servidor.h"
#include"Utilerias.h"

Utilerias util;

int main()
{
    util.gotoxy(10, 5);
    cout << "Datos del PC Oficina" << endl;
    Oficina objOf;
    objOf.setMarca();
    objOf.setReferencia();
    objOf.setCPU();
    objOf.setRam();
    objOf.setCapacidadDD();
    system("pause");
    system("cls");
    cout<<objOf.getInfo()<<endl<<endl;

    /*cout << "Datos del PC Programador" << endl;
    Programador objP;
    objP.setMarca();
    objP.setReferencia();
    objP.setCPU();
    objP.setRam();
    objP.setCapacidadDD();
    objP.setCapacidadSDD();
    cout<<objP.getInfo()<<endl<<endl;

    cout << "Datos del PC Gamer" << endl;
    Gamer objG;
    objG.setMarca();
    objG.setReferencia();
    objG.setCPU();
    objG.setRam();
    objG.setCapacidadDD();
    objG.setCapacidadSDD();
    objG.setMemGPU();
    cout<<objG.getInfo()<<endl<<endl;

    cout << "Datos del PC Servidor" << endl;
    Servidor objS;
    objS.setMarca();
    objS.setReferencia();
    objS.setCPU();
    objS.setRam();
    objS.setCapacidadDD();
    objS.setCapacidadSDD();
    objS.setCantCPU();
    cout<<objS.getInfo()<<endl<<endl;

    Computador *pcOf = &objOf;
    Computador *pcPg = &objP;
    Computador *pcGm = &objG;
    Computador *pcSv = &objS;

    pcOf->setValor();
    pcPg->setValor();
    pcGm->setValor();
    pcSv->setValor();

    cout<<"Valor de los tipos de PC"<<endl;
    cout<<"Oficina = "<<objOf.getValor()<<endl;
    cout<<"Programador = "<<objP.getValor()<<endl;
    cout<<"Gamer = "<<objG.getValor()<<endl;
    cout<<"Servidor = "<<objS.getValor()<<endl;*/

    return 0;
}
