#include <iostream>
#include "pass.h"
#include "bonus.h"
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
#include "bonus.h"
#include "credits.h"
#include "start.h"


using namespace std;

void pass::passa()
{
    string pass;
              cout<<"\n                                GAME OF THRANS\n\n\n\n";
                cout<<"                        ====== CONFIRMATION CODE ======\n\n\n";
                cout<<"            ========================================================\n\n";
                cout<<"                             Enter Password: ";
cin>>pass;
if(pass=="princess"){
              cout<<"\n            ========================================================";
          cout<<"\n\n\n                            ";system("pause");system("cls");
          bonus bo;
          bo.bonusa();


}
              else{
      cout<<"\n            ========================================================";
    cout<<"\n\n                                 Wrong Password\n";
         cout<<"                        Finish map3: lvl2 to unlock it...\n\n\n\n\n";
         cout<<"  Backspace == MENU                                                ESC == QUIT\n";
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
}
