//RoPaSci © 2022 by Pyromagne is licensed under MIT License.
#include <stdio.h>
#include <stdlib.h>
#include "ropasci.h"

typedef int SCOLOR;

extern SCOLOR Dborder;
extern SCOLOR Dtitle;
extern SCOLOR Dropasci;

extern void menu();
extern void border(int);
extern void bgwall();
extern void loading(int, int, int);

int startscreen()
{
  bgwall();
  border(0);
  textcolor(Dropasci);
  gotoxy(31,6);
  printf ("%c%c%c%c%c%c%c   %c%c%c%c%c%c%c  %c%c%c%c%c%c%c   %c%c%c%c%c%c  %c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c %c%c%c"
  ,219,219,219,219,219,219,187,219,219,219,219,219,219,187,219,219,219,219,219,219,187,219,219,219,219,219,187,219
  ,219,219,219,219,219,219,187,219,219,219,219,219,219,187,219,219,187);
  gotoxy(31,7);
  printf ("%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c"
  ,219,219,201,205,205,219,219,187,219,219,201,205,205,205,219,219,187,219,219,201,205,205,219,219,187,219,219,201
  ,205,205,219,219,187,219,219,201,205,205,205,205,188,219,219,201,205,205,205,205,188,219,219,186);
  gotoxy(31,8);
  printf ("%c%c%c%c%c%c%c%c %c%c%c   %c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c      %c%c%c"
  ,219,219,219,219,219,219,201,188,219,219,186,219,219,186,219,219,219,219,219,219,201,188,219,219,219,219,219,219,219,186
  ,219,219,219,219,219,219,219,187,219,219,186,219,219,186);
  gotoxy(31,9);
  printf ("%c%c%c%c%c%c%c%c %c%c%c   %c%c%c %c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c      %c%c%c"
  ,219,219,201,205,205,219,219,187,219,219,186,219,219,186,219,219,201,205,205,205,188,219,219,201,205,205,219,219,186
  ,200,205,205,205,205,219,219,186,219,219,186,219,219,186);
  gotoxy(31,10);
  printf ("%c%c%c  %c%c%c %c%c%c%c%c%c%c%c%c %c%c%c      %c%c%c  %c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c"
  ,219,219,186,219,219,186,200,219,219,219,219,219,219,201,188,219,219,186,219,219,186,219,219,186,219,219,219,219,219,219,219,186
  ,200,219,219,219,219,219,219,187,219,219,186);
  gotoxy(31,11);
  printf ("%c%c%c  %c%c%c  %c%c%c%c%c%c%c  %c%c%c      %c%c%c  %c%c%c %c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c %c%c%c"
  ,200,205,188,200,205,188,200,205,205,205,205,205,188,200,205,188,200,205,188,200,205,188,200,205,205,205,205,205,205,188,200,205,205,205,205,205,188
  ,200,205,188);

  gotoxy(119,29);
  delay(1500);
  loading(47,20,100);
  gotoxy(47,20);
  printf("                          ");
  gotoxy(47,20);
  textcolor(5);
  printf (R"(||  |         ============)");
  textcolor(Dropasci);
  loading(47,20,40);
  gotoxy(47,20);
  textcolor(5);
  printf (R"(||  |         ============)");
  textcolor(Dropasci);

  menu();


  return 0;
}
