#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
#include "map1.h"
#include "map2.h"
#include "map3.h"
#include "map1.h"
#include "menu1.h"
#include "credits.h"
#include "start.h"
#include "menuf.h"

using namespace std;

void sleep (unsigned int duration);
void clear_screen();
void clear_screen1();

void start::starta()
{

    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);
   system("COLOR f0");
   while(true){

        if(GetAsyncKeyState(VK_RETURN)){

    system("cls");
    system("COLOR f4");
       menu1 mo;
       mo.menua();
}

    cout<<"\n\n            ######       #      ###   ###  ######     ######## ######\n";
        cout<<"           ##    ##     ###     #### ####  ##         ##    ## ##\n";
        cout<<"           ##          ## ##    ## ### ##  ##         ##    ## ####\n";
        cout<<"           ##   ####  #######   ##  #  ##  ####       ##    ## ##\n";
        cout<<"           ##    ##  ##     ##  ##     ##  ##         ##    ## ##\n";
        cout<<"            ######  ##       ## ##     ##  ######     ######## ##\n\n\n";
        cout<<"           ########## ##   ## ######       #      ###    ##  #####\n";
        cout<<"               ##     ##   ## ##   ##     ###     ####   ## ## \n";
        cout<<"               ##     ####### ######     ## ##    ## ##  ##  ###\n";
        cout<<"               ##     ##   ## ## ##     #######   ##  ## ##    ###\n";
        cout<<"               ##     ##   ## ##  ##   ##     ##  ##   ####      ##\n";
        cout<<"               ##     ##   ## ##   ## ##       ## ##    ###  #####\n";

cout<<"\n\n\n\n                       ====== PRESS ENTER TO START ====== \n\n\n";
cout<<"                                                        Created by: Joan Botzev";
sleep(framerate1);
clear_screen1();

if(GetAsyncKeyState(VK_RETURN)){

    system("cls");
    system("COLOR f4");
       menu1 mo;
       mo.menua();
}

    cout<<"\n\n            ######       #      ###   ###  ######     ######## ######\n";
        cout<<"           ##    ##     ###     #### ####  ##         ##    ## ##\n";
        cout<<"           ##          ## ##    ## ### ##  ##         ##    ## ####\n";
        cout<<"           ##   ####  #######   ##  #  ##  ####       ##    ## ##\n";
        cout<<"           ##    ##  ##     ##  ##     ##  ##         ##    ## ##\n";
        cout<<"            ######  ##       ## ##     ##  ######     ######## ##\n\n\n";
        cout<<"           ########## ##   ## ######       #      ###    ##  #####\n";
        cout<<"               ##     ##   ## ##   ##     ###     ####   ## ## \n";
        cout<<"               ##     ####### ######     ## ##    ## ##  ##  ###\n";
        cout<<"               ##     ##   ## ## ##     #######   ##  ## ##    ###\n";
        cout<<"               ##     ##   ## ##  ##   ##     ##  ##   ####      ##\n";
        cout<<"               ##     ##   ## ##   ## ##       ## ##    ###  #####\n";

cout<<"\n\n\n\n                     \n\n\n";
cout<<"                                                        Created by: Joan Botzev";

if(GetAsyncKeyState(VK_RETURN)){

    system("cls");
    system("COLOR f4");
       menu1 mo;
       mo.menua();
}

sleep(framerate);
clear_screen();
    }

}

void clear_screen1 ( void )
{
  DWORD n;                         /* Number of characters written */
  DWORD size;                      /* number of visible characters */
  COORD coord = {0};               /* Top left screen position */
  CONSOLE_SCREEN_BUFFER_INFO csbi;

  /* Get a handle to the console */
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );

  GetConsoleScreenBufferInfo ( h, &csbi );

  /* Find the number of characters to overwrite */
  size = csbi.dwSize.X * csbi.dwSize.Y;

  /* Overwrite the screen buffer with whitespace */
  FillConsoleOutputCharacter ( h, TEXT ( ' ' ), size, coord, &n );
  GetConsoleScreenBufferInfo ( h, &csbi );
  FillConsoleOutputAttribute ( h, csbi.wAttributes, size, coord, &n );

  /* Reset the cursor to the top left position */
  SetConsoleCursorPosition ( h, coord );
}
