#include "credits.h"
#include <iostream>
#include<windows.h>
#include<string>
#include<cstdlib>
#include<conio.h>
#include<mmsystem.h>
#include<cmath>
#include<ctime>
#include "map1.h"
#include "map2.h"
#include "map3.h"
#include "menu1.h"
#include"credits.h"
#include "start.h"
using namespace std;



void credits::credit(){

 system("CLS");

        cout<<"\n\n\n\n\n\n\n\n                       ##### #  # ####     #### ##   # ###\n";
                        cout<<"                         #   #  # #        #    ###  # #  #\n";
                        cout<<"                         #   #### ###      ###  # ## # #  #\n";
                        cout<<"                         #   #  # #        #    #  ### #  #\n";
                        cout<<"                         #   #  # ####     #### #   ## ###\n";Sleep(3000);
 system("CLS");

   PlaySound(TEXT("GameOfThrans_EndingTheme_Final_Amplified.wav"), NULL, SND_ASYNC);
      cout<<"\n                                GAME OF THRANS\n\n\n";Sleep(1000);
        cout<<"                                   CREDITS\n\n";Sleep(1000);
        cout<<"                                 DEVELOPED BY  \n";
        cout<<"                                Johnny Studios \n\n";Sleep(1000);
        cout<<"                                 GAME DIRECTOR \n";
        cout<<"                                  Joan Botzev   \n\n";Sleep(1000);
        cout<<"                                STUDIO DIRECTOR  \n";
        cout<<"                                  Joan Botzev  \n\n";Sleep(1000);
        cout<<"                                 ART DIRECTOR  \n";
        cout<<"                                  Joan Botzev  \n\n";Sleep(1000);
        cout<<"                               TECHNICAL DIRECTOR  \n";
        cout<<"                                  Joan Botzev  \n\n";Sleep(1000);
        cout<<"                                   PRODUCER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                               CREATIVE DIRECTOR\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                               EXEUTIVE PRODUCER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                                 GAME DESIGNER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                             LEVEL DESIGN DIRECTOR\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                               ANIMATION DIRECTOR\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                                 AUDIO DIRECTOR\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                                     MUSIC\n";
        cout<<"                                Alexander Bonev\n\n";Sleep(1000);
        cout<<"                                  SOUNDTRACKS\n";
        cout<<"                                   by R.H.C.P\n";
        cout<<"                            Californication-8bit mix\n\n";Sleep(1000);
        cout<<"                                by Running Forest\n";
        cout<<"                                    Pressure\n";
        cout<<"                             Back to the eight bits\n";
        cout<<"                          Game of Thrans Ending Theme\n\n";Sleep(1000);
        cout<<"                                    STORY BY\n";
        cout<<"                                 Boris Georgiev\n\n";Sleep(1000);
        cout<<"                            ASSISTANT LEVEL DESIGNERS \n";
        cout<<"                                 Boris Georgiev\n";
        cout<<"                                 Stefan Mirev\n\n";Sleep(1000);
        cout<<"                                  SCRIPTWRITER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                              TEST STUDIO MANAGER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                            LEAD GRAPHICS PROGRAMMER\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                              GAMEPLAY PROGRAMMING\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                             INTERFACE PROGRAMMING\n";
        cout<<"                                  Joan Botzev\n\n";Sleep(1000);
        cout<<"                              MARKETING ASSISTANT\n";
        cout<<"                                Alexander Bonev\n\n";Sleep(1000);
        cout<<"                              PRODUCTION ASSISTANT\n";
        cout<<"                                 Boris Georgiev\n\n";Sleep(1000);
        cout<<"                                   PR MANAGER\n";
        cout<<"                                 Boris Georgiev\n\n";Sleep(1000);
        cout<<"                                   PRESIDENT\n";
        cout<<"                                  Joan Botzev\n\n"; Sleep(1000);
        cout<<"                                   CREATED BY \n";
        cout<<"                                  Joan Botzev \n\n";Sleep(1000);
        cout<<"                              IN ASSOCIATION WITH\n";
        cout<<"                                    NOBODY\n\n";Sleep(1000);
        cout<<"                             THIS SOFTWARE CONTAINS\n";
        cout<<"                                 ALMOST NOTHING\n\n";Sleep(1000);
        cout<<"                              COPYRIGHT @1998-2015\n";
        cout<<"                              ALL RIGHTS RESERVED.\n\n\n";Sleep(4000);
        cout<<"                Press BACKSPACE to return to menu... ESC to Quit...";

while(true){
        if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            start so;
            so.starta();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);
}
        }

}


