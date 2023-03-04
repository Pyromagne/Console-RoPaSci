//RoPaSci � 2022 by Pyromagne is licensed under CC BY-NC-ND 4.0
#ifndef ROPASCI_H_INCLUDED
#define ROPASCI_H_INCLUDED
//-----------------------------------------------------------------------------
#include<stdio.h>
#define MAXNAME 17
//-----------------------------------------------------------------------------
typedef int SCORE;
typedef int SCOLOR;
//-----------------------------------------------------------------------------
extern SCOLOR Dborder;
extern SCOLOR Dtitle;
extern SCOLOR Dropasci;
//EXTERNAL FUNCTIONS-----------------------------------------------------------
extern void border(int);
extern int startscreen();
extern void pr();
extern void pp();
extern void ps();
extern void br();
extern void bp();
extern void bs();
extern void versus();
extern void splashwin();
extern void splashloose();
extern void splashdraw();
extern void bgwall();
extern void winbox();
//FILE HANDLING FUNCTIONS-----------------------------------------------------------
extern void dirmake();
//FUNCTION DECLARATIONS FOR ROPASCI_H.h----------------------------------------
void gotoxy(int x, int y);
void textcolor (int setColor);
void delay(unsigned int mseconds);



#endif // ROPASCI_H_INCLUDED
