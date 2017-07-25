#include "map1.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
#include "menu1.h"
#include <fstream>
using namespace std;

void re();
void clear_screen();
void sleep (unsigned int duration);

void map1::mapa()
{
    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);

    cout<<"\n                             ======= LEGEND =======\n\n";                       //
      cout<<" There once lived a young knight named X-eramir. He was famous for his courage\n";
      cout<<" and generosity, as well as his nearly inhuman ability to wield a sword. So\n";
      cout<<" when the ruler of the kingdom died of an unknown decease and a tournament was\n";
      cout<<" held to choose the new king, young X-eramir was thought to be the favorite to\n";
      cout<<" win the competition. Knowing that the odds were not in their favor, his fellow\n";
      cout<<" knights ambushed him and locked him into the castle dungeon. Having managed\n";
      cout<<" to escape with the help of the dungeon keeper, a man with a strong sense of\n";
      cout<<" justice, he now embarks on a quest to take revenge on those who have betrayed\n";
      cout<<" him....\n\n\n ";
system("pause");
PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
cout<<"\n\n\n\n\n\n\n\n LOADING . . .";Sleep(3500);system("cls");


PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
        int ppy=1, ppx=1, gpy=5, gpx=28;
char movement, playerSprite='X', goal='G';

Moveables enemy1;
enemy1.sprite='N';

Moveables enemy2;
enemy2.sprite='M';

Moveables enemy3;
enemy3.sprite='Y';

const char HEIGHT=11, WIDTH=55;
unsigned char maze[HEIGHT][WIDTH]={
//123456789012345678901234567890
"##############################",
"#  !#      # ###  ##         #",
"# ### ###  # !!  ### ####### #        GAME OF THRANS",
"#     #    #####  ## # !!  # #",
"######## #  ##     # ####  # #       Backspace - Menu",
"#  !   # #   #  #  #       # #          ESC - Quit",
"### ## # ### #  #! #### ######",
"#   !# #  ## #  ####  # # !! #                   W",
"# #### ## ## #   #    # #### #      Controls:  A-S-D",
"#         ##   #   #         #",
"##############################",
};

enemy1.x=14;
enemy1.y=7;
enemy2.x=22;
enemy2.y=9;
enemy3.x=10;
enemy3.y=3;


 srand(time (NULL));

while(on){
        if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);

        }

        cout<<"\n POINTS: "<<points<<"/10     MOVES: "<<moves<<"\n ";

    maze[ppy][ppx]=playerSprite;
    maze[gpy][gpx]=goal;
    maze[enemy1.y][enemy1.x]=enemy1.sprite;
    maze[enemy2.y][enemy2.x]=enemy2.sprite;
    maze[enemy3.y][enemy3.x]=enemy3.sprite;

    for(int y=0; y<HEIGHT;++y){
        cout<<endl;
        for(int x=0;x<WIDTH;++x){
            if(maze[y][x]=='G'&& x<33){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249);
              cout<<maze[gpy][gpx];
    }
            else if(maze[y][x]=='!'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                cout<<'!';
            }
            else if(maze[y][x]=='N'&&x<30){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'N';
            }
            else if(maze[y][x]=='M'&&x<30){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'M';
            }
            else if(maze[y][x]=='Y'&&x<30){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'Y';
            }
            else if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),68);
                cout<<'#';
            }

            else if(maze[y][x]=='X'){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249);
              cout<<maze[ppy][ppx];
    }
    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
        cout<<maze[y][x];}
        }
    }



for(;;){

    randNum=rand()%randNumMax+1;
    cout<<endl;

    if (maze[ppy][ppx]=='G'){
            ofstream file2;
  file2.open("r2.txt");
  file2.close();

            if (points<5){
cout<<"\n\n    Not enough points to complete the level... RESPAWNING... \n    ";
Sleep(500);system("pause");system("cls");ppy=1, ppx=1;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
            }
            else if(points>=5 && points!=10){

        PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
        cout<<"\n     You have completed the level: WOOOOW!  " ;
        system("pause");

        system("cls");
        map1 mo;
        mo.mapb();
            }
               else if(points==10){
                    PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
        cout<<"\n     You have completed the level: WOOOOW!  " ;
        system("pause");


                    system("cls");
               cout<<"\n\n\n\n\n\n\n                            YOU HAVE COMPLETED THE \n\n                          'NEW IN TOWN' ACHIEVEMENT !!!";
               cout<<"\n\n               ================================================\n\n\n                            ";
  cout<<"Enter your name: ";
  string name;
  cin>>name;
  cout<<"\n\n                          ";

                ofstream file;
  file.open("a.txt");
  file<<"\n\n                     ======= RECORDS & ACHIEVEMENTS ======= \n\n\n";
      file<<"                      1. New in Town --- Completed by "<<name;
  file.close();

  system("pause");
  system("CLS");
  map1 mo;
  mo.mapb();}

}
        else if(maze[ppy][ppx]=='Y'||maze[ppy][ppx]=='N'||maze[ppy][ppx]=='M'){
            PlaySound(TEXT("Die.wav"),NULL,SND_ASYNC);

            cout<<"\n    You DIED! RESPAWNING.....\n \n    >> Backspace == MENU\n    >> ESC == QUIT\n\n    ";
          Sleep(500);system("pause");system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);ppy=1, ppx=1;
            PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
            }

            movement=getch();
            switch (movement){
        case'w':
            if (maze[ppy-1][ppx]!='#' &&(maze[ppy-1][ppx]==' '||(maze[ppy-1][ppx]=='G','N','M','Y','!'))){
                maze[ppy][ppx]=' ';
                ppy--;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;

                 }

            }
            break;
             case'a':
            if (maze[ppy][ppx-1]!='#' &&(maze[ppy][ppx-1]==' '||(maze[ppy][ppx-1]=='G','N','M','Y'))){
                maze[ppy][ppx]=' ';
                ppx--;
                moves++;
                if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;

                 }

            }
            break;
             case's':
            if (maze[ppy+1][ppx]!='#' &&(maze[ppy+1][ppx]==' '||(maze[ppy+1][ppx]=='G','N','M','Y'))){
                maze[ppy][ppx]=' ';
                ppy++;
                moves++;
                    if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;

                 }
            }
            break;
             case'd':
            if (maze[ppy][ppx+1]!='#' &&(maze[ppy][ppx+1]==' '||(maze[ppy][ppx+1]=='G','N','M','Y'))){
                maze[ppy][ppx]=' ';
                ppx++;
                moves++;
                    if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;

                 }
            }
            break;
default: randNum=0;break;


        }
        if(randNum==1&&maze[enemy1.y-1][enemy1.x]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.y--;
        }
        if(randNum==2&&maze[enemy1.y+1][enemy1.x]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.y++;
        }
        if(randNum==1&&maze[enemy2.y][enemy2.x-1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x--;
        }
        if(randNum==2&&maze[enemy2.y][enemy2.x+1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x++;
        }
        if(randNum==1&&maze[enemy3.y-1][enemy3.x]!='#'){
            maze[enemy3.y][enemy3.x]=' ';
            enemy3.y--;
        }
        if(randNum==2&&maze[enemy3.y+1][enemy3.x]!='#'){
            maze[enemy3.y][enemy3.x]=' ';
            enemy3.y++;
        }



break;
    }
    sleep(frameRate);
    clear_screen ();
}
};

void map1::mapb(){
system("color f4");
    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);

  cout<<"\n                             ======= LEGEND =======\n\n";            //         //
    cout<<" Wandering through the dark tunnels and slaying anyone who tries to stop him,\n";
    cout<<" the brave hero finally sees the light of the moon tearing through the\n";
    cout<<" darkness... \n\n\n ";
system("pause");
PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n LOADING . . .";Sleep(3500);system("cls");

    PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
            int ppy=1, ppx=1, gpy=20, gpx=32;
char movement, playerSprite='X', goal='G', R;

Moveables enemy1;
enemy1.sprite='Y';

Moveables enemy2;
enemy2.sprite='M';

Moveables enemy3;
enemy3.sprite='N';

Moveables enemy4;
enemy4.sprite='I';

Moveables enemy5;
enemy5.sprite='O';

Moveables enemy6;
enemy6.sprite='L';

Moveables enemy7;
enemy7.sprite='S';

Moveables enemy8;
enemy8.sprite='Z';

const char HEIGHT=22, WIDTH=79;
unsigned char maze[HEIGHT][WIDTH]={                                              //
"##################################",
"#  ! #    #                      #",
"# ####  #   # ##### # ########## #     GAME OF THRANS",
"#       # # #  !# ### #          #",
"# ####### # # # # !!! # # ! #    #        CONTROLS:",
"# #      !# # # ### ### ##########",
"# # ####### # #   # #            #            W",
"# # #       # ### ### ########## #          A-S-D",
"#!        # #   #     #  !!    # #",
"######### # ### #     #######  # #",
"#         #     #                #",
"# ######### ### # ###########  # #     Backspace - Menu",
"# #!        ### #           #### #",
"# ##### #   ### # #######        #        ESC - Quit",
"#     # #       #       # ###### #",
"# ### # ####### # ##### # #      #",
"# ### #       # # # ! #!# # ######",
"# ### ####### # # # # ### # # !! #",
"#        !! # #   # #     #!# #  #",
"# ########### ##### ##### ### #  #",
"#                       #     #  #",
"##################################",



};

enemy1.x=11;
enemy1.y=10;
enemy2.x=1;
enemy2.y=10;
enemy3.x=12;
enemy3.y=14;
enemy4.x=17;
enemy4.y=20;
enemy5.x=13;
enemy5.y=1;
enemy6.x=17;
enemy6.y=15;
enemy7.x=21;
enemy7.y=6;
enemy8.x=32;
enemy8.y=11;

srand(time (NULL));

while(on){
        if(GetAsyncKeyState(VK_BACK)){
            system("cls");
            menu1 mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);

        }

        cout<<"\n     POINTS: "<<points<<"/18   MOVES: "<<moves;

    maze[ppy][ppx]=playerSprite;
    maze[gpy][gpx]=goal;
    maze[enemy1.y][enemy1.x]=enemy1.sprite;
    maze[enemy2.y][enemy2.x]=enemy2.sprite;
    maze[enemy3.y][enemy3.x]=enemy3.sprite;
    maze[enemy4.y][enemy4.x]=enemy4.sprite;
    maze[enemy5.y][enemy5.x]=enemy5.sprite;
    maze[enemy6.y][enemy6.x]=enemy6.sprite;
    maze[enemy7.y][enemy7.x]=enemy7.sprite;
    maze[enemy8.y][enemy8.x]=enemy8.sprite;

    for(int y=0; y<HEIGHT;++y){
        cout<<endl;
        for(int x=0;x<WIDTH;++x){
            if(maze[y][x]=='G'&& x<33){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249);
              cout<<maze[gpy][gpx];
    }
            else if(maze[y][x]=='!'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                cout<<'!';
            }
            else if(maze[y][x]=='N'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'N';
            }
            else if(maze[y][x]=='M'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'M';
            }
            else if(maze[y][x]=='Z'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'Z';
            }
            else if(maze[y][x]=='Y'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'Y';
            }
            else if(maze[y][x]=='I'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'I';
            }
            else if(maze[y][x]=='O'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'O';
            }
            else if(maze[y][x]=='S'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'S';
            }
            else if(maze[y][x]=='L'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
                cout<<'L';
            }
            else if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),68);
                cout<<'#';
            }

            else if(maze[y][x]=='X'){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249);
              cout<<maze[ppy][ppx];
    }
    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
        cout<<maze[y][x];}
        }
    }
for(;;){

    randNum=rand()%randNumMax+1;


    if (maze[ppy][ppx]=='G'){
            ofstream file3;
  file3.open("r3.txt");
  file3.close();


 if(points<9){
    cout<<"\n\n    Not enough points to complete the level... RESPAWNING... \n    ";
Sleep(500);system("pause");system("cls");ppy=1, ppx=1;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);

}
else if(moves/points>13 && points>=9){

            PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
        cout<<"\n\n   You have completed the chapter! Press Backspace to return to Menu... \n";
       }
    if(moves/points<=13 && points>=9){
          PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);


                    system("cls");
           cout<<"\n\n\n\n\n\n\n                            YOU HAVE COMPLETED THE \n\n                           'DEDICATED' ACHIEVEMENT !!!";
                       cout<<"\n\n               ================================================\n\n\n                            ";
  cout<<"Enter your name: ";
  string name;
  cin>>name;

                ofstream file;
  file.open("b.txt");

      file<<"                      2. Dedicated --- Completed by "<<name;
  file.close();

                     cout<<"\n\n\n\n       You have completed the chapter! Press Backspace to return to Menu... \n";
    }
       }
        else if(maze[ppy][ppx]=='Y'||maze[ppy][ppx]=='N'||maze[ppy][ppx]=='M'||maze[ppy][ppx]=='I'||maze[ppy][ppx]=='L'||maze[ppy][ppx]=='S'||maze[ppy][ppx]=='O'||maze[ppy][ppx]=='Z'){
            PlaySound(TEXT("Die.wav"),NULL,SND_ASYNC);
            cout<<"\n\n    You DIED! RESPAWNING.....\n \n    >> Backspace == MENU\n    >> ESC == QUIT\n\n    ";
            Sleep(500);system("pause");system("cls");ppy=1, ppx=1;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
            PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
            }

            movement=getch();
            switch (movement){
        case'w':
            if (maze[ppy-1][ppx]!='#' &&(maze[ppy-1][ppx]==' '||(maze[ppy-1][ppx]=='G','N','M','Y','I','O','L','S','Z','!'))){
                maze[ppy][ppx]=' ';
                ppy--;
                moves++;
                if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;}}
            break;
             case'a':
            if (maze[ppy][ppx-1]!='#' &&(maze[ppy][ppx-1]==' '||(maze[ppy][ppx-1]=='G','N','M','Y','I','O','L','S','Z','!'))){
                maze[ppy][ppx]=' ';
                ppx--;
                moves++;
                if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;}}
            break;
             case's':
            if (maze[ppy+1][ppx]!='#' &&(maze[ppy+1][ppx]==' '||(maze[ppy+1][ppx]=='G','N','M','Y','I','O','L','S','Z','!'))){
                maze[ppy][ppx]=' ';
                ppy++;
                moves++;
                if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;}}
            break;
             case'd':
            if (maze[ppy][ppx+1]!='#' &&(maze[ppy][ppx+1]==' '||(maze[ppy][ppx+1]=='G','N','M','Y','I','O','L','S','Z','!'))){
                maze[ppy][ppx]=' ';
                ppx++;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;}}
            break;
default: randNum=0;break;
    }
         if(randNum==1&&maze[enemy1.y-1][enemy1.x]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.y--;
        }
        if(randNum==2&&maze[enemy1.y+1][enemy1.x]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.y++;
        }

        if(randNum==1&&maze[enemy2.y-1][enemy2.x]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.y--;
        }
        if(randNum==2&&maze[enemy2.y+1][enemy2.x]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.y++;
        }

        if(randNum==1&&maze[enemy3.y][enemy3.x-1]!='#'){
            maze[enemy3.y][enemy3.x]=' ';
            enemy3.x--;
        }
          if(randNum==2&&maze[enemy3.y][enemy3.x+1]!='#'){
            maze[enemy3.y][enemy3.x]=' ';
            enemy3.x++;
        }

        if(randNum==1&&maze[enemy4.y][enemy4.x-1]!='#'){
            maze[enemy4.y][enemy4.x]=' ';
            enemy4.x--;
        }
        if(randNum==2&&maze[enemy4.y][enemy4.x+1]!='#'){
            maze[enemy4.y][enemy4.x]=' ';
            enemy4.x++;
        }if(randNum==1&&maze[enemy5.y-1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y--;
        }
        if(randNum==2&&maze[enemy5.y+1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y++;
        }
        if(randNum==3&&maze[enemy5.y][enemy5.x-1]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.x--;
        }
        if(randNum==4&&maze[enemy5.y][enemy5.x+1]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.x++;
        }if(randNum==1&&maze[enemy6.y-1][enemy6.x]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.y--;
        }
        if(randNum==2&&maze[enemy6.y+1][enemy6.x]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.y++;
        }
        if(randNum==1&&maze[enemy7.y-1][enemy7.x]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.y--;
        }
        if(randNum==2&&maze[enemy7.y+1][enemy7.x]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.y++;
        }
        if(randNum==3&&maze[enemy7.y][enemy7.x-1]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.x--;
        }
        if(randNum==4&&maze[enemy7.y][enemy7.x+1]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.x++;
        }
        if(randNum==1&&maze[enemy8.y-1][enemy8.x]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.y--;
        }
        if(randNum==2&&maze[enemy8.y+1][enemy8.x]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.y++;
        }

break;
    }
    sleep(frameRate);
    clear_screen ();
}

    }

    void sleep(unsigned int duration){
clock_t goal=clock()+duration;
while(clock()<goal);
}

void clear_screen ( void )
{
  DWORD n;                         /* Number of characters written */
  DWORD size;                      /* number of visible characters */
  COORD coord = {0};               /* Top left screen position */
  CONSOLE_SCREEN_BUFFER_INFO csbi;

  /* Get a handle to the console */
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );

  GetConsoleScreenBufferInfo ( h, &csbi );

  /* Find the number of characters to overwrite */


  /* Reset the cursor to the top left position */
  SetConsoleCursorPosition ( h, coord );
}


void re(){
system("pause");system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);}
