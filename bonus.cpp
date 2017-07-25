#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
#include "bonus.h"
#include "credits.h"
#include "start.h"
#include <fstream>

using namespace std;

void sleep(unsigned int duration);
void clear_screen ( void );

void bonus::bonusa()
{
system("color f0");
    PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);

              cout<<"\n                             ======= LEGEND =======\n\n";
                cout<<"  X-eramir ran as fast as he could. He knew that the maze held a dark secret\n";
                cout<<"  - in the depths of the archaic structure there lived an ancient creature,\n";
                cout<<"  a creature with the body of a man and the head of a bull, the strength of a\n";
                cout<<"  lion and the fury of a wolf - a creature old writings and myths refer to\n";
                cout<<"  as a Minotaur. The horrific beast is known to sleep during days and wake up\n";
                cout<<"  exactly at midnight to search hunt for food. Therefore the maze was used as a\n";
                cout<<"  prison for those who have committed most foul deeds. One they would never\n";
                cout<<"  escape from. But now the young hero's lady was trapped in there and he knew\n";
                cout<<"  there wasn't much time left until midnight...\n\n";
                cout<<"                          ======= INSTRUCTIONS =======\n\n";
                cout<<"                                   Key - 'K'\n";
                cout<<"                                  Goal - 'L'\n";
                cout<<"                                 Space - open doors\n";
                cout<<"                              Controls - Arrows\n\n";
                cout<<"      HINTS: You need to get the 'K' to open the door to the princess !!!\n";
                cout<<"             You have 56 seconds to save her !!!\n";
                cout<<"             Hold arrows to move faster !!!\n\n";
                cout<<"                           ";
              system("pause");
              PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
              system("cls");

    int ppy=1, ppx=4, llx=76,lly=22;
char playerSprite='X',lady='L', rest;



const char HEIGHT=24, WIDTH=79;
unsigned char maze[HEIGHT][WIDTH]={                                            //30y
" #############################################################################",
" #     #                #   #  #         #    #       # #     #  #    #    # #",
" ##---## ######### ###    #   ##   #######  # #  ###  # #   ###  #####  # ## #",
" #          # #    # # #### ######  #       #    #      #### #   #   ###### ##",
" # ##### #### ###### #    # ##   #  # ########## ########     ##   ##     # ##",
" # #   # #           ### ##    #    #    #     # ###   #  ##  #     # #####  #",
" # # # ### ######### # # #  ##### ### #  #  #  #   # # # ##   ##### #   #    #",
" #   #     # #     # # #        #   #### #  #  ###   # #####    #   ####  ####",
" ### ## #### ### ### # #######  #    #   # ###   #####     #  ### #   # #  # #",
" #    #        #     #         ## ###### #   ### #   ##### ## #   # # ##  ## #",
" # # ########### ######### ###  #   #    # #     # # #   #    ### # #    #  ##",
" # ###    #           #      #### # # #    # # #   # ### ###      ### ## #   #",
" #  #  ## # ##### ### ###### # ## ### ## # ### #####  #  # # #  # # #  ####  #",
" ## ##  # # #   #     #   #         #  ##### # #  # # #    # ####   #        #",
" #  #   # #   # # ### # ### ### ### ## # #     #  # # # #### #    # #### ### #",
" #    ### ### ###   #     # # #   #      #### ##  # #   # #  # #### #    # # #",
" # ###  #   #   ### ### # # #   ##### #    #   ## #   #   ####    # # ## # # #",
" #   ###### ###   # # # #      ## #   #### # #  #  # ######    ##   #  ###   #",
" ### #    #  #    # #   ######    ###  #     ####   # #     ## ########### ###",
" # #   #####   ## # ## ##    #### # #### ######   #   # #  ###     #       # #",
" ##### ##  #####    #   #### #  #          ##   #####   ########## # # #######",
" #   ###  ###    ####  #   # ############# ## ###   #####   #     ## ###  #  #",
" # K |        ##  #    #                 # ##     #       #   ###         |  #",
" #############################################################################",
};

while(on){

        if(GetAsyncKeyState(VK_BACK))
            {
                system("cls");
            start so;
            so.starta();

                                      }
else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);

                                    }
        if(hours==1){
                if(GetAsyncKeyState(VK_SHIFT)){
                PlaySound(TEXT("Game_of_Thrans_INTENSE_Theme.wav"),NULL,SND_ASYNC);
                hours=1; seconds=0; milliseconds=0;
                                              }
                    }
    maze[ppy][ppx]=playerSprite;
    maze[lly][llx]=lady;
             if(hours==1 && seconds==0 && milliseconds==0){
                PlaySound(TEXT("Game_of_Thrans_INTENSE_Theme.wav"),NULL,SND_ASYNC);
                hours=0; seconds=55; milliseconds=9;
            maze[2][3]=' ';
            maze[2][4]=' ';
            maze[2][5]=' ';
                                                            }

          if(milliseconds<10 && milliseconds!=10){
            --milliseconds;
                                                    }
                         //LOSE LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
          if ( hours==0 && minutes==0 && seconds==0 && milliseconds==-1){


                PlaySound(TEXT("76376__spazzo-1493__game-over.wav"),NULL,SND_SYNC);
                Sleep(1000);
                system("cls");
                PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);
                system("color f0");

            cout<<"\n                             ======= LEGEND =======\n\n";                       //
              cout<<" An agonized scream told X-eramir that the unthinkable had happened. He felt a";
            cout<<"\n violent, burning pain inside his chest, his arms and legs felt numb, as if ";
            cout<<"\n every bit of energy had suddenly been drained out from his body. X-eramir";
            cout<<"\n walked slowly around the corner as the horrifying truth unfolded before his";
            cout<<"\n eyes. Against him stood the ancient beast,its body dirty and covered in blood,";
            cout<<"\n its right hand holding a rusty axe. A human body, standing in a human pose -";
            cout<<"\n but there was nothing human in its eyes. Between X-eramir and the monstrosity";
            cout<<"\n lie the lifeless body of the princess. Her clothes where covered in blood,";
            cout<<"\n there was a gaping hole in her chest. Her heart had been taken out. Somehow";
            cout<<"\n X-eramir felt only sadness. He raised his blade - the blood on it made him";
            cout<<"\n think about everybody he had to kill, the people he had loved and those he had";
            cout<<"\n hated, those who had betrayed him and those who were dragged in the conflict -";
            cout<<"\n he needn't to, he had no right to kill any of them, and yet he had let his";
            cout<<"\n despair, his anger and pride lead him. The princess's death was the punishment";
            cout<<"\n for his deeds, he realized. Once more he felt anger and disappointment, but";
            cout<<"\n this time towards himself. Those feelings merged with everything else that had";
            cout<<"\n emerged from the depths of him.\n\n\n ";
            system("pause");
            cout<<"\n    ========================================================================\n";
            cout<<"\n He hated himself, he hated everyone who had betrayed him, he hated everyone";
            cout<<"\n who didn't stand by his side, he hated the gods for the fate they had chosen";
            cout<<"\n for him, he hated the whole world. He jumped into battle. A scream filled with";
            cout<<"\n pain and fury echoed through the endless corridors of the maze as X-eramir's";
            cout<<"\n blade tore through the beast's chest, ripping bone and skin. The young man";
            cout<<"\n quickly took his sword out and with one quick swing separated the bull head";
            cout<<"\n from the human torso. The body kept standing, as if it didn't realize its head";
            cout<<"\n was missing, before it finally fell down in a pool of blood. X-eramir stood in";
            cout<<"\n the middle of it, staring at the two corpses, and then collapsed on the cold";
            cout<<"\n floor.";
            cout<<"\n Now that all his enemies were dead X-eramir had finally become the ruler of ";
            cout<<"\n the kingdom. And even though he was a good king, one that was loved and ";
            cout<<"\n respected by both his subordinates and his people, until the rest of his ";
            cout<<"\n life he never stopped wondering if it was all worth it.";
    cout<<"\n\n\n\n\n\n Press R to restart... Press M to continue...\n\n";
    for(;;){
    rest=getch();
    switch(rest){
    case 'r': {
        system("cls");
              bonus bo;
              bo.bonusa();
              break;}
    case 'm': {
        PlaySound(TEXT("0-39.wav"),NULL,NULL);
        system("cls");
              credits co;
              co.credit();
              break;}
    default:' ';break;
              }
    }


        }

        if(seconds==1 && milliseconds==-1 || seconds==2 && milliseconds==-1|| seconds==3 && milliseconds==-1 || seconds==4 && milliseconds==-1 || seconds==5 && milliseconds==-1){
            PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);
        }
        if(milliseconds==-1){

            --seconds;
            milliseconds=9;
            }



        cout<<" Press Shift to Start         ------"<<"0"<<":"<<minutes<<":"<<seconds<<"."<<milliseconds<<"------";


for(int y=0; y<HEIGHT;y++){
        cout<<endl;
        for(int x=0;x<WIDTH;x++){
                if(maze[y][x]=='#'){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
                cout<<'#';}
            else{
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
            cout<<maze[y][x];}
        }
}
        for(;;){
            if(maze[ppy][ppx]=='L'){

                    //ACHIEVEMENT   AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
                    if(seconds>=26){
                        PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
                        cout<<"\n\n ";
                        system("pause");
                    system("cls");
                    system("color f0");
               cout<<"\n\n\n\n\n\n\n                            YOU HAVE COMPLETED THE \n\n                       'Fast & Furious' ACHIEVEMENT !!!";
               cout<<"\n\n               ================================================\n\n\n                            ";
  cout<<"Enter your name: ";
  string name;

  cin>>name;



  cout<<"\n\n                          ";

                ofstream file;
  file.open("g.txt");

      file<<"                      7. Fast & Furious --- Completed by "<<name<<" - "<<49-seconds<<"."<<20-milliseconds<<" sec";
  file.close();

  system("pause");
  system("CLS");
  PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);
  cout<<"\n                             ======= LEGEND =======\n\n";                       //
    cout<<" X-eramir ran as fast as he could, his desperation growing bigger every \n";
    cout<<" second. Suddenly, he heard a fragile voice coming from somewhere near him.\n";
    cout<<" It was a woman crying. X-eramir rushed in the direction the voice was coming\n";
    cout<<" from. He shouted the young woman's name. After a brief pause, a few seconds\n";
    cout<<" that felt like an eternity to the young man, the girl answered him back. They\n";
    cout<<" shouted each others names. And after he passed around another wall, he finally\n";
    cout<<" Her clothes where ragged, her hair was dirty, but her face was as beautiful as\n";
    cout<<" ever. And for the first time in many days X-eramir felt happiness, comfort, as\n";
    cout<<" if everything in the world was in place again. Those feeling didn't last very\n";
    cout<<" long though, as a horrifying roar echoed through the corridors and the sound\n";
    cout<<" of heavy footsteps tremble the ground. X-eramir realized it was the ancient\n";
    cout<<" beast that lives in this maze.\n";
    cout<<" He took his sword out, getting himself ready for another battle. But as he\n";
    cout<<" looked at all the blood on his blade, he realized how many lives he had taken\n";
    cout<<" by now. He had to put an end to this massive slaughter, no matter if it was\n";
    cout<<" people or monsters that he killed. So he put his blade down, grabbed his lady\n";
    cout<<" by the hand and ran as fast as he could towards the exit of this cursed\n";
    cout<<" place. And even though he heard the roar of the creature, filled with hatred\n";
    cout<<" and bloodlust, he knew he had done the right thing.\n\n ";
    system("pause");
  cout<<"\n    ========================================================================\n";
    cout<<"\n X-eramir married princess L-eila and together they became rulers of the\n";
    cout<<" kingdom. And even though he was a respected and loved by his people and\n";
    cout<<" subordinates, until the end of his life he never stopped wondering if he could\n";
    cout<<" have avoided all the bloodshed that had led to his reign.";
     cout<<"\n\n\n\n\n\n\n\n\n Press R to restart... Press M to continue...\n\n ";
    for(;;){
    rest=getch();
    switch(rest){
    case 'r': {
        system("cls");
              bonus bo;
              bo.bonusa();
              break;}
    case 'm': {
        PlaySound(TEXT("0-39.wav"),NULL,NULL);
        system("cls");
              credits co;
              co.credit();
              break;}
    default:' ';break;
              }
    }
                    }

                             //NORMAL WIN NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN
    if((seconds >=0 && milliseconds>0) && seconds<26){
            PlaySound(TEXT("HS.wav"),NULL,SND_SYNC);
            Sleep(1000);
      system("cls");
      PlaySound(TEXT("0-39.wav"),NULL, SND_ASYNC|SND_LOOP);
      system("color f0");
   cout<<"\n                             ======= LEGEND =======\n\n";                       //
    cout<<" X-eramir ran as fast as he could, his desperation growing bigger every \n";
    cout<<" second. Suddenly, he heard a fragile voice coming from somewhere near him.\n";
    cout<<" It was a woman crying. X-eramir rushed in the direction the voice was coming\n";
    cout<<" from. He shouted the young woman's name. After a brief pause, a few seconds\n";
    cout<<" that felt like an eternity to the young man, the girl answered him back. They\n";
    cout<<" shouted each others names. And after he passed around another wall, he finally\n";
    cout<<" Her clothes where ragged, her hair was dirty, but her face was as beautiful as\n";
    cout<<" ever. And for the first time in many days X-eramir felt happiness, comfort, as\n";
    cout<<" if everything in the world was in place again. Those feeling didn't last very\n";
    cout<<" long though, as a horrifying roar echoed through the corridors and the sound\n";
    cout<<" of heavy footsteps tremble the ground. X-eramir realized it was the ancient\n";
    cout<<" beast that lives in this maze.\n";
    cout<<" He took his sword out, getting himself ready for another battle. But as he\n";
    cout<<" looked at all the blood on his blade, he realized how many lives he had taken\n";
    cout<<" by now. He had to put an end to this massive slaughter, no matter if it was\n";
    cout<<" people or monsters that he killed. So he put his blade down, grabbed his lady\n";
    cout<<" by the hand and ran as fast as he could towards the exit of this cursed\n";
    cout<<" place. And even though he heard the roar of the creature, filled with hatred\n";
    cout<<" and bloodlust, he knew he had done the right thing.\n\n ";
    system("pause");
  cout<<"\n    ========================================================================\n";
    cout<<"\n X-eramir married princess L-eila and together they became rulers of the\n";
    cout<<" kingdom. And even though he was a respected and loved by his people and\n";
    cout<<" subordinates, until the end of his life he never stopped wondering if he could\n";
    cout<<" have avoided all the bloodshed that had led to his reign.";
     cout<<"\n\n\n\n\n\n\n\n\n Press R to restart... Press M to continue...\n\n ";
    for(;;){
    rest=getch();
    switch(rest){
    case 'r': {
        system("cls");
              bonus bo;
              bo.bonusa();
              break;}
    case 'm': {
        PlaySound(TEXT("0-39.wav"),NULL,NULL);
        system("cls");
              credits co;
              co.credit();
              break;}
    default:' ';break;
              }
    }

}

}


      if(GetAsyncKeyState(VK_SPACE)){
            if(maze[ppy][ppx-1]=='|'){
                maze[22][5]=' ';
                maze[21][4]='_';
            }
       if(maze[22][3]==' '){
        if(maze[ppy][ppx+1]=='|'){
             maze[ppy][ppx+1]=' ';
             maze[21][75]='_';
            }
           }
       }

        if(GetAsyncKeyState(VK_RIGHT)){
        if((maze[ppy][ppx+1]!='#') && (maze[ppy][ppx+1]!='|')){
                maze[ppy][ppx]=' ';
                ppx++;
        }
        }

       else if (GetAsyncKeyState(VK_LEFT)){
            if(maze[ppy][ppx-1]=='K'){
                Beep(400,250);
            }
                if((maze[ppy][ppx-1]!='#') && (maze[ppy][ppx-1]!='|')){
                maze[ppy][ppx]=' ';
                ppx--;

                }
        }
       else if (GetAsyncKeyState(VK_UP)){
        if(maze[ppy-1][ppx]!='#'){
                maze[ppy][ppx]=' ';
            ppy--;
        }

       }
       else if (GetAsyncKeyState(VK_DOWN)){
        if((maze[ppy+1][ppx]!='#') && (maze[ppy+1][ppx]!='-')){
                maze[ppy][ppx]=' ';
            ppy++;
        }

        }

break;
}

sleep(framerate);
clear_screen ();
};
}


