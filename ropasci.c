//RoPaSci © 2022 by Pyromagne is licensed under CC BY-NC-ND 4.0
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "ropasci.h"

void gotoxy(int x, int y)
{
    COORD c = {0, 0};

    c.X = x; c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

    return;
}

void textcolor (int setColor)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (setColor & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }

    return;
}

void delay(unsigned int mseconds)
{
    clock_t spd = mseconds+clock();
    while(spd>clock());
}
