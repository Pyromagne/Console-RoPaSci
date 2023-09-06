//RoPaSci © 2023 by Pyromagne is licensed under MIT License.
#include <stdio.h>
#include <stdlib.h>
#include "ropasci.h"

void border(int a)
{

  if (a==1)
  {
    system("cls");
  }

  int i;
  gotoxy(5,1);
  textcolor(Dborder);
  for (i = 0; i < 111; i++)
  {
    printf("%c", 205);
  }
  gotoxy(5,28);
  for (i = 0; i < 111; i++)
  {
    printf("%c", 205);
  }

  for (i = 0; i < 24; i++)
  {
    gotoxy(1,3+i);
    printf("%c", 186);
    gotoxy(118,3+i);
    printf("%c", 186);
  }

  textcolor(Dborder);
  gotoxy(1,1);
  printf("%c%c", 219,219);
  gotoxy(117,1);
  printf("%c%c", 219,219);
  gotoxy(1,28);
  printf("%c%c", 219,219);
  gotoxy(117,28);
  printf("%c%c", 219,219);

  textcolor(Dborder);
  gotoxy(4,1);
  printf("%c", 201);
  gotoxy(115,1);
  printf("%c", 187);
  gotoxy(4,28);
  printf("%c", 200);
  gotoxy(115,28);
  printf("%c", 188);

  gotoxy(1,2);
  printf("%c%c%c%c",201,205,205,188 );
  gotoxy(115,2);
  printf("%c%c%c%c",200,205,205,187 );
  gotoxy(1,27);
  printf("%c%c%c%c",200,205,205,187 );
  gotoxy(115,27);
  printf("%c%c%c%c",201,205,205,188 );

  textcolor(Dtitle);
  gotoxy(6,2);
  printf("RoPaSci v.1.0.0 Beta");
  gotoxy(6,27);
  printf("RoPaSci (c) 2022 by Pyromagne is licensed under CC BY-NC-ND 4.0   (This Game Does not save any data for now)");
}

void winbox()
{
  int i;
  gotoxy(42,10);
  textcolor(Dborder);
  for (i = 0; i < 36; i++)
  {
    printf("%c", 205);
  }
  gotoxy(42,18);
  for (i = 0; i < 36; i++)
  {
    printf("%c", 205);
  }

  gotoxy(43,11);
  for (i = 0; i < 34; i++)
  {
    printf("%c", 196);
  }
  gotoxy(43,17);
  for (i = 0; i < 34; i++)
  {
    printf("%c", 196);
  }

  for (i = 0; i < 7; i++)
  {
    gotoxy(41,11+i);
    printf("%c", 186);
    gotoxy(78,11+i);
    printf("%c", 186);
  }

  gotoxy(41,10);
  printf("%c", 201);
  gotoxy(78,10);
  printf("%c", 187);
  gotoxy(41,18);
  printf("%c", 200);
  gotoxy(78,18);
  printf("%c", 188);
}
