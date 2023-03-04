//-----------------------------------------------------------------------------
//RoPaSci © 2022 by Pyromagne is licensed under CC BY-NC-ND 4.0
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include "ropasci.h"


//FUCNTION PROTOTYPE-----------------------------------------------------------

void bgplay();
int menu();
void menualgoswitch();
void play();
void playalgoswitch();
int battle();
void ussscc();
void instruct();
void option();
void optionalgoswitch();
int goodbye();
void loading(int, int, int);
void changetheme(int);
void changeround();
void changename();

void nextmove();

//GLOBAL VARIABLES-------------------------------------------------------------

int yourmove;
char username[MAXNAME]="Player 1";
char botname[MAXNAME]="Player 2 (BOT)";
char user2name[MAXNAME]="Player 2";

SCORE userscore=0;
SCORE botscore=0;
SCORE user2score=0;
int totalrounds=10;
int userround;

//-----------------------------------------------------------------------------

const SCOLOR BTborder = 11;
const SCOLOR BTtitle = 15;
const SCOLOR BTropasci = 3;

const SCOLOR WTborder = 1;
const SCOLOR WTtitle = 0;
const SCOLOR WTropasci = 9;

const SCOLOR YTborder = 3;
const SCOLOR YTtitle = 0;
const SCOLOR YTropasci = 3;

SCOLOR Dborder = BTborder;
SCOLOR Dtitle = BTtitle;
SCOLOR Dropasci = BTropasci;

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
int main()
{
  dirmake();
  system("COLOR 0F");
  bgwall();
  border(1);
  SetConsoleTitle("RoPaSci");
  srand(time(0));
  startscreen();
  return 0;
}
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//

int menu()
{
  border(1);
  for (int i = 0; i < 109; i++)
  {
    gotoxy(5+i,4);
    printf("%c", 196);
    gotoxy(5+i,6);
    printf("%c", 196);
  }

  gotoxy(6,5);
  textcolor(Dtitle);
  printf("MAIN MENU");
  gotoxy(6,8);
  printf("A. New Game");
  gotoxy(6,10);
  printf("B. Shop");
  gotoxy(6,12);
  printf("C. Options");
  gotoxy(6,14);
  printf("D. Instructions");
  gotoxy(6,16);
  printf("E. Exit");

  gotoxy(6,25);
  textcolor(Dropasci);
  printf("Press the corresponding characters of an options to continue");

  gotoxy(119,29);
  menualgoswitch();


  return 0;
}
//-----------------------------------------------------------------------------
void menualgoswitch()
{
  int menu_op;
  menu_op=getch();

  if(menu_op=='a' || menu_op=='A')
  {
    bgwall();
    border(0);
    loading(47,20,15);
    play();
  }
  else if(menu_op=='b' || menu_op=='B')
  {
    winbox();
    gotoxy(54,14);
    printf("COMMING SOON");
    gotoxy(47,16);
    printf("PRESS ANY KEY TO CONTINUE");

    gotoxy(119,29);
    getch();
    menu();
  }
  else if(menu_op=='c' || menu_op=='C')
  {
    bgwall();
    border(0);
    loading(47,20,15);
    option();
  }
  else if(menu_op=='d' || menu_op=='D')
  {
    bgwall();
    border(0);
    loading(47,20,15);
    instruct();
  }
  else if(menu_op=='e' || menu_op=='E')
  {
    delay(750);
    exit(0);
  }

  menualgoswitch();
}
//-----------------------------------------------------------------------------
void play()
{
  bgplay();
  nextmove();
  playalgoswitch();

}
//-----------------------------------------------------------------------------
void playalgoswitch()
{
  gotoxy(119,29);
  int tempin;
  tempin=getch();


    if (tempin == 'r' || tempin == 'z')
    {
      yourmove = 1;
      battle();
    }
    else if (tempin == 'p' || tempin == 'x')
    {
      yourmove = 2;
      battle();
    }
    else if (tempin == 's' || tempin == 'c')
    {
      yourmove = 3;
      battle();
    }

  playalgoswitch();

}
//-----------------------------------------------------------------------------
int battle()
{
    border(1);
    int min = 1, max = 3;
    int num = (rand() % (max - min + 1)) + min;

    int botmove;
    botmove = num;

    switch (yourmove)
    {
      case 1:
        if (yourmove == botmove)
        {
          bgplay();
          pr();
          br();
          splashdraw();
          versus();
          ussscc();
          delay(1500);
          nextmove();

        }
        else if (yourmove == 1 && botmove == 2)
        {
          botscore = botscore+1;
          bgplay();
          pr();
          bp();
          splashloose();
          versus();
          ussscc();
          delay(1500);
          nextmove();
        }
        else if (yourmove == 1 && botmove == 3)
        {
          userscore = userscore+1;
          bgplay();
          pr();
          bs();
          splashwin();
          versus();
          ussscc();
          delay(1500);
          nextmove();
        }
      break;

      case 2:
        if (yourmove == 2 && botmove == 1)
        {
          userscore = userscore+1;
          bgplay();
          pp();
          br();
          splashwin();
          versus();
          ussscc();
          delay(1500);
          nextmove();
        }
        else if (yourmove == botmove)
        {
          bgplay();
          pp();
          bp();
          splashdraw();
          versus();
          ussscc();
          delay(1500);
          nextmove();
        }
        else if (yourmove == 2 && botmove == 3)
        {
          botscore = botscore+1;
          bgplay();
          pp();
          bs();
          splashloose();
          versus();
          ussscc();
          delay(1500);
          nextmove();
        }
      break;

      case 3:
      if (yourmove == 3 && botmove == 1)
      {
        botscore = botscore+1;
        bgplay();
        ps();
        br();
        splashloose();
        versus();
        ussscc();
        delay(1500);
        nextmove();
      }
      else if (yourmove == 3 && botmove == 2)
      {
        userscore = userscore+1;
        bgplay();
        ps();
        bp();
        splashwin();
        versus();
        ussscc();
        delay(1500);
        nextmove();
      }
      else if (yourmove == botmove)
      {
        bgplay();
        ps();
        bs();
        splashdraw();
        versus();
        ussscc();
        delay(1500);
        nextmove();
      }
      break;
    }

    return 0;
}
//-----------------------------------------------------------------------------
void ussscc()
{
  textcolor(Dropasci);
  gotoxy(6,8);
  printf("%s", username);
  gotoxy(113-(unsigned)strlen(botname),8);
  printf("%s", botname);
  gotoxy(6,23);
  printf("Scores: %d", userscore);
  gotoxy(104,23);
  printf("Scores: %d", botscore);
  gotoxy(119,29);


  if (userscore >= totalrounds || botscore >= totalrounds)
  {
    if (userscore > botscore)
    {
      delay(1500);
      bgplay();
      textcolor(10);
      gotoxy(21,12);
      printf (R"(____    ____  ______    __    __     ____    __    ____  __  .__   __.)");
      gotoxy(21,13);
      printf (R"(\   \  /   / /  __  \  |  |  |  |    \   \  /  \  /   / |  | |  \ |  |)");
      gotoxy(21,14);
      printf (R"( \   \/   / |  |  |  | |  |  |  |     \   \/    \/   /  |  | |   \|  |)");
      gotoxy(21,15);
      printf (R"(  \_    _/  |  |  |  | |  |  |  |      \            /   |  | |  . `  |)");
      gotoxy(21,16);
      printf (R"(    |  |    |  `--'  | |  `--'  |       \    /\    /    |  | |  |\   |)");
      gotoxy(21,17);
      printf (R"(    |__|     \______/   \______/         \__/  \__/     |__| |__| \__|)");
      textcolor(Dropasci);
      gotoxy(47,21);
      printf("PRESS ANY KEY TO CONTINUE");
      gotoxy(119,29);
    }
    else
    {
      delay(1500);
      bgplay();
      textcolor(12);
      gotoxy(22,12);
      printf (R"(____    ____  ______    __    __      __        ______        _______. _______)");
      gotoxy(22,13);
      printf (R"(\   \  /   / /  __  \  |  |  |  |    |  |      /  __  \      /       ||   ____|)");
      gotoxy(22,14);
      printf (R"( \   \/   / |  |  |  | |  |  |  |    |  |     |  |  |  |    |   (----`|  |__)");
      gotoxy(22,15);
      printf (R"(  \_    _/  |  |  |  | |  |  |  |    |  |     |  |  |  |     \   \    |   __|)");
      gotoxy(22,16);
      printf (R"(    |  |    |  `--'  | |  `--'  |    |  `----.|  `--'  | .----)   |   |  |____)");
      gotoxy(22,17);
      printf (R"(    |__|     \______/   \______/     |_______| \______/  |_______/    |_______|)");
      textcolor(Dropasci);
      gotoxy(47,21);
      printf("PRESS ANY KEY TO CONTINUE");
      gotoxy(119,29);
    }
    userscore = 0;
    botscore = 0;
    getch();
    menu();
  }
}
//-----------------------------------------------------------------------------
void instruct()
{
  border(1);
  for (int i = 0; i < 109; i++)
  {
    gotoxy(5+i,4);
    printf("%c", 196);
    gotoxy(5+i,6);
    printf("%c", 196);
  }

  gotoxy(6,5);
  textcolor(Dtitle);
  printf("INSTRUCTIONS AND INFORMATIONS");
  textcolor(Dropasci);
  gotoxy(6,8);
  printf("RoPaSci v.1.0.0 (c)");
  gotoxy(6,9);
  printf("The Rock-Paper-Scissors Game");
  gotoxy(6,10);
  printf("This game is created by ");
  textcolor(12);
  printf("Pyromagne");
  textcolor(Dropasci);
  printf(", this game was not possible if not for the help of his colleagues.");
  gotoxy(6,11);
  printf("This is the game that children's often play, That is why he made a video game inspired by the");
  gotoxy(6,12);
  printf("traditional game %crock-paper-scissors%c in a console application with a retro style.",34,34);
  gotoxy(6,14);
  printf("How To Play");
  gotoxy(6,15);
  printf("Player will randomly choose one of three characters representing a hand signs");
  gotoxy(6,16);
  printf("%c R - Rock (making a fist) - Rock wins over scissors (rock smashes scissors)",254);
  gotoxy(6,17);
  printf("%c P - Paper (laying your hand flat) - Paper wins over rock (paper covers rock)",254);
  gotoxy(6,18);
  printf("%c S - Scissors (holding out two fingers) - Scissors wins over paper (scissors cut paper)",254);
  gotoxy(6,25);
  printf("(Press any key to continue)");


  gotoxy(102,21);
  printf("Special thanks!");
  gotoxy(105,23);
  printf("FakinAway");
  gotoxy(105,24);
  printf("k.yuraka");
  gotoxy(105,25);
  printf("Chiken");
  gotoxy(105,26);
  printf("xia.writes");

  gotoxy(119,29);
  getch();
  menu();
}
//-----------------------------------------------------------------------------
void option()
{
  border(1);
  for (int i = 0; i < 109; i++)
  {
    gotoxy(5+i,4);
    printf("%c", 196);
    gotoxy(5+i,6);
    printf("%c", 196);
  }
  gotoxy(6,5);
  textcolor(Dtitle);
  printf("OPTION");
  gotoxy(6,8);
  textcolor(Dtitle);
  printf("--THEME--");
  textcolor(Dropasci);
  gotoxy(6,9);
  textcolor(10);printf("[B] ");textcolor(Dropasci);printf("BLACK");
  gotoxy(6,10);
  textcolor(10);printf("[W] ");textcolor(Dropasci);printf("WHITE");
  gotoxy(6,11);
  textcolor(10);printf("[Y] ");textcolor(Dropasci);printf("YELLOW (LEGACY)");
  gotoxy(6,13);
  textcolor(Dtitle);
  printf("--SCORE LIMIT--");
  gotoxy(6,14);
  textcolor(10);printf("[R] ");textcolor(Dropasci);printf("CURRENT SCORE LIMIT: %d", totalrounds);
  gotoxy(6,16);
  textcolor(Dtitle);
  printf("--USERNAME--");
  gotoxy(6,17);
  textcolor(10);printf("[N] ");textcolor(Dropasci);printf("CURRENT USERNAME: %s",username);

  gotoxy(6,24);
  textcolor(10);printf("[Z] ");
  textcolor(12);
  printf("BACK");
  gotoxy(6,25);
  textcolor(Dropasci);
  printf("Press the corresponding characters of an options to continue");
  optionalgoswitch();
}
//-----------------------------------------------------------------------------
void optionalgoswitch()
{
  gotoxy(119,29);
  int OP;
  OP=getch();
  if(OP == 'b' || OP == 'B')
  {
    changetheme(1);
  }
  else if(OP == 'w' || OP == 'W')
  {
    changetheme(2);
  }
  else if(OP == 'y' || OP == 'Y')
  {
    changetheme(3);
  }
  else if(OP == 'r' || OP == 'R')
  {
    changeround();
  }
  else if(OP == 'n' || OP == 'N')
  {
    changename();
  }
  else if(OP == 'z' || OP == 'Z')
  {
    menu();
  }
  optionalgoswitch();
}
//-----------------------------------------------------------------------------
void changetheme(int theme)
{
  if(theme == 1)
  {
    system("COLOR 0F");
    Dborder = BTborder;
    Dtitle = BTtitle;
    Dropasci = BTropasci;
    option();
  }
  else if(theme == 2)
  {
    system("COLOR F0");
    Dborder = WTborder;
    Dtitle = WTtitle;
    Dropasci = WTropasci;
    option();
  }
  else if(theme == 3)
  {
    system("COLOR E0");
    Dborder = YTborder;
    Dtitle = YTtitle;
    Dropasci = YTropasci;
    option();
  }

}
//-----------------------------------------------------------------------------
void changeround()
{
int rlimit;
gotoxy(10,15);
textcolor(Dropasci);
printf("Enter new round limit: ");
scanf("%d", &rlimit);
totalrounds = rlimit;
option();
}
//-----------------------------------------------------------------------------
void changename()
{
  char tempuser[20];
  gotoxy(19,16);
  textcolor(10);printf("[MAX USERNAME IS 16 CHARACTERS]");
  gotoxy(10,18);
  textcolor(Dropasci);
  printf("Enter Username: ");
  scanf("%16s", tempuser);
  strcpy(username,tempuser);

  option();

}
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
void loading(int a, int b, int count)
{
  textcolor(Dropasci);
  for (int i = 0; i < 26; i++)
  {
    gotoxy(a+i,b);
    printf("%c", 219);
    gotoxy(119,29);
    delay(count);
  }

}
//-----------------------------------------------------------------------------
void bgplay()
{
  border(1);
  for (int i = 0; i < 109; i++)
  {
    gotoxy(5+i,4);
    printf("%c", 196);
    gotoxy(5+i,6);
    printf("%c", 196);
  }

  gotoxy(6,5);
  textcolor(Dtitle);
  printf("METACARPUS ARENA");
}
//-----------------------------------------------------------------------------
void nextmove()
{
  bgplay();
  ussscc();
  textcolor(Dropasci);
  gotoxy(10,14);
  printf (R"( ___ ___ ___ ___ ___     _   _  ___   __  __  __  _____   _____   _____ ___    ___ ___ ___ ___ _  _)");
  gotoxy(10,15);
  printf (R"(| _ \ _ \ __/ __/ __|   /_\ | \| \ \ / / |  \/  |/ _ \ \ / / __| |_   _/ _ \  | _ ) __/ __|_ _| \| |)");
  gotoxy(10,16);
  printf (R"(|  _/   / _|\__ \__ \  / _ \| .` |\ V /  | |\/| | (_) \ V /| _|    | || (_) | | _ \ _| (_ || || .` |)");
  gotoxy(10,17);
  printf (R"(|_| |_|_\___|___/___/ /_/ \_\_|\_| |_|   |_|  |_|\___/ \_/ |___|   |_| \___/  |___/___\___|___|_|\_|)");

  int splashy = (rand() % (15 - 1 + 1)) + 1;
  if (splashy == 1)
  {
    gotoxy(11,19);
    printf("By default, the moves are r for rock, p for paper, and s for scissor");
  }
  else if (splashy == 2)
  {
    gotoxy(11,19);
    printf("Fun Fact: Chiken is not a true chicken");
  }
  else if (splashy == 3)
  {
    gotoxy(11,19);
    printf("What z, x, and c do?");
  }
  else if (splashy == 4)
  {
    gotoxy(11,19);
    printf("The current winning points is %d", totalrounds);
  }
  else if (splashy == 5)
  {
    gotoxy(11,19);
    printf("This is purely made in C Language");
  }
  else if (splashy == 6)
  {
    gotoxy(11,19);
    printf("I think this is not purely made in C language");
  }
  else if (splashy == 7)
  {
    gotoxy(11,19);
    printf("OrEwAnInGeNjAnAi");
  }
  else if (splashy == 8)
  {
    gotoxy(11,19);
    printf("What does RoPaSci even mean?");
  }
  else if (splashy == 9)
  {
    gotoxy(11,19);
    printf("What are those buildings for?");
  }
  else if (splashy == 10)
  {
    gotoxy(11,19);
    printf("The bot's first move is always rock");
  }
  else if (splashy == 11)
  {
    gotoxy(11,19);
    printf("BOT: Did someone said that my first move is always rock?");
  }
  else if (splashy == 12)
  {
    gotoxy(11,19);
    printf("C, not C++");
  }
  else if (splashy == 13)
  {
    gotoxy(11,19);
    printf("It's actually a gun, not scissors");
  }
  else if (splashy == 14)
  {
    gotoxy(11,19);
    printf("The coordinates of this text is (11,19)");
  }
  else if (splashy == 15)
  {
    gotoxy(11,19);
    printf("There are 15 splash texts in total");
  }

}
//-----------------------------------------------------------------------------
