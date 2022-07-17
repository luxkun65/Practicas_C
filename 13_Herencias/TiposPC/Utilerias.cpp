#include <stdio.h>
#include <windows.h>

#include "Utilerias.h"

Utilerias::Utilerias()
{
    //ctor
}

Utilerias::~Utilerias()
{
    //dtor
}

void Utilerias::gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}
