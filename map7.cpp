#include "map7.h"
#include "menuaq.h"
#include <iostream>
#include<windows.h>
#include<string>
#include<cstdlib>
#include<conio.h>
#include<mmsystem.h>
#include<cmath>
#include<ctime>
#include "credits.h"
#include "bonus.h"
#include <fstream>
#include "pass.h"
using namespace std;

void re();
void clear_screen();
void sleep1 (unsigned int duration);

void map7::mapc()
{system("color 3f");
    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);


    cout<<"\n                             ======= LEGEND =======\n\n";            //        //
      cout<<" Ominous silence surrounded the castle courtyard. Silence, broken only by the\n";
      cout<<" young warrior's footsteps. He walked slowly, giving time for his eyes to \n";
      cout<<" adjust to the darkness and searching for his enemies. And there they stood, in\n";
      cout<<" front of the gate - those he had once called his friends. X-eramir looked at\n";
      cout<<" them with grief, memories of the battles they fought together suddenly\n";
      cout<<" appeared. Moments he had cherished deep inside his heart. Now all that was\n";
      cout<<" left in his heart where anger and disappointment. X-eramir let those two\n";
      cout<<" feelings take control over him as he furiously charged into battle...\n\n\n ";
system("pause");
PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
cout<<"\n\n\n\n\n\n\n\n\n LOADING . . .";Sleep(3500);system("cls");
system("color f3");
    PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
      int ppy=5, ppx=1, gpy=3, gpx=39, ggy=20, ggx=2;
char movement, playerSprite='X', goal='G', goal2='Q';

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

Moveables enemy9;
enemy9.sprite='P';

Moveables enemy10;
enemy10.sprite='K';

Moveables enemy11;
enemy11.sprite='R';

Moveables enemy12;
enemy12.sprite='U';

Moveables enemy13;
enemy13.sprite='H';

Moveables enemy14;
enemy14.sprite='V';
Moveables enemy15;
enemy15.sprite='B';
Moveables enemy16;
enemy16.sprite='E';
Moveables enemy17;
enemy17.sprite='E';
Moveables enemy18;
enemy18.sprite='E';
Moveables enemy19;
enemy19.sprite='E';
Moveables enemy20;
enemy20.sprite='E';
Moveables enemy21;
enemy21.sprite='E';
Moveables enemy22;
enemy22.sprite='E';
Moveables enemy23;
enemy23.sprite='E';
Moveables enemy24;
enemy24.sprite='E';
Moveables enemy25;
enemy25.sprite='E';
Moveables enemy26;
enemy26.sprite='E';
Moveables enemy27;
enemy27.sprite='E';
Moveables enemy28;
enemy28.sprite='E';
Moveables enemy29;
enemy29.sprite='E';
Moveables enemy30;
enemy30.sprite='E';

const char HEIGHT=22, WIDTH=70;
unsigned char maze[HEIGHT][WIDTH]={                                              //
"  ####################################",
"  #     #      #           #         #",
"  #   # #        !!######  # ####### ######          GAME OF THRANS",
"  # ### #   #! #####       #       # !! !!#",
"### #   #   #### !## ##########! ######## #            Controls:",
"#   #   ##  #  #           #         ##   # ",
"#####          #  ##### ####### !#####    #                W",
"  #   ########### #         !#      ### ! #              A-S-D",
"  #   !#       #  # ###########  ######## #",
"  #        #      #                       #",
"  ###########################################  ",
"                                          # #       Backspace - Menu",
"########################################### #####",
"#                                  #####    #!  #      ESC - Quit ",
"#                              ###    ## ###### # ",
"#                              #!# #  ##      # #",
"#                                # #  #######   #",
"#                              #   #        # ###",
"#                          #  #### ####     # #",
"#!  #                      # !!! # #  #       #",
"##  ###########################################",
" ####",

};
enemy1.x=5;
enemy1.y=1;
enemy2.x=7;
enemy2.y=6;
enemy3.x=6;
enemy3.y=9;
enemy4.x=11;
enemy4.y=8;
enemy5.x=25;
enemy5.y=2;
enemy6.x=21;
enemy6.y=5;
enemy7.x=20;
enemy7.y=8;
enemy8.x=32;
enemy8.y=7;
enemy9.x=31;
enemy9.y=5;
enemy10.x=31;
enemy10.y=3;
enemy11.x=38;
enemy11.y=6;
enemy12.x=39;
enemy12.y=5;
enemy13.x=14;
enemy13.y=2;
enemy14.x=45;  //SSSSSSSS
enemy14.y=15;
enemy15.x=41;
enemy15.y=18;
enemy16.x=42;
enemy16.y=17;
enemy17.x=5;
enemy17.y=13;
enemy18.x=8;
enemy18.y=14;
enemy19.x=6;
enemy19.y=15;
enemy20.x=3;
enemy20.y=16;
enemy21.x=3;
enemy21.y=17;
enemy22.x=5;
enemy22.y=18;
enemy23.x=5;
enemy23.y=19;
enemy24.x=15;
enemy24.y=13;
enemy25.x=18;
enemy25.y=14;
enemy26.x=14;
enemy26.y=15;
enemy27.x=13;
enemy27.y=16;
enemy28.x=11;
enemy28.y=17;
enemy29.x=17;
enemy29.y=18;
enemy30.x=15;
enemy30.y=19;

srand(time (NULL));

while(on){
    if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menuaq mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);

        }
        cout<<"\n          POINTS: "<<points<<"/19   MOVES: "<<moves;

    maze[ppy][ppx]=playerSprite;
    maze[gpy][gpx]=goal;
    maze[ggy][ggx]=goal2;
    maze[enemy1.y][enemy1.x]=enemy1.sprite;
    maze[enemy2.y][enemy2.x]=enemy2.sprite;
    maze[enemy3.y][enemy3.x]=enemy3.sprite;
    maze[enemy4.y][enemy4.x]=enemy4.sprite;
    maze[enemy5.y][enemy5.x]=enemy5.sprite;
    maze[enemy6.y][enemy6.x]=enemy6.sprite;
    maze[enemy7.y][enemy7.x]=enemy7.sprite;
    maze[enemy8.y][enemy8.x]=enemy8.sprite;
    maze[enemy9.y][enemy9.x]=enemy9.sprite;
    maze[enemy10.y][enemy10.x]=enemy10.sprite;
    maze[enemy11.y][enemy11.x]=enemy11.sprite;
    maze[enemy12.y][enemy12.x]=enemy12.sprite;
    maze[enemy13.y][enemy13.x]=enemy13.sprite;
    maze[enemy14.y][enemy14.x]=enemy14.sprite;
    maze[enemy15.y][enemy15.x]=enemy15.sprite;
    maze[enemy16.y][enemy16.x]=enemy16.sprite;
    maze[enemy17.y][enemy17.x]=enemy17.sprite;
    maze[enemy18.y][enemy18.x]=enemy18.sprite;
    maze[enemy19.y][enemy19.x]=enemy19.sprite;
    maze[enemy20.y][enemy20.x]=enemy20.sprite;
    maze[enemy21.y][enemy21.x]=enemy21.sprite;
    maze[enemy22.y][enemy22.x]=enemy22.sprite;
    maze[enemy23.y][enemy23.x]=enemy23.sprite;
    maze[enemy24.y][enemy24.x]=enemy24.sprite;
    maze[enemy25.y][enemy25.x]=enemy25.sprite;
    maze[enemy26.y][enemy26.x]=enemy26.sprite;
    maze[enemy27.y][enemy27.x]=enemy27.sprite;
    maze[enemy28.y][enemy28.x]=enemy28.sprite;
    maze[enemy29.y][enemy29.x]=enemy29.sprite;
    maze[enemy30.y][enemy30.x]=enemy30.sprite;

    for(int y=0; y<HEIGHT;++y){
        cout<<endl;
        for(int x=0;x<WIDTH;++x){
            if(maze[y][x]=='G'&& x<40){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[gpy][gpx];
    }
            else if(maze[y][x]=='Q'&&x<5){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[ggy][ggx];
            }
            else if(maze[y][x]=='!'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                cout<<'!';
            }
            else if((maze[y][x]=='O'||maze[y][x]=='Z'||maze[y][x]=='H'||maze[y][x]=='Y'||maze[y][x]=='N'||maze[y][x]=='M'||maze[y][x]=='B'||maze[y][x]=='V'||maze[y][x]=='R'||maze[y][x]=='U'||maze[y][x]=='P'||maze[y][x]=='K'||maze[y][x]=='S'||maze[y][x]=='L'||maze[y][x]=='I')&&x<50){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'N';
            }
            else if(maze[y][x]=='E'&&x<50){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'E';
            }
            else if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
                cout<<'#';
            }

            else if(maze[y][x]=='X'){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
              cout<<maze[ppy][ppx];
    }
    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
        cout<<maze[y][x];}
        }
    }
for(;;){

    randNum=rand()%randNumMax+1;

    if (maze[ppy][ppx]=='G'){


             PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
      cout<<"\n    You reached room 2: WOOOOW!   >>>>   CHECKPOINT  <<<<  \n    ";
        Sleep(500);system("pause");system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
        ppy=11,ppx=43;
        PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);


    }
    if(maze[ppy][ppx]=='Q'){
            ofstream file4;
  file4.open("r4.txt");
  file4.close();

            if (points<9){
    cout<<"\n\n    Not enough points to complete the level...  RESPAWNING...\n    ";
    Sleep(500);system("pause");system("cls");ppy=5, ppx=1;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
}
else if((points>=9 && points<19) || (points==19 && moves!=294)){

            PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
            cout<<"\n\n    You have completed the level: WOOOOW! \n";
            cout<<"    ";
            system("pause");
            system("CLS");
             map7 ma;
             ma.mapd();


             }
        else if(points==19 && moves==294){
            PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
        cout<<"\n     You have completed the level: WOOOOW!  " ;
        system("pause");


                    system("cls");
               cout<<"\n\n\n\n\n\n\n                            YOU HAVE COMPLETED THE \n\n                          'LIKE A BOSS' ACHIEVEMENT !!!";
               cout<<"\n\n               ================================================\n\n\n                            ";
  cout<<"Enter your name: ";
  string name;
  cin>>name;
  cout<<"\n\n                          ";

                ofstream file;
  file.open("c.txt");
      file<<"                      3. Like a Boss --- Completed by "<<name;
  file.close();

  system("pause");
  system("CLS");
  map7 mo;
  mo.mapd();
        }
    }

           else if(maze[ppy][ppx]=='Y'||maze[ppy][ppx]=='N'||maze[ppy][ppx]=='M'||maze[ppy][ppx]=='I'||maze[ppy][ppx]=='L'||maze[ppy][ppx]=='S'||maze[ppy][ppx]=='O'||maze[ppy][ppx]=='Z'||maze[ppy][ppx]=='P'||maze[ppy][ppx]=='K'||maze[ppy][ppx]=='R'||maze[ppy][ppx]=='U'||maze[ppy][ppx]=='H'){
            PlaySound(TEXT("Die.wav"),NULL,SND_ASYNC);
            cout<<"\n      You DIED! RESPAWNING.....\n \n      >> Backspace == MENU\n      >> ESC == QUIT\n\n      ";
            Sleep(500);system("pause");system("cls");ppy=5, ppx=1;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
            PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);}
        else if (maze[ppy][ppx]=='E'||maze[ppy][ppx]=='V'||maze[ppy][ppx]=='B'){
            Beep(300,800);
            cout<<"\n      You DIED!  ";
            system("pause");
            system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
            ppx=43, ppy=11;}

            movement=getch();
            switch (movement){
        case'w':
            if (maze[ppy-1][ppx]!='#' &&(maze[ppy-1][ppx]==' '||(maze[ppy-1][ppx]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
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
            if (maze[ppy][ppx-1]!='#' &&(maze[ppy][ppx-1]==' '||(maze[ppy][ppx-1]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
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
            if (maze[ppy+1][ppx]!='#' &&(maze[ppy+1][ppx]==' '||(maze[ppy+1][ppx]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
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
            if (maze[ppy][ppx+1]!='#' &&(maze[ppy][ppx+1]==' '||(maze[ppy][ppx+1]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
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
         if(randNum==1&&maze[enemy1.y][enemy1.x-1]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.x--;
        }
        if(randNum==2&&maze[enemy1.y][enemy1.x+1]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.x++;
        }

        if(randNum==1&&maze[enemy2.y][enemy2.x-1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x--;
        }
        if(randNum==2&&maze[enemy2.y][enemy2.x+1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x++;
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
        }
        if(randNum==1&&maze[enemy5.y-1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y--;
        }
        if(randNum==2&&maze[enemy5.y+1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y++;
        }
        if(randNum==1&&maze[enemy6.y][enemy6.x-1]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.x--;
        }
        if(randNum==2&&maze[enemy6.y][enemy6.x+1]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.x++;
        }
        if(randNum==1&&maze[enemy7.y-1][enemy7.x]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.y--;
        }
        if(randNum==2&&maze[enemy7.y+1][enemy7.x]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.y++;
        }
        if(randNum==1&&maze[enemy8.y][enemy8.x-1]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.x--;
        }
        if(randNum==2&&maze[enemy8.y][enemy8.x+1]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.x++;
        }
         if(randNum==1&&maze[enemy9.y][enemy9.x-1]!='#'){
            maze[enemy9.y][enemy9.x]=' ';
            enemy9.x--;
        }
        if(randNum==2&&maze[enemy9.y][enemy9.x+1]!='#'){
            maze[enemy9.y][enemy9.x]=' ';
            enemy9.x++;
        }
        if(randNum==1&&maze[enemy10.y][enemy10.x-1]!='#'){
            maze[enemy10.y][enemy10.x]=' ';
            enemy10.x--;
        }
        if(randNum==2&&maze[enemy10.y][enemy10.x+1]!='#'){
            maze[enemy10.y][enemy10.x]=' ';
            enemy10.x++;
        }

        if(randNum==1&&maze[enemy11.y][enemy11.x-1]!='#'&&maze[enemy11.y][enemy11.x-1]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.x--;
        }
        if(randNum==2&&maze[enemy11.y][enemy11.x+1]!='#'&&maze[enemy11.y][enemy11.x+1]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.x++;
        }
        if(randNum==3&&maze[enemy11.y-1][enemy11.x]!='+'&&maze[enemy11.y-1][enemy11.x]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.y--;
        }
        if(randNum==4&&maze[enemy11.y+1][enemy11.x]!='+'&&maze[enemy11.y+1][enemy11.x]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.y++;
        }
        if(randNum==2&&maze[enemy12.y][enemy12.x-1]!='#'&&maze[enemy12.y][enemy12.x-1]!='R'){
            maze[enemy12.y][enemy12.x]=' ';
            enemy12.x--;
        }
        if(randNum==1&&maze[enemy12.y][enemy12.x+1]!='#'&&maze[enemy12.y][enemy12.x+1]!='R'){
            maze[enemy12.y][enemy12.x]=' ';
            enemy12.x++;
        }

        if(randNum==1&&maze[enemy13.y-1][enemy13.x]!='#'){
            maze[enemy13.y][enemy13.x]=' ';
            enemy13.y--;
        }
        if(randNum==2&&maze[enemy13.y+1][enemy13.x]!='#'){
            maze[enemy13.y][enemy13.x]=' ';
            enemy13.y++;
        }
        if(randNum==1&&maze[enemy14.y-1][enemy14.x]!='#'){
            maze[enemy14.y][enemy14.x]=' ';
            enemy14.y--;
        }
        if(randNum==2&&maze[enemy14.y+1][enemy14.x]!='#'){
            maze[enemy14.y][enemy14.x]=' ';
            enemy14.y++;
        }
        if(randNum==2&&maze[enemy15.y][enemy15.x-1]!='#'){
            maze[enemy15.y][enemy15.x]=' ';
            enemy15.x--;
        }
        if(randNum==1&&maze[enemy15.y][enemy15.x+1]!='#'){
            maze[enemy15.y][enemy15.x]=' ';
            enemy15.x++;
        }
        if(randNum==1&&maze[enemy16.y][enemy16.x-1]!='#'){
            maze[enemy16.y][enemy16.x]=' ';
            enemy16.x--;
        }
        if(randNum==2&&maze[enemy16.y][enemy16.x+1]!='#'){
            maze[enemy16.y][enemy16.x]=' ';
            enemy16.x++;
        }
        if((randNum==1 || randNum==2) && maze[enemy17.y][enemy17.x+1]!='#'){
            maze[enemy17.y][enemy17.x]=' ';
            enemy17.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy17.y][enemy17.x+1]=='#'){
                maze[enemy17.y][enemy17.x]=' ';
               enemy17.x=1;
               enemy17.y=13;                      //SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
            }
        if((randNum==1 || randNum==2) && maze[enemy18.y][enemy18.x+1]!='#'){
            maze[enemy18.y][enemy18.x]=' ';
            enemy18.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy18.y][enemy18.x+1]=='#'){
                maze[enemy18.y][enemy18.x]=' ';
               enemy18.x=1;
               enemy18.y=14;
            }
            if((randNum==1 || randNum==2) && maze[enemy18.y][enemy18.x+1]!='#'){
            maze[enemy18.y][enemy18.x]=' ';
            enemy18.x++;

            }
            else if((randNum==1 || randNum==2) && maze[enemy18.y][enemy18.x+1]=='#'){
                maze[enemy18.y][enemy18.x]=' ';
               enemy18.x=1;
               enemy18.y=14;
            }
        if((randNum==1 || randNum==2) && maze[enemy19.y][enemy19.x+1]!='#'){
            maze[enemy19.y][enemy19.x]=' ';
            enemy19.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy19.y][enemy19.x+1]=='#'){
                maze[enemy19.y][enemy19.x]=' ';
               enemy19.x=1;
               enemy19.y=15;
            }
        if((randNum==1 || randNum==2) && maze[enemy20.y][enemy20.x+1]!='#'){
            maze[enemy20.y][enemy20.x]=' ';
            enemy20.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy20.y][enemy20.x+1]=='#'){
                maze[enemy20.y][enemy20.x]=' ';
               enemy20.x=1;
               enemy20.y=16;
            }
        if((randNum==1 || randNum==2) && maze[enemy21.y][enemy21.x+1]!='#'){
            maze[enemy21.y][enemy21.x]=' ';
            enemy21.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy21.y][enemy21.x+1]=='#'){
                maze[enemy21.y][enemy21.x]=' ';
               enemy21.x=1;
               enemy21.y=17;
            }
        if((randNum==1 || randNum==2) && maze[enemy22.y][enemy22.x+1]!='#'){
            maze[enemy22.y][enemy22.x]=' ';
            enemy22.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy22.y][enemy22.x+1]=='#'){
                maze[enemy22.y][enemy22.x]=' ';
               enemy22.x=1;
               enemy22.y=18;
            }
        if((randNum==1 || randNum==2) && maze[enemy23.y][enemy23.x+1]!='#'){
            maze[enemy23.y][enemy23.x]=' ';
            enemy23.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy23.y][enemy23.x+1]=='#'){
                maze[enemy23.y][enemy23.x]=' ';
               enemy23.x=5;
               enemy23.y=19;
            }
             if((randNum==1 || randNum==2) && maze[enemy24.y][enemy24.x+1]!='#'){
            maze[enemy24.y][enemy24.x]=' ';
            enemy24.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy24.y][enemy24.x+1]=='#'){
                maze[enemy24.y][enemy24.x]=' ';
               enemy24.x=1;
               enemy24.y=13;
            }
             if((randNum==1 || randNum==2) && maze[enemy25.y][enemy25.x+1]!='#'){
            maze[enemy25.y][enemy25.x]=' ';
            enemy25.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy25.y][enemy25.x+1]=='#'){
                maze[enemy25.y][enemy25.x]=' ';
               enemy25.x=1;
               enemy25.y=14;
            }
             if((randNum==1 || randNum==2) && maze[enemy26.y][enemy26.x+1]!='#'){
            maze[enemy26.y][enemy26.x]=' ';
            enemy26.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy26.y][enemy26.x+1]=='#'){
                maze[enemy26.y][enemy26.x]=' ';
               enemy26.x=1;
               enemy26.y=15;
            }
             if((randNum==1 || randNum==2) && maze[enemy27.y][enemy27.x+1]!='#'){
            maze[enemy27.y][enemy27.x]=' ';
            enemy27.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy27.y][enemy27.x+1]=='#'){
                maze[enemy27.y][enemy27.x]=' ';
               enemy27.x=1;
               enemy27.y=16;
            }
             if((randNum==1 || randNum==2) && maze[enemy28.y][enemy28.x+1]!='#'){
            maze[enemy28.y][enemy28.x]=' ';
            enemy28.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy28.y][enemy28.x+1]=='#'){
                maze[enemy28.y][enemy28.x]=' ';
               enemy28.x=1;
               enemy28.y=17;
            }
             if((randNum==1 || randNum==2) && maze[enemy29.y][enemy29.x+1]!='#'){
            maze[enemy29.y][enemy29.x]=' ';
            enemy29.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy29.y][enemy29.x+1]=='#'){
                maze[enemy29.y][enemy29.x]=' ';
               enemy29.x=1;
               enemy29.y=18;
            }
             if((randNum==1 || randNum==2) && maze[enemy30.y][enemy30.x+1]!='#'){
            maze[enemy30.y][enemy30.x]=' ';
            enemy30.x++;
}
           else if((randNum==1 || randNum==2) && maze[enemy30.y][enemy30.x+1]=='#'){
                maze[enemy30.y][enemy30.x]=' ';
               enemy30.x=5;
               enemy30.y=19;
            }




break;
    }
    sleep1(frameRate);
    clear_screen();
}
};


void map7::mapd()
{system("color 3f");
    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);

    cout<<"\n                             ======= LEGEND =======\n\n";                      //
      cout<<" The sun was rising in a red, devilish color. The castle's shadow had spread\n";
      cout<<" across the courtyard, as if to hide the bloodshed the furious battle was\n";
      cout<<" causing. Love, empathy, forgiveness - X-eramir had buried them all deep inside\n";
      cout<<" himself, letting new emotions, once he never knew he could feel, surface from\n";
      cout<<" the depths of his heart - hatred, rage, bloodlust. Few of his once fellow\n";
      cout<<" knights were already slain by his sword, but that only made the rest fight\n";
      cout<<" even more desperate and rampant...\n\n\n ";
system("pause");
PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
cout<<"\n\n\n\n\n\n\n\n\n\n LOADING . . .";Sleep(3500);system("cls");

system("color f3");
    PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
      int ppy=1, ppx=29, gpy=16, gpx=76, life=1;
char movement, playerSprite='X', goal='G';

Moveables enemy1;
enemy1.sprite='E';
Moveables enemy2;
enemy2.sprite='E';
Moveables enemy3;
enemy3.sprite='E';
Moveables enemy4;
enemy4.sprite='E';
Moveables enemy5;
enemy5.sprite='E';
Moveables enemy6;
enemy6.sprite='E';
Moveables enemy7;
enemy7.sprite='E';
Moveables enemy8;
enemy8.sprite='E';
Moveables enemy9;
enemy9.sprite='E';
Moveables enemy10;
enemy10.sprite='E';
Moveables enemy11;
enemy11.sprite='E';
Moveables enemy12;
enemy12.sprite='E';
Moveables enemy13;
enemy13.sprite='E';
Moveables enemy14;
enemy14.sprite='E';
Moveables enemy15;
enemy15.sprite='E';
Moveables enemy16;
enemy16.sprite='E';
Moveables enemy17;
enemy17.sprite='E';
Moveables enemy18;
enemy18.sprite='E';
Moveables enemy19;
enemy19.sprite='E';
Moveables enemy20;
enemy20.sprite='E';
Moveables enemy21;
enemy21.sprite='E';
Moveables enemy31;
enemy31.sprite='E';
Moveables enemy32;
enemy32.sprite='E';
Moveables enemy33;
enemy33.sprite='E';
Moveables enemy22;
enemy22.sprite='M';
Moveables enemy23;
enemy23.sprite='M';
Moveables enemy24;
enemy24.sprite='M';
Moveables enemy25;
enemy25.sprite='M';
Moveables enemy26;
enemy26.sprite='M';
Moveables enemy27;
enemy27.sprite='M';
Moveables enemy28;
enemy28.sprite='M';
Moveables enemy29;
enemy29.sprite='M';
Moveables enemy30;
enemy30.sprite='M';

const char HEIGHT=22, WIDTH=79;
unsigned char maze[HEIGHT][WIDTH]={
//1234567890123456789012345678901234567890123456789012345678901234567890123456789                                              //
" ########################################################",
" # !   #          #      !!#   #!!      # !#        #@  #   GAME OF THRANS",
" #   # # #  !#### # ######### ######### #  #  ##### ### #",//
" # ### # #####    #                     #     # ! #     #      Controls:",
" #        #     # #  # !     #     ! #  # #   #   # #####",
" #######        #    #       #       #    #             #          W",
" #!#  ####   #### ####### ####### ####### #####  #### # #        A-S-D ",
" # ##          !#    #       #       #           #!!# # #",
" #         ######    # ! # ! # ! # ! #  ##  ######  #   #  Backspace - Menu",
" # ##     ##             #       #       #  # # #    #  #     ESC - Quit",
" #!#            ##### ####### #######    #  #           #",
" ###  #####.##           #       #       #  #! ###  #####",
" #  !  ###   ##########  # !   ! #  ###                 ######################",
" #  !  #   @   #  !   #             #!################### #                  #",//
" ####### ##### ###### ###############       #   !  #      #!   ###########  !#",//
" #       # ! #      #           #     ##### #  ### #   ## ### ##         #####",
" # ####### # ###### ###### #### # #####   #    #   #   #                  !  #",
" #         ###    #        #  # # #     # #### ### # # ##### ###         #####",
" # ######### # #    ########  ### #!# # #  ! #   # # #     #   ###########  !#",
" # #  ! ! #    ######         #   ### # ####### #### # ## ####   #       ### #",
" #    ###    #        #     #   #     #    ! #       #  # ! #         #      #",
" #############################################################################",
};
enemy1.x=36;//
enemy1.y=5;
enemy2.x=22;//
enemy2.y=5;
enemy3.x=38;//
enemy3.y=7;
enemy4.x=20;//
enemy4.y=7;
enemy5.x=28;//
enemy5.y=4;
enemy6.x=30;//
enemy6.y=7;
enemy7.x=30;//
enemy7.y=4;
enemy8.x=28;//
enemy8.y=7;
enemy9.x=29;//
enemy9.y=9;
enemy10.x=34;//
enemy10.y=11;
enemy11.x=24;//
enemy11.y=8;
enemy12.x=24;//
enemy12.y=11;
enemy13.x=38;//
enemy13.y=4;
enemy14.x=20;//
enemy14.y=4;
enemy15.x=34;//SSSSSSSSSSSSSSSSSSSS
enemy15.y=8;
enemy16.x=28;//
enemy16.y=12;
enemy17.x=30;//
enemy17.y=12;
enemy18.x=14;//
enemy18.y=4;
enemy19.x=6;//
enemy19.y=4;
enemy20.x=7;//
enemy20.y=8;
enemy21.x=8;//
enemy21.y=9;
enemy22.x=64;//AAAAAAAAAAAAAA
enemy22.y=17;
enemy23.x=65;
enemy23.y=15;
enemy24.x=66;
enemy24.y=16;
enemy25.x=67;
enemy25.y=17;
enemy26.x=68;
enemy26.y=16;
enemy27.x=69;
enemy27.y=15;
enemy28.x=70;
enemy28.y=17;
enemy29.x=71;
enemy29.y=16;
enemy30.x=72;
enemy30.y=16;// NOVICHKI TRAAT :)
enemy31.x=48;
enemy31.y=5;
enemy32.x=50;
enemy32.y=9;
enemy33.x=46;
enemy33.y=11;

srand(time (NULL));

while(on){
    if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menuaq mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);

        }
        cout<<"\n                  POINTS: "<<points<<"/38   MOVES: "<<moves;

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
    maze[enemy9.y][enemy9.x]=enemy9.sprite;
    maze[enemy10.y][enemy10.x]=enemy10.sprite;
    maze[enemy11.y][enemy11.x]=enemy11.sprite;
    maze[enemy12.y][enemy12.x]=enemy12.sprite;
    maze[enemy13.y][enemy13.x]=enemy13.sprite;
    maze[enemy14.y][enemy14.x]=enemy14.sprite;
    maze[enemy15.y][enemy15.x]=enemy15.sprite;
    maze[enemy16.y][enemy16.x]=enemy16.sprite;
    maze[enemy17.y][enemy17.x]=enemy17.sprite;
    maze[enemy18.y][enemy18.x]=enemy18.sprite;
    maze[enemy19.y][enemy19.x]=enemy19.sprite;
    maze[enemy20.y][enemy20.x]=enemy20.sprite;
    maze[enemy21.y][enemy21.x]=enemy21.sprite;
    maze[enemy22.y][enemy22.x]=enemy22.sprite;
    maze[enemy23.y][enemy23.x]=enemy23.sprite;
    maze[enemy24.y][enemy24.x]=enemy24.sprite;
    maze[enemy25.y][enemy25.x]=enemy25.sprite;
    maze[enemy26.y][enemy26.x]=enemy26.sprite;
    maze[enemy27.y][enemy27.x]=enemy27.sprite;
    maze[enemy28.y][enemy28.x]=enemy28.sprite;
    maze[enemy29.y][enemy29.x]=enemy29.sprite;
    maze[enemy30.y][enemy30.x]=enemy30.sprite;
    maze[enemy31.y][enemy31.x]=enemy31.sprite;
    maze[enemy32.y][enemy32.x]=enemy32.sprite;
    maze[enemy33.y][enemy33.x]=enemy33.sprite;

    for(int y=0; y<HEIGHT;++y){
        cout<<endl;
        for(int x=0;x<WIDTH;++x){
            if(maze[y][x]=='G'&& x>75){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[gpy][gpx];
            }
            else if(maze[y][x]=='!'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                cout<<'!';
            }
            else if(maze[y][x]=='E'&&x<60){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'E';
            }
            else if(maze[y][x]=='M'&&y>13){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'M';
            }
            else if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
                cout<<'#';
            }

            else if(maze[y][x]=='X'){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
              cout<<maze[ppy][ppx];
    }
    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
        cout<<maze[y][x];}
        }
    }
for(;;){

    randNum=rand()%randNumMax+1;
    if(maze[ppy][ppx]=='G'){
            ofstream file5;
  file5.open("r5.txt");
  file5.close();

if(points<19){
  cout<<"\n\n    Not enough points to complete the level... RESPAWNING...\n    ";
  Sleep(500);re();ppx=29, ppy=1;
}

else if(points>=19 && life!=1){

            PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
            cout<<"\n\n   You have completed the chapter! Press Backspace to return to MENU... \n";
}
else if(points>=19 && life==1){
          PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
          cout<<"\n\n    ";
        system("pause");


                    system("cls");
           cout<<"\n\n\n\n\n\n\n                            YOU HAVE COMPLETED THE \n\n";
                         cout<<"                        'FOREVER STANDING' ACHIEVEMENT !!!";
                     cout<<"\n\n               ================================================\n\n\n                            ";
  cout<<"Enter your name: ";
  string name;
  cin>>name;


                ofstream file;
  file.open("d.txt");

      file<<"                      4. Forever Standing --- Completed by "<<name;
  file.close();

                 cout<<"\n\n\n\n       You have completed the chapter! Press Backspace to return to Menu... \n";
    }
}

        else if(maze[ppy][ppx]=='E'){
            PlaySound(TEXT("Die.wav"),NULL,SND_ASYNC);

            cout<<"\n    You DIED! RESPAWNING.....\n \n    >> Backspace == MENU\n    >> ESC == QUIT\n\n    ";
            Sleep(500);system("pause");system("cls");ppx=29, ppy=1;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
            life--;
            PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);}
        else if (maze[ppy][ppx]=='M'){Beep(300,800);
             cout<<"\n      You DIED!  ";
            system("pause");
            system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
            life--;
            ppy=16, ppx=62;}

            movement=getch();
            switch (movement){
        case'w':
            if (maze[ppy-1][ppx]!='#' &&(maze[ppy-1][ppx]==' '||(maze[ppy-1][ppx]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppy--;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;
                    }
                    if (maze[ppy][ppx]=='@'){
                            cout<<"\n   TELEPORTING...";
                       Beep(300,800);system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
                       ppx=4, ppy=2;

                    }
                 }
            break;
             case'a':
            if (maze[ppy][ppx-1]!='#' &&(maze[ppy][ppx-1]==' '||(maze[ppy][ppx-1]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppx--;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;
                    }
                    if (maze[ppy][ppx]=='@'){
                            cout<<"\n   TELEPORTING...";
                       Beep(300,800);system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
                       ppx=4, ppy=2;

                    }
}
            break;
             case's':
            if (maze[ppy+1][ppx]!='#' &&(maze[ppy+1][ppx]==' '||(maze[ppy+1][ppx]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppy++;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;
                    }
                    if (maze[ppy][ppx]=='@'){
                            cout<<"\n   TELEPORTING...";
                       Beep(300,800);system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
                       ppx=4, ppy=2;

                    }
        if (maze[ppy][ppx]=='.'){
       cout<<"\n\n    You reached the labyrinth: GOOD LUCK!   >>>>   CHECKPOINT  <<<<  \n    ";
       re();
       }
                    }

            break;
             case'd':
            if (maze[ppy][ppx+1]!='#' &&(maze[ppy][ppx+1]==' '||(maze[ppy][ppx+1]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppx++;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,150);
                    points++;
                    }
                    if (maze[ppy][ppx]=='@'){
                       cout<<"\n   TELEPORTING...";
                       Beep(300,800);system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
                       ppx=4, ppy=2;

                    }
            }
            break;
default: randNum=0;break;
        }
         if(randNum==1&&maze[enemy1.y][enemy1.x-1]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.x--;
        }
        if(randNum==2&&maze[enemy1.y][enemy1.x+1]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.x++;
        }

        if(randNum==2&&maze[enemy2.y][enemy2.x-1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x--;
        }
        if(randNum==1&&maze[enemy2.y][enemy2.x+1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x++;
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
        }
        if(randNum==1&&maze[enemy5.y-1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y--;
        }
        if(randNum==2&&maze[enemy5.y+1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y++;
        }
        if(randNum==2&&maze[enemy6.y][enemy6.x-1]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.x--;
        }
        if(randNum==1&&maze[enemy6.y][enemy6.x+1]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.x++;
        }
        if(randNum==1&&maze[enemy7.y-1][enemy7.x]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.y--;
        }
        if(randNum==2&&maze[enemy7.y+1][enemy7.x]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.y++;
        }
        if(randNum==1&&maze[enemy8.y][enemy8.x-1]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.x--;
        }
        if(randNum==2&&maze[enemy8.y][enemy8.x+1]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.x++;
        }
         if(randNum==1&&maze[enemy9.y][enemy9.x-1]!='#'){
            maze[enemy9.y][enemy9.x]=' ';
            enemy9.x--;
        }
        if(randNum==2&&maze[enemy9.y][enemy9.x+1]!='#'){
            maze[enemy9.y][enemy9.x]=' ';
            enemy9.x++;
        }
        if(randNum==1&&maze[enemy10.y][enemy10.x-1]!='#'){
            maze[enemy10.y][enemy10.x]=' ';
            enemy10.x--;
        }
        if(randNum==2&&maze[enemy10.y][enemy10.x+1]!='#'){
            maze[enemy10.y][enemy10.x]=' ';
            enemy10.x++;
        }

        if(randNum==3&&maze[enemy11.y][enemy11.x-1]!='#'&&maze[enemy11.y][enemy11.x-1]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.x--;
        }
        if(randNum==4&&maze[enemy11.y][enemy11.x+1]!='#'&&maze[enemy11.y][enemy11.x+1]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.x++;
        }
        if(randNum==1&&maze[enemy11.y-1][enemy11.x]!='#'&&maze[enemy11.y-1][enemy11.x]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.y--;
        }
        if(randNum==2&&maze[enemy11.y+1][enemy11.x]!='#'&&maze[enemy11.y+1][enemy11.x]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.y++;
        }
        if(randNum==2&&maze[enemy12.y][enemy12.x-1]!='#'&&maze[enemy12.y][enemy12.x-1]!='R'){
            maze[enemy12.y][enemy12.x]=' ';
            enemy12.x--;
        }
        if(randNum==1&&maze[enemy12.y][enemy12.x+1]!='#'&&maze[enemy12.y][enemy12.x+1]!='R'){
            maze[enemy12.y][enemy12.x]=' ';
            enemy12.x++;
        }

        if(randNum==1&&maze[enemy13.y-1][enemy13.x]!='#'){
            maze[enemy13.y][enemy13.x]=' ';
            enemy13.y--;
        }
        if(randNum==2&&maze[enemy13.y+1][enemy13.x]!='#'){
            maze[enemy13.y][enemy13.x]=' ';
            enemy13.y++;
        }
        if(randNum==1&&maze[enemy14.y-1][enemy14.x]!='#'){
            maze[enemy14.y][enemy14.x]=' ';
            enemy14.y--;
        }
        if(randNum==2&&maze[enemy14.y+1][enemy14.x]!='#'){
            maze[enemy14.y][enemy14.x]=' ';
            enemy14.y++;
        }
        if(randNum==1&&maze[enemy15.y-1][enemy15.x]!='#'){
            maze[enemy15.y][enemy15.x]=' ';
            enemy15.y--;
        }
        if(randNum==2&&maze[enemy15.y+1][enemy15.x]!='#'){
            maze[enemy15.y][enemy15.x]=' ';
            enemy15.y++;
        }
        if(randNum==1&&maze[enemy16.y-1][enemy16.x]!='#'){
            maze[enemy16.y][enemy16.x]=' ';
            enemy16.y--;
        }
        if(randNum==2&&maze[enemy16.y+1][enemy16.x]!='#'){
            maze[enemy16.y][enemy16.x]=' ';
            enemy16.y++;
        }
        if(randNum==1&&maze[enemy17.y-1][enemy17.x]!='#'){
            maze[enemy17.y][enemy17.x]=' ';
            enemy17.y--;
}
        if(randNum==2&&maze[enemy17.y+1][enemy17.x]!='#'){
            maze[enemy17.y][enemy17.x]=' ';
            enemy17.y++;                     //SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
            }
        if(randNum==1&&maze[enemy18.y-1][enemy18.x]!='#'){
            maze[enemy18.y][enemy18.x]=' ';
            enemy18.y--;
}

            if(randNum==2&&maze[enemy18.y+1][enemy18.x]!='#'){
            maze[enemy18.y][enemy18.x]=' ';
            enemy18.y++;
}

        if(randNum==1&&maze[enemy19.y][enemy19.x+1]!='#'){
            maze[enemy19.y][enemy19.x]=' ';
            enemy19.x++;
}
        if(randNum==2&&maze[enemy19.y][enemy19.x-1]!='#'){
            maze[enemy19.y][enemy19.x]=' ';
            enemy19.x--;
}

        if(randNum==1&&maze[enemy20.y-1][enemy20.x]!='#'){
            maze[enemy20.y][enemy20.x]=' ';
            enemy20.y--;
}
        if(randNum==2&&maze[enemy20.y+1][enemy20.x]!='#'){
            maze[enemy20.y][enemy20.x]=' ';
            enemy20.y++;
}

        if(randNum==2&&maze[enemy21.y-1][enemy21.x]!='#'){
            maze[enemy21.y][enemy21.x]=' ';
            enemy21.y--;
}
        if(randNum==1&&maze[enemy21.y+1][enemy21.x]!='#'){
            maze[enemy21.y][enemy21.x]=' ';
            enemy21.y++;
}
        if(randNum==1&&maze[enemy33.y-1][enemy33.x]!='#'){
            maze[enemy33.y][enemy33.x]=' ';
            enemy33.y--;
}
        if(randNum==2&&maze[enemy33.y+1][enemy33.x]!='#'){
            maze[enemy33.y][enemy33.x]=' ';
            enemy33.y++;
}
        if(randNum==1&&maze[enemy31.y][enemy31.x+1]!='#'){
            maze[enemy31.y][enemy31.x]=' ';
            enemy31.x++;
}
        if(randNum==2&&maze[enemy31.y][enemy31.x-1]!='#'){
            maze[enemy31.y][enemy31.x]=' ';
            enemy31.x--;
}
        if(randNum==1&&maze[enemy32.y][enemy32.x+1]!='#'){
            maze[enemy32.y][enemy32.x]=' ';
            enemy32.x++;
}
        if(randNum==2&&maze[enemy32.y][enemy32.x-1]!='#'){
            maze[enemy32.y][enemy32.x]=' ';
            enemy32.x--;
}
        if((randNum==1 || randNum==2) && maze[enemy22.y+1][enemy22.x]!='#'){//AAAAAAAAAAAAAAAAAAAAAA
            maze[enemy22.y][enemy22.x]=' ';
            enemy22.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy22.y+1][enemy22.x]=='#'){
                maze[enemy22.y][enemy22.x]=' ';
               enemy22.x=64;
               enemy22.y=15;
            }
        if((randNum==1 || randNum==2) && maze[enemy23.y+1][enemy23.x]!='#'){
            maze[enemy23.y][enemy23.x]=' ';
            enemy23.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy23.y+1][enemy23.x]=='#'){
                maze[enemy23.y][enemy23.x]=' ';
               enemy23.x=65;
               enemy23.y=15;
            }
             if((randNum==1 || randNum==2) && maze[enemy24.y+1][enemy24.x]!='#'){
            maze[enemy24.y][enemy24.x]=' ';
            enemy24.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy24.y+1][enemy24.x]=='#'){
                maze[enemy24.y][enemy24.x]=' ';
               enemy24.x=66;
               enemy24.y=15;
            }
             if((randNum==1 || randNum==2) && maze[enemy25.y+1][enemy25.x]!='#'){
            maze[enemy25.y][enemy25.x]=' ';
            enemy25.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy25.y+1][enemy25.x]=='#'){
                maze[enemy25.y][enemy25.x]=' ';
               enemy25.x=67;
               enemy25.y=15;
            }
             if((randNum==1 || randNum==2) && maze[enemy26.y-1][enemy26.x]!='#'){
            maze[enemy26.y][enemy26.x]=' ';
            enemy26.y--;
}
           else if((randNum==1 || randNum==2) && maze[enemy26.y-1][enemy26.x]=='#'){
                maze[enemy26.y][enemy26.x]=' ';
               enemy26.x=68;
               enemy26.y=17;
            }
             if((randNum==1 || randNum==2) && maze[enemy27.y-1][enemy27.x]!='#'){
            maze[enemy27.y][enemy27.x]=' ';
            enemy27.y--;
}
           else if((randNum==1 || randNum==2) && maze[enemy27.y-1][enemy27.x]=='#'){
                maze[enemy27.y][enemy27.x]=' ';
               enemy27.x=69;
               enemy27.y=17;
            }
             if((randNum==1 || randNum==2) && maze[enemy28.y-1][enemy28.x]!='#'){
            maze[enemy28.y][enemy28.x]=' ';
            enemy28.y--;
}
           else if((randNum==1 || randNum==2) && maze[enemy28.y-1][enemy28.x]=='#'){
                maze[enemy28.y][enemy28.x]=' ';
               enemy28.x=70;
               enemy28.y=17;
            }
             if((randNum==1 || randNum==2) && maze[enemy29.y-1][enemy29.x]!='#'){
            maze[enemy29.y][enemy29.x]=' ';
            enemy29.y--;
}
           else if((randNum==1 || randNum==2) && maze[enemy29.y-1][enemy29.x]=='#'){
                maze[enemy29.y][enemy29.x]=' ';
               enemy29.x=71;
               enemy29.y=17;
            }
             if((randNum==1 || randNum==2) && maze[enemy30.y-1][enemy30.x]!='#'){
            maze[enemy30.y][enemy30.x]=' ';
            enemy30.y--;
}
           else if((randNum==1 || randNum==2) && maze[enemy30.y-1][enemy30.x]=='#'){
                maze[enemy30.y][enemy30.x]=' ';
               enemy30.x=72;
               enemy30.y=17;
            }




break;
    }
    sleep1(frameRate);
    clear_screen();
}
}






void map7::mape()
{system("color 3f");
    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);

    cout<<"\n                             ======= LEGEND =======\n\n";                      //
      cout<<" Tears appeared on X-eramir's eyes. Tears, caused by the pain of his wounds,\n";
      cout<<" but also the pain in his heart. He finally entered the castle, his hands and\n";
      cout<<" legs shaking, his sword covered in blood, his pride and anger not allowing him\n";
      cout<<" to turn back. The sound of heavy footsteps echoed through the corridors - the\n";
      cout<<" kingdom's most elite soldiers were coming for him. X-eramir didn't want to\n";
      cout<<" spill any more blood, but he knew he had to finish what he had already\n";
      cout<<" started...\n\n\n ";
system("pause");
PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
cout<<"\n\n\n\n\n\n\n\n\n\n LOADING . . .";Sleep(3500);system("cls");

system("color f3");
     PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
      int ppy=8, ppx=2, ggy=9, ggx=61;
char movement, buttons, playerSprite='X', goal2='F';

Moveables enemy1;
enemy1.sprite='E';
Moveables enemy2;
enemy2.sprite='E';
Moveables enemy3;
enemy3.sprite='E';
Moveables enemy4;
enemy4.sprite='E';
Moveables enemy5;
enemy5.sprite='E';
Moveables enemy6;
enemy6.sprite='E';
Moveables enemy7;
enemy7.sprite='E';
Moveables enemy8;
enemy8.sprite='E';
Moveables enemy9;
enemy9.sprite='E';
Moveables enemy10;
enemy10.sprite='E';
Moveables enemy11;
enemy11.sprite='E';
Moveables enemy12;
enemy12.sprite='E';
Moveables enemy13;
enemy13.sprite='E';
Moveables enemy14;
enemy14.sprite='E';
Moveables enemy15;
enemy15.sprite='E';
Moveables enemy16;
enemy16.sprite='E';
Moveables enemy17;
enemy17.sprite='E';
Moveables enemy18;
enemy18.sprite='E';
Moveables enemy19;
enemy19.sprite='E';
Moveables enemy20;
enemy20.sprite='E';
Moveables enemy21;
enemy21.sprite='E';
Moveables enemy31;
enemy31.sprite='E';
Moveables enemy32;
enemy32.sprite='E';
Moveables enemy33;
enemy33.sprite='E';
Moveables enemy22;
enemy22.sprite='E';
Moveables enemy23;
enemy23.sprite='E';
Moveables enemy24;
enemy24.sprite='E';
Moveables enemy25;
enemy25.sprite='M';
Moveables enemy26;
enemy26.sprite='M';
Moveables enemy27;
enemy27.sprite='M';
Moveables enemy28;
enemy28.sprite='M';
Moveables enemy29;
enemy29.sprite='M';
Moveables enemy30;
enemy30.sprite='M';

const char HEIGHT=21, WIDTH=79;
unsigned char maze[HEIGHT][WIDTH]={                                             //
" ################################################################",
" #                                     #                 #@ #   #",
" #  !! ######  ###################   #### # !# #####     ## #   #    box full",//
" #     #              ! #       #    #    ####     ##### #  #   #   of secrets",
" # ### #!#     #      ! #  ####      ####   !#  #### #     #### #           | ",
" #     #  #    #        #  #  #      #       #! #    #####      ########    |",
" #####!# ############ #!#  # #### #### ##### ######      #### #        # ###| ",
" #   ### #   ! ! ! !   ##  #   ## ##   #          #  #   #    ######## # #*###",
" #         # # # # # #     # # ! G ! # #    ### # #  #   #  ###      # # #!!!#",
" #   ### #   ! ! ! !   ##  #   ## ##   #  # #!    #  #   #  #        | # #!!!#",
" #####!# ############ # #  # #### #### #    ### # # ####    ###      #!# #!! #",
" #     #  #         # # #  #         #    #       #      #    ######## # #####",//
" # ### #!# #   #### #   #  # ###########  # ###      ! ! # ####    !   #",//
" #  #      #   ####     #  #      #       #  !#  #   ! ! #       # # # #",
" #  ###### # #       !  #  ######   #### ###   # #   ! ! #   #     ! # #",
" #  #  #     #    #  !  #      #     #!   #  ### ##      #   #    #### #",
" #     # ## ##### ##    #  #         #### #  #    #   #  ## ############",
" #        #        ###  #  #########      # !#    ####   !# #",
" #  ####  ###   !!   #  #  #!      # #### #######      #### #  GAME OF THRANS",
" #   #!   ! #        #     #@          !#!                  #",
" ############################################################",

};
enemy1.x=9;//
enemy1.y=5;
enemy2.x=9;//
enemy2.y=11;
enemy3.x=18;//
enemy3.y=4;
enemy4.x=33;//
enemy4.y=5;
enemy5.x=66;//
enemy5.y=13;
enemy6.x=19;//
enemy6.y=4;
enemy7.x=20;//aaaaa
enemy7.y=8;
enemy8.x=32;//
enemy8.y=16;
enemy9.x=14;//
enemy9.y=17;
enemy10.x=54;//
enemy10.y=13;
enemy11.x=36;//
enemy11.y=8;
enemy12.x=39;//
enemy12.y=5;
enemy13.x=14;//
enemy13.y=1;
enemy14.x=30;//
enemy14.y=8;
enemy15.x=41;//
enemy15.y=18;
enemy16.x=68;//
enemy16.y=13;
enemy17.x=18;//aaaa
enemy17.y=8;
enemy18.x=16;//aaaa
enemy18.y=8;
enemy19.x=33;//
enemy19.y=11;
enemy20.x=14;//aaaaaa
enemy20.y=8;
enemy21.x=12;//aaaaaaaaaa
enemy21.y=8;
enemy22.x=47;//
enemy22.y=9;
enemy23.x=61;//
enemy23.y=5;
enemy24.x=46;//
enemy24.y=11;
enemy25.x=63;//AAAAAA
enemy25.y=9;
enemy26.x=64;
enemy26.y=8;
enemy27.x=65;
enemy27.y=8;
enemy28.x=66;
enemy28.y=9;
enemy29.x=67;
enemy29.y=10;
enemy30.x=68;
enemy30.y=8;

srand(time (NULL));

while(on){
    if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menuaq mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
        system("cls");
            exit(EXIT_PROCESS_DEBUG_EVENT);

        }
        cout<<"\n          POINTS: "<<points<<"/53   MOVES: "<<moves;

    maze[ppy][ppx]=playerSprite;

    maze[ggy][ggx]=goal2;
    maze[enemy1.y][enemy1.x]=enemy1.sprite;
    maze[enemy2.y][enemy2.x]=enemy2.sprite;
    maze[enemy3.y][enemy3.x]=enemy3.sprite;
    maze[enemy4.y][enemy4.x]=enemy4.sprite;
    maze[enemy5.y][enemy5.x]=enemy5.sprite;
    maze[enemy6.y][enemy6.x]=enemy6.sprite;
    maze[enemy7.y][enemy7.x]=enemy7.sprite;
    maze[enemy8.y][enemy8.x]=enemy8.sprite;
    maze[enemy9.y][enemy9.x]=enemy9.sprite;
    maze[enemy10.y][enemy10.x]=enemy10.sprite;
    maze[enemy11.y][enemy11.x]=enemy11.sprite;
    maze[enemy12.y][enemy12.x]=enemy12.sprite;
    maze[enemy13.y][enemy13.x]=enemy13.sprite;
    maze[enemy14.y][enemy14.x]=enemy14.sprite;
    maze[enemy15.y][enemy15.x]=enemy15.sprite;
    maze[enemy16.y][enemy16.x]=enemy16.sprite;
    maze[enemy17.y][enemy17.x]=enemy17.sprite;
    maze[enemy18.y][enemy18.x]=enemy18.sprite;
    maze[enemy19.y][enemy19.x]=enemy19.sprite;
    maze[enemy20.y][enemy20.x]=enemy20.sprite;
    maze[enemy21.y][enemy21.x]=enemy21.sprite;
    maze[enemy22.y][enemy22.x]=enemy22.sprite;
    maze[enemy23.y][enemy23.x]=enemy23.sprite;
    maze[enemy24.y][enemy24.x]=enemy24.sprite;
    maze[enemy25.y][enemy25.x]=enemy25.sprite;
    maze[enemy26.y][enemy26.x]=enemy26.sprite;
    maze[enemy27.y][enemy27.x]=enemy27.sprite;
    maze[enemy28.y][enemy28.x]=enemy28.sprite;
    maze[enemy29.y][enemy29.x]=enemy29.sprite;
    maze[enemy30.y][enemy30.x]=enemy30.sprite;

    for(int y=0; y<HEIGHT;++y){
        cout<<endl;
        for(int x=0;x<WIDTH;++x){
            if(maze[y][x]=='G'&& x<40){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<'G';
            }
            else if(maze[y][x]=='F'&&y<10){
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
                cout<<maze[ggy][ggx];
            }

            else if(maze[y][x]=='!'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                cout<<'!';
            }
            else if(maze[y][x]=='E'&&x<70&&y<18){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'E';
            }
            else if(maze[y][x]=='M'&&y<16){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'M';
            }
            else if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
                cout<<'#';
            }

            else if(maze[y][x]=='X'){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
              cout<<maze[ppy][ppx];
    }
    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
        cout<<maze[y][x];}
        }
    }
for(;;){

    randNum=rand()%randNumMax+1;
    cout<<endl;
    if(maze[ppy][ppx]=='F'){
            ofstream file6;
  file6.open("r6.txt");
  file6.close();
            if(points<26){
   cout<<"\n\n    Not enough points to complete the level... RESPAWNING...\n    ";Sleep(500);re(); ppy=9, ppx=70;
}
else if(points>=26 && moves>=185){

            PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
          cout<<"\n    BOSS F-aramir has been defeated !!!  Well done...\n";
            cout<<"    You have completed the level: WOOOOW! \n\n";
            cout<<"    ";
            system("pause");

            system("CLS");
             map7 ma;
             ma.mapf();

             }                    //ACHIEVEMENT AAAAAAAAAAAAAAAAAA
else if(points>=26 && moves<185){
    PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
        cout<<"\n    BOSS F-aramir has been defeated !!!  Well done...\n";
            cout<<"    You have completed the level: WOOOOW! \n\n";
            cout<<"    ";
            system("pause");

            system("CLS");
               cout<<"\n\n\n\n\n\n\n                            YOU HAVE COMPLETED THE \n\n";
                             cout<<"                           'BEST STEP' ACHIEVEMENT !!!";
               cout<<"\n\n               ================================================\n\n\n                            ";
  cout<<"Enter your name: ";
  string name;
  cin>>name;
  cout<<"\n\n                          ";

                ofstream file;
  file.open("e.txt");
      file<<"                      5. Best Step --- Completed by "<<name;
  file.close();

  system("pause");
  system("CLS");
  map7 mo;
  mo.mapf();
}
    }

        else if(maze[ppy][ppx]=='E'){
            PlaySound(TEXT("Die.wav"),NULL,SND_ASYNC);

            cout<<"\n    You DIED! RESPAWNING.....\n \n    >> Backspace == MENU\n    >> ESC == QUIT\n\n    ";
            Sleep(500);re();ppy=8, ppx=2;PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);}
        else if (maze[ppy][ppx]=='M'){Beep(300,800);
            cout<<"\n      You DIED!  ";
            re();
            ppy=9, ppx=70;}

            movement=getch();
            switch (movement){
        case'w':
            if (maze[ppy-1][ppx]!='#' &&(maze[ppy-1][ppx]==' '||(maze[ppy-1][ppx]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppy--;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,250);
                    points++;

                 }
                 if(maze[ppy][ppx]=='*'){Beep(300,800);
                        cout<<"\n   TELEPORTING...";
                        cout<<"\n   You have reached a Checkpoint...  ";
                        re();
                        ppx=70, ppy=9;

                 }if (maze[ppy][ppx]=='G'){
        PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
      cout<<"\n   BOSS G-erath has been defeated !!!  Well done...\n\n   ";
        system("pause"); system("cls");ppy=8, ppx=33;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
        PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
    }
            }
            break;
             case'a':
            if (maze[ppy][ppx-1]!='#'&& maze[ppy][ppx-1]!='|' &&(maze[ppy][ppx-1]==' '||(maze[ppy][ppx-1]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppx--;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,250);
                    points++;
                 }
                 if (maze[ppy][ppx]=='@'){
                            cout<<"\n   TELEPORTING...";
                       Beep(300,800);system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
                       ppx=76, ppy=10;

                    }
              if (maze[ppy][ppx]=='G'){
        PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
      cout<<"\n   BOSS G-erath has been defeated !!!  Well done...\n\n   ";
        system("pause"); system("cls");ppy=8, ppx=33;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
        PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
    }
            }
            break;
             case's':
            if (maze[ppy+1][ppx]!='#' &&(maze[ppy+1][ppx]==' '||(maze[ppy+1][ppx]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppy++;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,250);
                    points++;

                 }if (maze[ppy][ppx]=='G'){
        PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
      cout<<"\n   BOSS G-erath has been defeated !!!  Well done...\n\n   ";
        system("pause"); system("cls");ppy=8, ppx=33;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
        PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
    }
            }
            break;
             case'd':
            if (maze[ppy][ppx+1]!='#' &&(maze[ppy][ppx+1]==' '||(maze[ppy][ppx+1]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppx++;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,250);
                    points++;

                 }if (maze[ppy][ppx]=='G'){
        PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
      cout<<"\n   BOSS G-erath has been defeated !!!  Well done...\n\n   ";
        system("pause"); system("cls");ppy=8, ppx=33;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
        PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
    }
            }
            break;
             case 'e':{
            if(maze[8][33]==' '){
            if(maze[ppy][ppx-1]=='|'){
                maze[9][69]=' ';
                maze[8][70]='_';
            }
            }
    }break;
default: randNum=0;break;
        }

          if(randNum==1&&maze[enemy1.y][enemy1.x-1]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.x--;
        }
        if(randNum==2&&maze[enemy1.y][enemy1.x+1]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.x++;
        }

        if(randNum==2&&maze[enemy2.y][enemy2.x-1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x--;
        }
        if(randNum==1&&maze[enemy2.y][enemy2.x+1]!='#'){
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

        if(randNum==1&&maze[enemy4.y][enemy4.x-1]!='#'){
            maze[enemy4.y][enemy4.x]=' ';
            enemy4.x--;
        }
        if(randNum==2&&maze[enemy4.y][enemy4.x+1]!='#'){
            maze[enemy4.y][enemy4.x]=' ';
            enemy4.x++;
        }
        if(randNum==1&&maze[enemy5.y-1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y--;
        }
        if(randNum==2&&maze[enemy5.y+1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y++;
        }
        if(randNum==2&&maze[enemy6.y-1][enemy6.x]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.y--;
        }
        if(randNum==1&&maze[enemy6.y+1][enemy6.x]!='#'){
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
        if(randNum==1&&maze[enemy8.y][enemy8.x-1]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.x--;
        }
        if(randNum==2&&maze[enemy8.y][enemy8.x+1]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.x++;
        }
         if(randNum==1&&maze[enemy9.y][enemy9.x-1]!='#'){
            maze[enemy9.y][enemy9.x]=' ';
            enemy9.x--;
        }
        if(randNum==2&&maze[enemy9.y][enemy9.x+1]!='#'){
            maze[enemy9.y][enemy9.x]=' ';
            enemy9.x++;
        }
        if(randNum==1&&maze[enemy10.y-1][enemy10.x]!='#'){
            maze[enemy10.y][enemy10.x]=' ';
            enemy10.y--;
        }
        if(randNum==2&&maze[enemy10.y+1][enemy10.x]!='#'){
            maze[enemy10.y][enemy10.x]=' ';
            enemy10.y++;
        }

        if(randNum==3&&maze[enemy11.y][enemy11.x-1]!='#'&&maze[enemy11.y][enemy11.x-1]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.x--;
        }
        if(randNum==4&&maze[enemy11.y][enemy11.x+1]!='#'&&maze[enemy11.y][enemy11.x+1]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.x++;
        }
        if(randNum==1&&maze[enemy11.y-1][enemy11.x]!='#'&&maze[enemy11.y-1][enemy11.x]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.y--;
        }
        if(randNum==2&&maze[enemy11.y+1][enemy11.x]!='#'&&maze[enemy11.y+1][enemy11.x]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.y++;
        }
        if(randNum==2&&maze[enemy12.y][enemy12.x-1]!='#'&&maze[enemy12.y][enemy12.x-1]!='R'){
            maze[enemy12.y][enemy12.x]=' ';
            enemy12.x--;
        }
        if(randNum==1&&maze[enemy12.y][enemy12.x+1]!='#'&&maze[enemy12.y][enemy12.x+1]!='R'){
            maze[enemy12.y][enemy12.x]=' ';
            enemy12.x++;
        }

        if(randNum==1&&maze[enemy13.y][enemy13.x-1]!='#'){
            maze[enemy13.y][enemy13.x]=' ';
            enemy13.x--;
        }
        if(randNum==2&&maze[enemy13.y][enemy13.x+1]!='#'){
            maze[enemy13.y][enemy13.x]=' ';
            enemy13.x++;
        }
        if(randNum==1&&maze[enemy14.y-1][enemy14.x]!='#'){
            maze[enemy14.y][enemy14.x]=' ';
            enemy14.y--;
        }
        if(randNum==2&&maze[enemy14.y+1][enemy14.x]!='#'){
            maze[enemy14.y][enemy14.x]=' ';
            enemy14.y++;
        }
        if(randNum==1&&maze[enemy15.y-1][enemy15.x]!='#'){
            maze[enemy15.y][enemy15.x]=' ';
            enemy15.y--;
        }
        if(randNum==2&&maze[enemy15.y+1][enemy15.x]!='#'){
            maze[enemy15.y][enemy15.x]=' ';
            enemy15.y++;
        }
        if(randNum==2&&maze[enemy16.y-1][enemy16.x]!='#'){
            maze[enemy16.y][enemy16.x]=' ';
            enemy16.y--;
        }
        if(randNum==1&&maze[enemy16.y+1][enemy16.x]!='#'){
            maze[enemy16.y][enemy16.x]=' ';
            enemy16.y++;
        }
        if(randNum==2&&maze[enemy17.y-1][enemy17.x]!='#'){
            maze[enemy17.y][enemy17.x]=' ';
            enemy17.y--;
}
        if(randNum==1&&maze[enemy17.y+1][enemy17.x]!='#'){
            maze[enemy17.y][enemy17.x]=' ';
            enemy17.y++;                     //SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
            }
        if(randNum==2&&maze[enemy18.y-1][enemy18.x]!='#'){
            maze[enemy18.y][enemy18.x]=' ';
            enemy18.y--;
}

            if(randNum==1&&maze[enemy18.y+1][enemy18.x]!='#'){
            maze[enemy18.y][enemy18.x]=' ';
            enemy18.y++;
}

        if(randNum==1&&maze[enemy19.y][enemy19.x+1]!='#'){
            maze[enemy19.y][enemy19.x]=' ';
            enemy19.x++;
}
        if(randNum==2&&maze[enemy19.y][enemy19.x-1]!='#'){
            maze[enemy19.y][enemy19.x]=' ';
            enemy19.x--;
}

        if(randNum==1&&maze[enemy20.y-1][enemy20.x]!='#'){
            maze[enemy20.y][enemy20.x]=' ';
            enemy20.y--;
}
        if(randNum==2&&maze[enemy20.y+1][enemy20.x]!='#'){
            maze[enemy20.y][enemy20.x]=' ';
            enemy20.y++;
}

        if(randNum==2&&maze[enemy21.y-1][enemy21.x]!='#'){
            maze[enemy21.y][enemy21.x]=' ';
            enemy21.y--;
}
        if(randNum==1&&maze[enemy21.y+1][enemy21.x]!='#'){
            maze[enemy21.y][enemy21.x]=' ';
            enemy21.y++;
}
        if(randNum==1&&maze[enemy22.y-1][enemy22.x]!='#'){
            maze[enemy22.y][enemy22.x]=' ';
            enemy22.y--;
}
         if(randNum==2&&maze[enemy22.y+1][enemy22.x]!='#'){
            maze[enemy22.y][enemy22.x]=' ';
            enemy22.y++;

            }

        if(randNum==1&&maze[enemy23.y][enemy23.x+1]!='#'){
            maze[enemy23.y][enemy23.x]=' ';
            enemy23.x++;
}
        if(randNum==2&&maze[enemy23.y][enemy23.x-1]!='#'){
                maze[enemy23.y][enemy23.x]=' ';
               enemy23.x--;

            }
             if(randNum==2&&maze[enemy24.y][enemy24.x-1]!='#'){
            maze[enemy24.y][enemy24.x]=' ';
            enemy24.x--;
}
            if(randNum==1&&maze[enemy24.y][enemy24.x+1]!='#'){
                maze[enemy24.y][enemy24.x]=' ';
               enemy24.x++;

            }
                 if((randNum==1 || randNum==2) && maze[enemy25.y+1][enemy25.x]!='#'){
            maze[enemy25.y][enemy25.x]=' ';
            enemy25.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy25.y+1][enemy25.x]=='#'){
                maze[enemy25.y][enemy25.x]=' ';
               enemy25.x=63;
               enemy25.y=8;
            }
             if((randNum==1 || randNum==2) && maze[enemy26.y+1][enemy26.x]!='#'){
            maze[enemy26.y][enemy26.x]=' ';
            enemy26.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy26.y+1][enemy26.x]=='#'){
                maze[enemy26.y][enemy26.x]=' ';
               enemy26.x=64;
               enemy26.y=8;
            }
             if((randNum==1 || randNum==2) && maze[enemy27.y+1][enemy27.x]!='#'){
            maze[enemy27.y][enemy27.x]=' ';
            enemy27.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy27.y+1][enemy27.x]=='#'){
                maze[enemy27.y][enemy27.x]=' ';
               enemy27.x=65;
               enemy27.y=8;
            }
             if((randNum==1 || randNum==2) && maze[enemy28.y+1][enemy28.x]!='#'){
            maze[enemy28.y][enemy28.x]=' ';
            enemy28.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy28.y+1][enemy28.x]=='#'){
                maze[enemy28.y][enemy28.x]=' ';
               enemy28.x=66;
               enemy28.y=8;
            }
             if((randNum==1 || randNum==2) && maze[enemy29.y+1][enemy29.x]!='#'){
            maze[enemy29.y][enemy29.x]=' ';
            enemy29.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy29.y+1][enemy29.x]=='#'){
                maze[enemy29.y][enemy29.x]=' ';
               enemy29.x=67;
               enemy29.y=8;
            }
             if((randNum==1 || randNum==2) && maze[enemy30.y+1][enemy30.x]!='#'){
            maze[enemy30.y][enemy30.x]=' ';
            enemy30.y++;
}
           else if((randNum==1 || randNum==2) && maze[enemy30.y+1][enemy30.x]=='#'){
                maze[enemy30.y][enemy30.x]=' ';
               enemy30.x=68;
               enemy30.y=8;
            }




break;
    }
    sleep1(frameRate);
    clear_screen();
}

}


void map7::mapf()
{system("color 3f");
    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);

    cout<<"\n                             ======= LEGEND =======\n\n";                      //
      cout<<" The end was nigh. X-eramir wandered through the castle corridors, leaving\n";
      cout<<" numerous bodies behind him. His clothes where torn and turned into bandages to\n";
      cout<<" cover his wounds. As he walked into the great hall, he was greeted by a\n";
      cout<<" familiar laugh. It was the laugh of A-dorath, the one who had orchestrated all\n";
      cout<<" of this, and the only one whose skill with the blade is on par with X-eramir's\n";
      cout<<" He stood in the middle of the massive hall, with his sword pulled out and a\n";
      cout<<" sinister smile on his face. The two glared at each other silently, nobody\n";
      cout<<" making the first move. This was the decisive battle - the battle that was\n";
      cout<<" going to determine who is truly destined to rule the kingdom...\n\n\n ";
system("pause");
PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
cout<<"\n\n\n\n\n\n\n\n LOADING . . .";Sleep(3500);system("cls");

system("color f3");
     PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);
      int ppy=9, ppx=34, gpy=3, gpx=22, gby=8,gbx=57, gcy=17,gcx=53, gdy=13,gdx=3;
char movement, playerSprite='X', goal='A', goal2='B', goal3='C', goal4='D';

Moveables enemy1;
enemy1.sprite='M';
Moveables enemy2;
enemy2.sprite='M';
Moveables enemy3;
enemy3.sprite='M';
Moveables enemy4;
enemy4.sprite='M';
Moveables enemy5;
enemy5.sprite='H';
Moveables enemy6;
enemy6.sprite='M';
Moveables enemy7;
enemy7.sprite='F';
Moveables enemy8;
enemy8.sprite='H';
Moveables enemy9;
enemy9.sprite='H';
Moveables enemy10;
enemy10.sprite='H';
Moveables enemy11;
enemy11.sprite='H';
Moveables enemy12;
enemy12.sprite='F';
Moveables enemy13;
enemy13.sprite='F';
Moveables enemy14;
enemy14.sprite='F';
Moveables enemy15;
enemy15.sprite='H';
Moveables enemy16;
enemy16.sprite='H';
Moveables enemy17;
enemy17.sprite='H';
Moveables enemy18;
enemy18.sprite='H';
Moveables enemy19;//26
enemy19.sprite='E';
Moveables enemy20;
enemy20.sprite='E';
Moveables enemy21;
enemy21.sprite='E';
Moveables enemy22;
enemy22.sprite='E';
Moveables enemy23;
enemy23.sprite='E';
Moveables enemy24;
enemy24.sprite='E';
Moveables enemy25;
enemy25.sprite='E';
Moveables enemy26;
enemy26.sprite='E';
Moveables enemy27;
enemy27.sprite='E';
Moveables enemy28;
enemy28.sprite='E';
Moveables enemy29;
enemy29.sprite='E';
Moveables enemy30;
enemy30.sprite='E';
Moveables enemy31;
enemy31.sprite='E';

Moveables enemy33;
enemy33.sprite='Z';
Moveables enemy34;
enemy34.sprite='Z';

Moveables enemy36;
enemy36.sprite='Z';

Moveables enemy38;
enemy38.sprite='Z';

Moveables enemy40;
enemy40.sprite='Z';

Moveables enemy42;
enemy42.sprite='Z';

Moveables enemy44;
enemy44.sprite='Z';
Moveables enemy45;
enemy45.sprite='F';
Moveables enemy46;
enemy46.sprite='F';

const char HEIGHT=22, WIDTH=79;
unsigned char maze[HEIGHT][WIDTH]={                                             //
"                       #############################",
"   GAME OF THRANS      ##         ### ####         ###########",
"                    ####          # # # ##             <---  #",
"  Backspace - Menu  #                        #    ########## #",
"     ESC - Quit     #### # # # #           ##### ##!#      # #",
"                       ##########         ###    !  #      # #",
" ########################################################### ##############",
" #                 #     #                     #   #         ##     #     #",
" # #                 # ! #      ! ! !   BOSS   # ! # #### ##### ##     ## #",
" # ###################     <---     !  BATTLE  #     ##     ### ########  #",
" #    !  !  !  !     #   #      ! ! !          #   ###       ## #    #    #",
" #   ##############  # ! ####################### ! ##         # # !#      #",
" #####    #     #    #   # !!! #   #*#   # !!! #   #####  ##### # ! #     #",
" #      #    #       #   #                     #   # !      !   #   #     #",
" ## #################################################################### ##",
"  # #           #!   #  #             #           ### @ #              # #",
"  # ###############     #   ####     ##     ###     ### ################ #",
"  #     --->      #  #  #      ##     ###     #       #  |  --->         #",
"  ############### #  ## ####   #     ##     ###     ### ##################",
"                # #  #  #      #      #  #### #   ###   #",
"                #    #       # ####         ! #         #",
"                #########################################",


};
enemy1.x=10;
enemy1.y=7;
enemy2.x=11;
enemy2.y=8;
enemy3.x=13;
enemy3.y=12;
enemy4.x=11;
enemy4.y=13;//AAAAAA
enemy5.x=51;//
enemy5.y=17;
enemy6.x=7;//
enemy6.y=12;
enemy7.x=68;//
enemy7.y=8;
enemy8.x=19;//
enemy8.y=20;
enemy9.x=25;//
enemy9.y=20;
enemy10.x=20;//
enemy10.y=17;
enemy11.x=26;//
enemy11.y=17;
enemy12.x=57;//
enemy12.y=9;
enemy13.x=58;//
enemy13.y=10;
enemy14.x=57;//
enemy14.y=11;
enemy15.x=34;//
enemy15.y=16;
enemy16.x=35;//
enemy16.y=17;
enemy17.x=41;//
enemy17.y=18;
enemy18.x=41;//
enemy18.y=16;
enemy19.x=24;
enemy19.y=3;
enemy20.x=25;
enemy20.y=2;
enemy21.x=26;
enemy21.y=1;
enemy22.x=27;
enemy22.y=2;
enemy23.x=28;
enemy23.y=1;
enemy24.x=29;
enemy24.y=2;
enemy25.x=30;
enemy25.y=1;
enemy26.x=31;
enemy26.y=1;
enemy27.x=32;
enemy27.y=2;
enemy28.x=33;
enemy28.y=1;
enemy29.x=34;
enemy29.y=3;
enemy30.x=35;
enemy30.y=4;
enemy31.x=36;
enemy31.y=3;

enemy33.x=38;
enemy33.y=4;
enemy34.x=39;
enemy34.y=5;//AAAAAA

enemy36.x=41;//
enemy36.y=5;

enemy38.x=43;//
enemy38.y=2;

enemy40.x=45;//
enemy40.y=2;

enemy42.x=47;//
enemy42.y=2;

enemy44.x=49;//
enemy44.y=1;
enemy45.x=73;//
enemy45.y=11;
enemy46.x=71;//
enemy46.y=10;

srand(time (NULL));

while(on){
    if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menuaq mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
           system("cls"); exit(EXIT_PROCESS_DEBUG_EVENT);

        }
        cout<<"\n                         POINTS: "<<points<<"/29   MOVES: "<<moves;

    maze[ppy][ppx]=playerSprite;
    maze[gpy][gpx]=goal;
    maze[gby][gbx]=goal2;
    maze[gcy][gcx]=goal3;
    maze[gdy][gdx]=goal4;
    maze[enemy1.y][enemy1.x]=enemy1.sprite;
    maze[enemy2.y][enemy2.x]=enemy2.sprite;
    maze[enemy3.y][enemy3.x]=enemy3.sprite;
    maze[enemy4.y][enemy4.x]=enemy4.sprite;
    maze[enemy5.y][enemy5.x]=enemy5.sprite;
    maze[enemy6.y][enemy6.x]=enemy6.sprite;
    maze[enemy7.y][enemy7.x]=enemy7.sprite;
    maze[enemy8.y][enemy8.x]=enemy8.sprite;
    maze[enemy9.y][enemy9.x]=enemy9.sprite;
    maze[enemy10.y][enemy10.x]=enemy10.sprite;
    maze[enemy11.y][enemy11.x]=enemy11.sprite;
    maze[enemy12.y][enemy12.x]=enemy12.sprite;
    maze[enemy13.y][enemy13.x]=enemy13.sprite;
    maze[enemy14.y][enemy14.x]=enemy14.sprite;
    maze[enemy15.y][enemy15.x]=enemy15.sprite;
    maze[enemy16.y][enemy16.x]=enemy16.sprite;
    maze[enemy17.y][enemy17.x]=enemy17.sprite;
    maze[enemy18.y][enemy18.x]=enemy18.sprite;
    maze[enemy19.y][enemy19.x]=enemy19.sprite;
    maze[enemy20.y][enemy20.x]=enemy20.sprite;
    maze[enemy21.y][enemy21.x]=enemy21.sprite;
    maze[enemy22.y][enemy22.x]=enemy22.sprite;
    maze[enemy23.y][enemy23.x]=enemy23.sprite;
    maze[enemy24.y][enemy24.x]=enemy24.sprite;
    maze[enemy25.y][enemy25.x]=enemy25.sprite;
    maze[enemy26.y][enemy26.x]=enemy26.sprite;
    maze[enemy27.y][enemy27.x]=enemy27.sprite;
    maze[enemy28.y][enemy28.x]=enemy28.sprite;
    maze[enemy29.y][enemy29.x]=enemy29.sprite;
    maze[enemy30.y][enemy30.x]=enemy30.sprite;
    maze[enemy31.y][enemy31.x]=enemy31.sprite;

    maze[enemy33.y][enemy33.x]=enemy33.sprite;
    maze[enemy34.y][enemy34.x]=enemy34.sprite;

    maze[enemy36.y][enemy36.x]=enemy36.sprite;

    maze[enemy38.y][enemy38.x]=enemy38.sprite;

    maze[enemy40.y][enemy40.x]=enemy40.sprite;

    maze[enemy42.y][enemy42.x]=enemy42.sprite;

    maze[enemy44.y][enemy44.x]=enemy44.sprite;
    maze[enemy45.y][enemy45.x]=enemy45.sprite;
    maze[enemy46.y][enemy46.x]=enemy46.sprite;


    for(int y=0; y<HEIGHT;++y){
        cout<<endl;
        for(int x=0;x<WIDTH;++x){
            if(maze[y][x]=='A'&& x>21&&x<23){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[gpy][gpx];
    }
            else if(maze[y][x]=='B'&& x>56&&x<58){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[gby][gbx];
    }
            else if(maze[y][x]=='C'&& x>52&&x<54){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[gcy][gcx];
    }
           else if(maze[y][x]=='D'&& x>2&&x<4){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[gdy][gdx];
    }

            else if(maze[y][x]=='!'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                cout<<'!';
            }
            else if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
                cout<<'#';
            }
            else if(maze[y][x]=='E'&&x>20&&x<39){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'E';
            }
            else if(maze[y][x]=='Z'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'Z';
            }
            else if(maze[y][x]=='F'&&y>5){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'F';
            }
            else if(maze[y][x]=='H'&&y>5){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'H';
            }
            else if(maze[y][x]=='M'&&y>5){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'M';
            }

            else if(maze[y][x]=='X'){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
              cout<<maze[ppy][ppx];
    }
    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
        cout<<maze[y][x];}
        }
    }
for(;;){

    randNum=rand()%randNumMax+1;
    cout<<endl;
    if (maze[ppy][ppx]=='D'){
        PlaySound(TEXT("HS.wav"),NULL,SND_ASYNC);
        cout<<"\n   Knight D-orgath has been defeated !!!  Well done...  ";
        cout<<">>>  CHECKPOINT  <<<  \n\n   ";
        re();
        ppy=14,ppx=3;
        PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);

    }
    if (maze[ppy][ppx]=='C'){
        PlaySound(TEXT("HS.wav"),NULL,SND_ASYNC);
      cout<<"\n   Knight C-anilor has been defeated !!!  Well done...  ";
        cout<<">>>  CHECKPOINT  <<<  \n\n   ";
        re();
        maze[17][57]=' ';
        ppy=17,ppx=52;
        PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);

    }
    if (maze[ppy][ppx]=='B'){
        PlaySound(TEXT("HS.wav"),NULL,SND_ASYNC);
      cout<<"\n   Knight B-orodah has been defeated !!!  Well done...   ";
        cout<<">>>  CHECKPOINT  <<<  \n\n   ";
        re();
        ppy=7,ppx=57;
        PlaySound(TEXT("Joan_GameBeat_4.mp3.wav"),NULL,SND_ASYNC |SND_LOOP);

    }
    if(maze[ppy][ppx]=='A'){
        ofstream file7;
  file7.open("r7.txt");
  file7.close();
            if(moves<370){
                PlaySound(TEXT("HS.wav"),NULL,SND_ASYNC);
            system("CLS");
        cout<<endl;
        cout<<" _+88_\n";
        cout<<" _+880_\n";
        cout<<" _++88_\n";
        cout<<" __+880_________________________++_\n";
        cout<<" __+888________________________+88_\n";
        cout<<" __++880______________________+88_\n";
        cout<<" __++888_____+++88__________+++8_\n";
        cout<<" __++8888__+++8880++88____+++88_\n";
        cout<<" __+++8888+++8880++8888__++888_\n";
        cout<<" ___++888++8888+++888888++888_\n";
        cout<<" ___++88++8888++8888888++888_\n";
        cout<<" ___++++++888888888888888888_\n";
        cout<<" ____++++++88888888888888888_\n";
        cout<<" ____++++++++000888888888888_\n";
        cout<<" _____+++++++000088888888888_\n";
        cout<<" ______+++++++00088888888888_\n";
        cout<<" _______+++++++088888888888_\n";
        cout<<" _______+++++++088888888888_\n";
        cout<<" ________+++++++8888888888_\n";
        cout<<" ________+++++++0088888888_\n";
        cout<<" ________++++++0088888888_\n";
        cout<<" ________+++++0008888888_\n";
        cout<<" ________#############_\n";
        Sleep(2500);
            cout<<"\n   King A-dorath has been defeated !!!  Well done...\n\n   ";
            system("pause");
            system("cls");

                cout<<"\n\n\n\n\n\n\n                            YOU HAVE COMPLETED THE \n\n                         'Chuck Norris' ACHIEVEMENT !!!";
               cout<<"\n\n               ================================================\n\n\n                            ";
  cout<<"Enter your name: ";
  string name;
  cin>>name;
  cout<<"\n\n                          ";

                ofstream file;
  file.open("f.txt");

      file<<"                      6. Chuck Norris --- Completed by "<<name<<" - "<<moves<<" moves";
  file.close();

  system("pause");
  system("CLS");

  PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);



  cout<<"\n                             ======= LEGEND =======\n\n";                      //
    cout<<" A-dorath's eyes stared blankly into the ceiling, his grotesque smile never\n";
    cout<<" left his face. He was dead, as were everyone who had betrayed X-eramir.\n";
    cout<<" There was nothing standing between him and the throne. Still, it wasn't over\n";
    cout<<" yet. Servants informed him that A-dorath had locked L-eila, X-eramir's love,\n";
    cout<<" into the maze underneath the castle a few days ago. Having quickly recovered\n";
    cout<<" from the shock, he now rushes towards the depths of the castle to save the\n";
    cout<<" woman he loves before it's too late...\n\n\n\n ";
    cout<<"     You have completed the chapter! Press Backspace to return to Menu... ";
    while(true){
    if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menuaq mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);

        }
}

            }
    if(moves>=370){

            PlaySound(TEXT("HS.wav"),NULL,SND_ASYNC);
            system("CLS");
        cout<<endl;
        cout<<" -+88_\n";
        cout<<" _+880_\n";
        cout<<" _++88_\n";
        cout<<" __+880_________________________++_\n";
        cout<<" __+888________________________+88_\n";
        cout<<" __++880______________________+88_\n";
        cout<<" __++888_____+++88__________+++8_\n";
        cout<<" __++8888__+++8880++88____+++88_\n";
        cout<<" __+++8888+++8880++8888__++888_\n";
        cout<<" ___++888++8888+++888888++888_\n";
        cout<<" ___++88++8888++8888888++888_\n";
        cout<<" ___++++++888888888888888888_\n";
        cout<<" ____++++++88888888888888888_\n";
        cout<<" ____++++++++000888888888888_\n";
        cout<<" _____+++++++000088888888888_\n";
        cout<<" ______+++++++00088888888888_\n";
        cout<<" _______+++++++088888888888_\n";
        cout<<" _______+++++++088888888888_\n";
        cout<<" ________+++++++8888888888_\n";
        cout<<" ________+++++++0088888888_\n";
        cout<<" ________++++++0088888888_\n";
        cout<<" ________+++++0008888888_\n";
        cout<<" ________#############_\n";
        Sleep(2500);
            cout<<"\n   King A-dorath has been defeated !!!  Well done...\n\n   ";

            system("pause");
            system("cls");

            PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);



  cout<<"\n                             ======= LEGEND =======\n\n";                      //
    cout<<" A-dorath's eyes stared blankly into the ceiling, his grotesque smile never\n";
    cout<<" left his face. He was dead, as were everyone who had betrayed X-eramir.\n";
    cout<<" There was nothing standing between him and the throne. Still, it wasn't over\n";
    cout<<" yet. Servants informed him that A-dorath had locked L-eila, X-eramir's love,\n";
    cout<<" into the maze underneath the castle a few days ago. Having quickly recovered\n";
    cout<<" from the shock, he now rushes towards the depths of the castle to save the\n";
    cout<<" woman he loves before it's too late...\n\n\n\n ";
    cout<<"     You have completed the chapter! Press Backspace to return to Menu... \n";
    while(true){
    if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menuaq mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);

        }
}
    }

}//AAAAAAAAAAAAAA

        else if(maze[ppy][ppx]=='E'){
            Beep(300,800);
             cout<<"\n    You DIED !!! ";
             re();
             ppy=1, ppx=37;
            }
        else if(maze[ppy][ppx]=='Z'){
            Beep(300,800);
             cout<<"\n    You DIED !!! ";
             re();
             ppy=2, ppx=53;
            }
        else if(maze[ppy][ppx]=='F'){
           Beep(300,800);
             cout<<"\n    You DIED !!! ";
             re();
             ppy=15, ppx=72;
            }
        else if(maze[ppy][ppx]=='H'){
            Beep(300,800);
             cout<<"\n    You DIED !!! ";
             re();
              ppy=17, ppx=15;
           }
        else if (maze[ppy][ppx]=='M'){
            Beep(300,800);//F, M, H, E
            cout<<"\n    You DIED! RESPAWNING.....\n \n    >> Backspace == MENU\n    >> ESC == QUIT\n\n    ";
            re();ppy=9, ppx=34;}


            movement=getch();
            switch (movement){
        case'w':
            if (maze[ppy-1][ppx]!='#' &&(maze[ppy-1][ppx]==' '||(maze[ppy-1][ppx]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppy--;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,250);
                    points++;

                 }
                 if (maze[ppy][ppx]=='*'){
                            cout<<"\n   TELEPORTING...";
                       Beep(300,800);system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
                       ppx=56, ppy=17;

                    }
            }
            break;
             case'a':
            if (maze[ppy][ppx-1]!='#' &&(maze[ppy][ppx-1]==' '||(maze[ppy][ppx-1]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppx--;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,250);
                    points++;
                 }
                 if (maze[ppy][ppx]=='@'){
                            cout<<"\n   TELEPORTING...";
                       Beep(300,800);system("cls");keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
                       ppx=36, ppy=13;

                    }

            }
            break;
             case's':
            if (maze[ppy+1][ppx]!='#' &&(maze[ppy+1][ppx]==' '||(maze[ppy+1][ppx]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppy++;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,250);
                    points++;

                 }
            }
            break;
             case'd':
            if (maze[ppy][ppx+1]!='#' &&maze[ppy][ppx+1]!='|' &&(maze[ppy][ppx+1]==' '||(maze[ppy][ppx+1]=='G','N','M','Y','I','O','L','S','Z','P','K','R','U','H'))){
                maze[ppy][ppx]=' ';
                ppx++;
                moves++;
                 if (maze[ppy][ppx]=='!'){
                    Beep(400,250);
                    points++;

                 }
            }
            break;

default: randNum=0;break;
        }
         if(randNum==1&&maze[enemy1.y][enemy1.x-1]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.x--;
        }
        if(randNum==2&&maze[enemy1.y][enemy1.x+1]!='#'){
            maze[enemy1.y][enemy1.x]=' ';
            enemy1.x++;
        }

        if(randNum==1&&maze[enemy2.y][enemy2.x-1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x--;
        }
        if(randNum==2&&maze[enemy2.y][enemy2.x+1]!='#'){
            maze[enemy2.y][enemy2.x]=' ';
            enemy2.x++;
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
        }
        if(randNum==1&&maze[enemy5.y-1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y--;
        }
        if(randNum==2&&maze[enemy5.y+1][enemy5.x]!='#'){
            maze[enemy5.y][enemy5.x]=' ';
            enemy5.y++;
        }
        if(randNum==1&&maze[enemy6.y][enemy6.x-1]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.x--;
        }
        if(randNum==2&&maze[enemy6.y][enemy6.x+1]!='#'){
            maze[enemy6.y][enemy6.x]=' ';
            enemy6.x++;
        }
        if(randNum==1&&maze[enemy7.y][enemy7.x-1]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.x--;
        }
        if(randNum==2&&maze[enemy7.y][enemy7.x+1]!='#'){
            maze[enemy7.y][enemy7.x]=' ';
            enemy7.x++;
        }
        if(randNum==1&&maze[enemy8.y][enemy8.x-1]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.x--;
        }
        if(randNum==2&&maze[enemy8.y][enemy8.x+1]!='#'){
            maze[enemy8.y][enemy8.x]=' ';
            enemy8.x++;
        }
         if(randNum==1&&maze[enemy9.y][enemy9.x-1]!='#'){
            maze[enemy9.y][enemy9.x]=' ';
            enemy9.x--;
        }
        if(randNum==2&&maze[enemy9.y][enemy9.x+1]!='#'){
            maze[enemy9.y][enemy9.x]=' ';
            enemy9.x++;
        }
        if(randNum==1&&maze[enemy10.y][enemy10.x-1]!='#'){
            maze[enemy10.y][enemy10.x]=' ';
            enemy10.x--;
        }
        if(randNum==2&&maze[enemy10.y][enemy10.x+1]!='#'){
            maze[enemy10.y][enemy10.x]=' ';
            enemy10.x++;
        }

        if(randNum==1&&maze[enemy11.y][enemy11.x-1]!='#'&&maze[enemy11.y][enemy11.x-1]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.x--;
        }
        if(randNum==2&&maze[enemy11.y][enemy11.x+1]!='#'&&maze[enemy11.y][enemy11.x+1]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.x++;
        }
        if(randNum==3&&maze[enemy11.y-1][enemy11.x]!='#'&&maze[enemy11.y-1][enemy11.x]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.y--;
        }
        if(randNum==4&&maze[enemy11.y+1][enemy11.x]!='#'&&maze[enemy11.y+1][enemy11.x]!='U'){
            maze[enemy11.y][enemy11.x]=' ';
            enemy11.y++;
        }
        if(randNum==2&&maze[enemy12.y][enemy12.x-1]!='#'){
            maze[enemy12.y][enemy12.x]=' ';
            enemy12.x--;
        }
        if(randNum==1&&maze[enemy12.y][enemy12.x+1]!='#'){
            maze[enemy12.y][enemy12.x]=' ';
            enemy12.x++;
        }

        if(randNum==1&&maze[enemy13.y][enemy13.x-1]!='#'){
            maze[enemy13.y][enemy13.x]=' ';
            enemy13.x--;
        }
        if(randNum==2&&maze[enemy13.y][enemy13.x+1]!='#'){
            maze[enemy13.y][enemy13.x]=' ';
            enemy13.x++;
        }
        if(randNum==2&&maze[enemy14.y][enemy14.x-1]!='#'){
            maze[enemy14.y][enemy14.x]=' ';
            enemy14.x--;
        }
        if(randNum==1&&maze[enemy14.y][enemy14.x+1]!='#'){
            maze[enemy14.y][enemy14.x]=' ';
            enemy14.x++;
        }
        if(randNum==2&&maze[enemy15.y][enemy15.x-1]!='#'){
            maze[enemy15.y][enemy15.x]=' ';
            enemy15.x--;
        }
        if(randNum==1&&maze[enemy15.y][enemy15.x+1]!='#'){
            maze[enemy15.y][enemy15.x]=' ';
            enemy15.x++;
        }
        if(randNum==1&&maze[enemy16.y][enemy16.x-1]!='#'){
            maze[enemy16.y][enemy16.x]=' ';
            enemy16.x--;
        }
        if(randNum==2&&maze[enemy16.y][enemy16.x+1]!='#'){
            maze[enemy16.y][enemy16.x]=' ';
            enemy16.x++;
        }
         if(randNum==2&&maze[enemy17.y][enemy17.x-1]!='#'){
            maze[enemy17.y][enemy17.x]=' ';
            enemy17.x--;
        }
        if(randNum==1&&maze[enemy17.y][enemy17.x+1]!='#'){
            maze[enemy17.y][enemy17.x]=' ';
            enemy17.x++;
        }

        if(randNum==1&&maze[enemy18.y][enemy18.x-1]!='#'){
            maze[enemy18.y][enemy18.x]=' ';
            enemy18.x--;
        }
        if(randNum==2&&maze[enemy18.y][enemy18.x+1]!='#'){
            maze[enemy18.y][enemy18.x]=' ';
            enemy18.x++;
        }
        if(randNum==2&&maze[enemy19.y+1][enemy19.x]!='#'){
            maze[enemy19.y][enemy19.x]=' ';
            enemy19.y++;
}
           if(randNum==1&&maze[enemy19.y-1][enemy19.x]!='#'){
            maze[enemy19.y][enemy19.x]=' ';
            enemy19.y--;
}
             if(randNum==1&&maze[enemy20.y+1][enemy20.x]!='#'){
            maze[enemy20.y][enemy20.x]=' ';
            enemy20.y++;
}
           if(randNum==2&&maze[enemy20.y-1][enemy20.x]!='#'){
            maze[enemy20.y][enemy20.x]=' ';
            enemy20.y--;
}
             if(randNum==1&&maze[enemy21.y+1][enemy21.x]!='#'){
            maze[enemy21.y][enemy21.x]=' ';
            enemy21.y++;
}
           if(randNum==2&&maze[enemy21.y-1][enemy21.x]!='#'){
            maze[enemy21.y][enemy21.x]=' ';
            enemy21.y--;
}
            if(randNum==1&&maze[enemy22.y+1][enemy22.x]!='#'){
            maze[enemy22.y][enemy22.x]=' ';
            enemy22.y++;
}
           if(randNum==2&&maze[enemy22.y-1][enemy22.x]!='#'){
            maze[enemy22.y][enemy22.x]=' ';
            enemy22.y--;
}
             if(randNum==2&&maze[enemy23.y+1][enemy23.x]!='#'){
            maze[enemy23.y][enemy23.x]=' ';
            enemy23.y++;
}
           if(randNum==1&&maze[enemy23.y-1][enemy23.x]!='#'){
            maze[enemy23.y][enemy23.x]=' ';
            enemy23.y--;
}
             if(randNum==2&&maze[enemy24.y+1][enemy24.x]!='#'){
            maze[enemy24.y][enemy24.x]=' ';
            enemy24.y++;
}
           if(randNum==1&&maze[enemy24.y-1][enemy24.x]!='#'){
            maze[enemy24.y][enemy24.x]=' ';
            enemy24.y--;
}
           if(randNum==1&&maze[enemy25.y+1][enemy25.x]!='#'){
            maze[enemy25.y][enemy25.x]=' ';
            enemy25.y++;
}
           if(randNum==2&&maze[enemy25.y-1][enemy25.x]!='#'){
            maze[enemy25.y][enemy25.x]=' ';
            enemy25.y--;
}
             if(randNum==1&&maze[enemy26.y+1][enemy26.x]!='#'){
            maze[enemy26.y][enemy26.x]=' ';
            enemy26.y++;
}
           if(randNum==2&&maze[enemy26.y-1][enemy26.x]!='#'){
            maze[enemy26.y][enemy26.x]=' ';
            enemy26.y--;
}
             if(randNum==2&&maze[enemy27.y+1][enemy27.x]!='#'){
            maze[enemy27.y][enemy27.x]=' ';
            enemy27.y++;
}
           if(randNum==1&&maze[enemy27.y-1][enemy27.x]!='#'){
            maze[enemy27.y][enemy27.x]=' ';
            enemy27.y--;
}
             if(randNum==2&&maze[enemy28.y+1][enemy28.x]!='#'){
            maze[enemy28.y][enemy28.x]=' ';
            enemy28.y++;
}
           if(randNum==1&&maze[enemy28.y-1][enemy28.x]!='#'){
            maze[enemy28.y][enemy28.x]=' ';
            enemy28.y--;
}
            if(randNum==1&&maze[enemy29.y+1][enemy29.x]!='#'){
            maze[enemy29.y][enemy29.x]=' ';
            enemy29.y++;
}
           if(randNum==2&&maze[enemy29.y-1][enemy29.x]!='#'){
            maze[enemy29.y][enemy29.x]=' ';
            enemy29.y--;
}
             if(randNum==1&&maze[enemy30.y+1][enemy30.x]!='#'){
            maze[enemy30.y][enemy30.x]=' ';
            enemy30.y++;
}
           if(randNum==2&&maze[enemy30.y-1][enemy30.x]!='#'){
            maze[enemy30.y][enemy30.x]=' ';
            enemy30.y--;
}
           if(randNum==2&&maze[enemy31.y+1][enemy31.x]!='#'){
            maze[enemy31.y][enemy31.x]=' ';
            enemy31.y++;
}
           if(randNum==1&&maze[enemy31.y-1][enemy31.x]!='#'){
            maze[enemy31.y][enemy31.x]=' ';
            enemy31.y--;
}

            if(randNum==1&&maze[enemy33.y+1][enemy33.x]!='#'){
            maze[enemy33.y][enemy33.x]=' ';
            enemy33.y++;
}
           if(randNum==2&&maze[enemy33.y-1][enemy33.x]!='#'){
            maze[enemy33.y][enemy33.x]=' ';
            enemy33.y--;
}
             if(randNum==1&&maze[enemy34.y+1][enemy34.x]!='#'){
            maze[enemy34.y][enemy34.x]=' ';
            enemy34.y++;
}
           if(randNum==2&&maze[enemy34.y-1][enemy34.x]!='#'){
            maze[enemy34.y][enemy34.x]=' ';
            enemy34.y--;
}

             if(randNum==2&&maze[enemy36.y+1][enemy36.x]!='#'){
            maze[enemy36.y][enemy36.x]=' ';
            enemy36.y++;
}
           if(randNum==1&&maze[enemy36.y-1][enemy36.x]!='#'){
            maze[enemy36.y][enemy36.x]=' ';
            enemy36.y--;
}

             if(randNum==1&&maze[enemy38.y+1][enemy38.x]!='#'){
            maze[enemy38.y][enemy38.x]=' ';
            enemy38.y++;
}
           if(randNum==2&&maze[enemy38.y-1][enemy38.x]!='#'){
            maze[enemy38.y][enemy38.x]=' ';
            enemy38.y--;
}

             if(randNum==2&&maze[enemy40.y+1][enemy40.x]!='#'){
            maze[enemy40.y][enemy40.x]=' ';
            enemy40.y++;
}
           if(randNum==1&&maze[enemy40.y-1][enemy40.x]!='#'){
            maze[enemy40.y][enemy40.x]=' ';
            enemy40.y--;
}

            if(randNum==1&&maze[enemy42.y+1][enemy42.x]!='#'){
            maze[enemy42.y][enemy42.x]=' ';
            enemy42.y++;
}
           if(randNum==2&&maze[enemy42.y-1][enemy42.x]!='#'){
            maze[enemy42.y][enemy42.x]=' ';
            enemy42.y--;
}

 if(randNum==2&&maze[enemy44.y+1][enemy44.x]!='#'){
            maze[enemy44.y][enemy44.x]=' ';
            enemy44.y++;
}
           if(randNum==1&&maze[enemy44.y-1][enemy44.x]!='#'){
            maze[enemy44.y][enemy44.x]=' ';
            enemy44.y--;
}
 if(randNum==1&&maze[enemy45.y+1][enemy45.x]!='#'){
            maze[enemy45.y][enemy45.x]=' ';
            enemy45.y++;
}
           if(randNum==2&&maze[enemy45.y-1][enemy45.x]!='#'){
            maze[enemy45.y][enemy45.x]=' ';
            enemy45.y--;
}
if(randNum==1&&maze[enemy46.y][enemy46.x+1]!='#'){
            maze[enemy46.y][enemy46.x]=' ';
            enemy46.x++;
}
           if(randNum==2&&maze[enemy46.y][enemy46.x-1]!='#'){
            maze[enemy46.y][enemy46.x]=' ';
            enemy46.x--;
}



break;
    }
    sleep1(frameRate);
    clear_screen();
}







}




void map7::mapa()
{system("color 3f");
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

system("color f3");
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
            menuaq mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
           system("cls"); exit(EXIT_PROCESS_DEBUG_EVENT);

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
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[gpy][gpx];
    }
            else if(maze[y][x]=='!'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                cout<<'!';
            }
            else if(maze[y][x]=='N'&&x<30){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'N';
            }
            else if(maze[y][x]=='M'&&x<30){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'M';
            }
            else if(maze[y][x]=='Y'&&x<30){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'Y';
            }
            else if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
                cout<<'#';
            }

            else if(maze[y][x]=='X'){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
              cout<<maze[ppy][ppx];
    }
    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
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
        map7 mo;
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
  map7 mo;
  mo.mapb();}

}
        else if(maze[ppy][ppx]=='Y'||maze[ppy][ppx]=='N'||maze[ppy][ppx]=='M'){
            PlaySound(TEXT("Die.wav"),NULL,SND_ASYNC);

            cout<<"\n    You DIED! RESPAWNING.....\n \n    >> Backspace == MENU\n    >> ESC == QUIT\n\n    ";
          Sleep(500);system("pause");system("cls");ppy=1, ppx=1;keybd_event(0x20,1,KEYEVENTF_EXTENDEDKEY,KEYEVENTF_KEYUP);
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
    sleep1(frameRate);
    clear_screen();
}
};

void map7::mapb(){
system("color 3f");
    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);

  cout<<"\n                             ======= LEGEND =======\n\n";            //         //
    cout<<" Wandering through the dark tunnels and slaying anyone who who tries to stop\n";
    cout<<" him, the brave hero finally sees the light of the moon tearing through the\n";
    cout<<" darkness... \n\n\n ";
system("pause");
PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n LOADING . . .";Sleep(3500);system("cls");

system("color f3");
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
            menuaq mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
          system("cls");  exit(EXIT_PROCESS_DEBUG_EVENT);

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
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
              cout<<maze[gpy][gpx];
    }
            else if(maze[y][x]=='!'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
                cout<<'!';
            }
            else if(maze[y][x]=='N'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'N';
            }
            else if(maze[y][x]=='M'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'M';
            }
            else if(maze[y][x]=='Z'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'Z';
            }
            else if(maze[y][x]=='Y'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'Y';
            }
            else if(maze[y][x]=='I'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'I';
            }
            else if(maze[y][x]=='O'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'O';
            }
            else if(maze[y][x]=='S'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'S';
            }
            else if(maze[y][x]=='L'&&x<33){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                cout<<'L';
            }
            else if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),51);
                cout<<'#';
            }

            else if(maze[y][x]=='X'){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
              cout<<maze[ppy][ppx];
    }
    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
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
    sleep1(frameRate);
    clear_screen();
}

    }
