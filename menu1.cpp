#include "menuf.h"
#include "menuy.h"
#include "menuaq.h"
#include "menubl.h"
#include "menu1.h"
#include "map1.h"
#include "map2.h"
#include "map3.h"
#include <iostream>
#include<windows.h>
#include<string>
#include<cstdlib>
#include<conio.h>
#include<mmsystem.h>
#include<cmath>
#include<ctime>
#include "credits1.h"
#include <fstream>
#include "pass.h"
#include "bonus.h"

using namespace std;

void clear_screen();
void menu1::menua()
{system("color f4");
    PlaySound(TEXT("Game.wav"),NULL,SND_SYNC);   //1

    string menu[5]={"            I. Play                 ## ##", "           II. Settings              ###", "          III. Instructions           #", "           IV. Credits               ###","            V. Quit                 ## ##"};
    int pointer=0;

    while(true){  //2
       clear_screen();
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
    cout<<"\n                                GAME OF THRANS\n\n\n";
      cout<<"       ======= MENU =======       ##     ##       ======= LEGEND =======\n";
      cout<<"                                   ##   ##  The Middle Ages.. a brave knight..\n";
    for(int i=0; i<5; ++i){
        if(i==pointer){
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);

            cout<<menu[i]<<endl;
                     }
        else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
           cout<<menu[i]<<endl;}
}SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
            cout<<"                                   ##   ##      One revenge... One wish...\n";
            cout<<"       ====================       ##     ##       ======================       \n\n\n\n\n\n\n\n\n";
            cout<<"  Backspace == MENU                                                ESC == QUIT\n";
       while(true){    //3
        if(GetAsyncKeyState(VK_UP)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer-=1;
            if(pointer== -1){
                pointer=4;
                            }
            break;
                                       }
        else if(GetAsyncKeyState(VK_DOWN) !=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer+=1;
            if(pointer==5){
                pointer=0;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                        }
        break;
        }
        else if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();
        break;
        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            exit(EXIT_PROCESS_DEBUG_EVENT);
        break;
        }

        else if(GetAsyncKeyState(VK_RETURN)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(200);  //4
            switch(pointer){     //5
        case 0:

{    string menu3[3]={"            I. Dungeon               ###","           II. Courtyard              #","          III. Castle                ###"};  //6
    int pointer=0;

    while(true){   //7
        clear_screen();
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
  cout<<"\n                                GAME OF THRANS\n\n\n";      //
    cout<<"       ======= MENU =======       ##     ##       ======= LEGEND =======\n";
    cout<<"                                   ##   ##  The Middle Ages.. a brave knight..\n";
    cout<<"        Select a chapter:           ## ##\n";



 for(int z=0; z<3; ++z){
        if(z==pointer){
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);
            cout<<menu3[z]<<endl;
                      }
        else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
           cout<<menu3[z]<<endl;}
 } SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
    cout<<"                                    ## ##\n";
    cout<<"                                   ##   ##      One revenge... One wish...\n";
    cout<<"       ====================       ##     ##       ======================     \n\n\n\n\n\n\n\n\n";
     cout<<"  Backspace == MENU                                                ESC == QUIT\n";
       while(true){      //8
        if(GetAsyncKeyState(VK_UP)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer-=1;
            if(pointer==-1){
                pointer=2;
                            }
            break;
                                       }
        else if(GetAsyncKeyState(VK_DOWN) !=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer+=1;
            if(pointer==3){
                pointer=0;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                        }
        break;
        }
        else if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();
        break;
        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            exit(EXIT_PROCESS_DEBUG_EVENT);
        break;
        }


        else if(GetAsyncKeyState(VK_RETURN)!=0){ PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(200);   //9
            switch(pointer){    //10
        case 0:
            {string menu4[2]={"             Level I              ","             Level II             "};    //11
int pointer=0;

while(true){      //12
    clear_screen();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
  cout<<"\n                                GAME OF THRANS\n\n\n";  //
    cout<<"       ======= MENU =======       ##     ##       ======= LEGEND =======\n";
    cout<<"                                   ##   ##  The Middle Ages.. a brave knight..\n";
    cout<<"        Select a chapter:           ## ##\n";
    cout<<"            I. Dungeon               ###\n";
    cout<<"           II. Courtyard              #\n";
    cout<<"          III. Castle                ###\n";
    cout<<"                                    ## ##\n";
    cout<<"                                   ##   ##      One revenge... One wish...\n";
    cout<<"       ====================       ##     ##       ======================       \n\n";

    for(int y=0; y<2; ++y){
        if(y==pointer){
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);

            cout<<menu4[y]<<endl;}
            else{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
           cout<<menu4[y]<<endl;}
    }SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
    cout<<"\n\n\n\n\n";
     cout<<"  Backspace == MENU                                                ESC == QUIT\n";
    while(true){     //13
        if(GetAsyncKeyState(VK_UP)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer-=1;
            if(pointer== -1){
                pointer=1;
                            }
            break;
                                       }
        else if(GetAsyncKeyState(VK_DOWN) !=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer+=1;
            if(pointer==2){
                pointer=0;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                        }
        break;
        }
        else if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();
        break;
        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            exit(EXIT_PROCESS_DEBUG_EVENT);
        break;
        }

        else if(GetAsyncKeyState(VK_RETURN)!=0){ PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(200); //14
            switch(pointer){   //15
        case 0:

           {system("cls");
            map1 ma;
            ma.mapa();
            break;

           }
        case 1:{   system("cls");
    ifstream file1;
   file1.open("r2.txt");
   if(!file1.is_open()){
    cout<<"\n\n\n\n\n\n\n\n\n                                  MAP LOCKED\n\n                          ";
    system("pause");system("cls");
    menu1 mo;
    mo.menua();
   }
   else{
    string line;
    while(file1.good()){
        system("cls");
            map1 mb;
            mb.mapb();
    }
   }

            break;}

            }    //15
    }  //14
}  //13
Sleep(150);
}//12

}break;   //11                            // THEMES 1
        case 1:   {string menu4[2]={"             Level I              ","             Level II             "};   //16
int pointer=0;

while(true){   //17
    clear_screen();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
  cout<<"\n                                GAME OF THRANS\n\n\n";  //
    cout<<"       ======= MENU =======       ##     ##       ======= LEGEND =======\n";
    cout<<"                                   ##   ##  The Middle Ages.. a brave knight..\n";
    cout<<"        Select a chapter:           ## ##\n";
    cout<<"            I. Dungeon               ###\n";
    cout<<"           II. Courtyard              #\n";
    cout<<"          III. Castle                ###\n";
    cout<<"                                    ## ##\n";
    cout<<"                                   ##   ##      One revenge... One wish...\n";
    cout<<"       ====================       ##     ##       ======================       \n\n";
    for(int y=0; y<2; ++y){
        if(y==pointer){
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);
            cout<<menu4[y]<<endl;}
            else{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
           cout<<menu4[y]<<endl;}
    }SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
     cout<<"\n\n\n\n\n";
     cout<<"  Backspace == MENU                                                ESC == QUIT\n";
    while(true){   //18
        if(GetAsyncKeyState(VK_UP)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer-=1;
            if(pointer== -1){
                pointer=1;
                            }
            break;
                                       }
        else if(GetAsyncKeyState(VK_DOWN) !=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer+=1;
            if(pointer==2){
                pointer=0;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                        }
        break;
        }
        else if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();
        break;
        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            exit(EXIT_PROCESS_DEBUG_EVENT);
        break;
        }

        else if(GetAsyncKeyState(VK_RETURN)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(200);   //19
            switch(pointer){  //20
        case 0:
            {   system("cls");
    ifstream file1;
   file1.open("r3.txt");
   if(!file1.is_open()){
    cout<<"\n\n\n\n\n\n\n\n\n                                  MAP LOCKED\n\n                          ";
    system("pause");system("cls");
    menu1 mo;
    mo.menua();
   }
   else{
    string line;
    while(file1.good()){
        system("cls");
            map2 ma;
            ma.mapa();
    }
   }

            break;}

        case 1:{   system("cls");
    ifstream file1;
   file1.open("r4.txt");
   if(!file1.is_open()){
    cout<<"\n\n\n\n\n\n\n\n\n                                  MAP LOCKED\n\n                          ";
    system("pause");system("cls");
    menu1 mo;
    mo.menua();
   }
   else{
    string line;
    while(file1.good()){
        system("cls");
            map2 mb;
            mb.mapb();
    }
   }

            break;}
            }  //20
    }  //19
}  //18
Sleep(150);
}//17

}break;  //16
        case 2:{string menu4[3]={"             Level I               ","             Level II              ","             Level III             "};   //21
int pointer=0;

while(true){   //22
    clear_screen();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
  cout<<"\n                                GAME OF THRANS\n\n\n";  //
    cout<<"       ======= MENU =======       ##     ##       ======= LEGEND =======\n";
    cout<<"                                   ##   ##  The Middle Ages.. a brave knight..\n";
    cout<<"        Select a chapter:           ## ##\n";
    cout<<"            I. Dungeon               ###\n";
    cout<<"           II. Courtyard              #\n";
    cout<<"          III. Castle                ###\n";
    cout<<"                                    ## ##\n";
    cout<<"                                   ##   ##      One revenge... One wish...\n";
    cout<<"       ====================       ##     ##       ======================       \n\n";

    for(int y=0; y<3; ++y){
        if(y==pointer){
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);

            cout<<menu4[y]<<endl;}
            else{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
           cout<<menu4[y]<<endl;}
    }SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
     cout<<"\n\n\n\n";
     cout<<"  Backspace == MENU                                                ESC == QUIT\n";
    while(true){   //23
        if(GetAsyncKeyState(VK_UP)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer-=1;
            if(pointer== -1){
                pointer=2;
                            }
            break;
                                       }
        else if(GetAsyncKeyState(VK_DOWN) !=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer+=1;
            if(pointer==3){
                pointer=0;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                        }
        break;
        }
        else if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();
        break;
        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            exit(EXIT_PROCESS_DEBUG_EVENT);
        break;
        }

        else if(GetAsyncKeyState(VK_RETURN)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(200);   //24
            switch(pointer){  //25
        case 0:{   system("cls");
    ifstream file1;
   file1.open("r5.txt");
   if(!file1.is_open()){
    cout<<"\n\n\n\n\n\n\n\n\n                                  MAP LOCKED\n\n                          ";
    system("pause");system("cls");
    menu1 mo;
    mo.menua();
   }
   else{
    string line;
    while(file1.good()){
        system("cls");
            map3 ma;
            ma.mapa();
    }
   }

            break;}
        case 1:{   system("cls");
    ifstream file1;
   file1.open("r6.txt");
   if(!file1.is_open()){
    cout<<"\n\n\n\n\n\n\n\n\n                                  MAP LOCKED\n\n                          ";
    system("pause");system("cls");
    menu1 mo;
    mo.menua();
   }
   else{
    string line;
    while(file1.good()){
        system("cls");
            map3 mb;
            mb.mapb();
    }
   }

            break;}
        case 2:{   system("cls");
    ifstream file1;
   file1.open("r7.txt");
   if(!file1.is_open()){
    cout<<"\n\n\n\n\n\n\n\n\n                                  MAP LOCKED\n\n                          ";
    system("pause");system("cls");
    menu1 mo;
    mo.menua();
   }
   else{
    string line;
    while(file1.good()){
        system("cls");
            bonus bo;
            bo.bonusa();
    }
   }

            break;}
            } //25
    }//24
}//23
Sleep(150);
}//22

}break;  //21

                           }break;  // little SWITCH---- case;0 map1,map2, map3 levels   10







                                             }//if  9


                }//while 8
Sleep(150); }//while 7
}//case0   6









            break;
        case 1:{ system("cls");   //CASE 1   26



     string menut[2]={"             I. Themes                   ","            II. Hall of Fame             "};
    int pointer=0;

    while(true){  //27
        clear_screen();
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
       cout<<"\n           GAME OF THRANS\n";
     cout<<"\n\n      ======= SETTINGS =======\n\n\n";
 for(int o=0; o<2; ++o){
        if(o==pointer){
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);

            cout<<menut[o]<<endl;
                      }
        else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
           cout<<menut[o]<<endl;}
 }SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
     cout<<"\n\n      ========================\n\n\n\n\n\n\n\n\n\n";
     cout<<"  Backspace == MENU                                                ESC == QUIT\n";
       while(true){
            if(GetAsyncKeyState(VK_UP)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer-=1;
            if(pointer== -1){
                pointer=1;
                            }
            break;
                                       }
        else if(GetAsyncKeyState(VK_DOWN) !=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer+=1;
            if(pointer==2){
                pointer=0;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
                        }
        break;
        }//28
       else if(GetAsyncKeyState(VK_BACK)){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
                system("cls");
            menu1 mo;
            mo.menua();
        break;
        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            exit(EXIT_PROCESS_DEBUG_EVENT);
        break;
        }

         else if(GetAsyncKeyState(VK_RETURN)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(200);//29
            switch(pointer){
        case 0:{ //31


     system("cls");
     string menu2[5]={"          I. White & Red             ", "         II. Grey & Blue             ","        III. Black & Green           ","         IV. Black & Yellow          ","          V. Aqua & White            "};                // THEMEEEEEEEEEEEEEEEEEEES
    int pointer=0;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
    while(true){//32
        clear_screen();
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
       cout<<"\n           GAME OF THRANS\n";
     cout<<"\n\n      ======== THEMES ========\n\n";
 for(int f=0; f<5; ++f){
        if(f==pointer){
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),79);
         cout<<menu2[f]<<endl;
                      }
        else { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
           cout<<menu2[f]<<endl;}
 }SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 244);
       cout<<"\n      ========================\n\n\n\n\n\n\n\n\n";
     cout<<"  Backspace == MENU                                                ESC == QUIT\n";
       while(true){ //33
        if(GetAsyncKeyState(VK_UP)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer-=1;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
            if(pointer== -1){
                pointer=4;
                            }
            break;
                                       }
        else if(GetAsyncKeyState(VK_DOWN) !=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(35);
            pointer+=1;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
            if(pointer==5){
                pointer=0;
                        }
        break;
        }
        else if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();
        break;
        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            exit(EXIT_PROCESS_DEBUG_EVENT);
        break;
        }


       else  if(GetAsyncKeyState(VK_RETURN)!=0){PlaySound(TEXT("Menu.wav"),NULL,SND_ASYNC);Sleep(200);//34
            switch(pointer){//35
       case 0:
            {  system("CLS");
            system("color f4");
menu1 mo;
mo.menua();
                 }break;                             // THEMES 1
        case 1:   {system("CLS");system("color 71");
menubl mo;
mo.menua();
                }break;
        case 2:{system("CLS");
              system("color a");
menuf mo;
mo.menua();
                }break;
        case 3:{system("CLS");system("color 0e");
menuy mo;
mo.menua();
                }break;
         case 4: {system("CLS");system("color 34");
menuaq mo;
mo.menua();
                }break;

                           }//35
break;
                                             }//if  //34


                }Sleep(150);//while  //33
 }//while //32
           }//CASE 0 //31break; //30
        case 1:{
            system("cls");
    ifstream file1;
   file1.open("a.txt");
   if(!file1.is_open()){
    cout<<"ERROR";
   }
   else{
    string line;
    while(file1.good()){
        getline(file1,line);
        cout<<line<<endl;
    }
   }

                ifstream file2;
   file2.open("b.txt");
   if(!file2.is_open()){
    cout<<"ERROR";
   }
   else{cout<<"\n";
    string line;
    while(file2.good()){
        getline(file2,line);
        cout<<line<<endl;
    }
   }

                ifstream file3;
   file3.open("c.txt");
   if(!file3.is_open()){
    cout<<"ERROR";
   }
   else{cout<<"\n";
    string line;
    while(file3.good()){
        getline(file3,line);
        cout<<line<<endl;
    }
   }

                ifstream file4;
   file4.open("d.txt");
   if(!file4.is_open()){
    cout<<"ERROR";
   }
   else{cout<<"\n";
    string line;
    while(file4.good()){
        getline(file4,line);
        cout<<line<<endl;
    }
   }

                ifstream file5;
   file5.open("e.txt");
   if(!file5.is_open()){
    cout<<"ERROR";
   }
   else{cout<<"\n";
    string line;
    while(file5.good()){
        getline(file5,line);
        cout<<line<<endl;
    }
   }

               ifstream file6;
   file6.open("f.txt");
   if(!file6.is_open()){
    cout<<"ERROR";
   }
   else{cout<<"\n";
    string line;
    while(file6.good()){
        getline(file6,line);
        cout<<line<<endl;

    }
   }
   ifstream file7;
   file7.open("g.txt");
   if(!file7.is_open()){
    cout<<"ERROR";
   }
   else{cout<<"\n";
    string line;
    while(file7.good()){
        getline(file7,line);
        cout<<line<<endl;

    }
   }
   cout<<"\n\n\n";
   cout<<"  Backspace == MENU                                                ESC == QUIT\n";
   while(true){
        if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);
}
        }
         break;}


            }//switch //30

                                                }//if  //29
   }//while //28
              Sleep(150);    }//while //27

                }//case 1 //26



        case 2:{
            system("cls"); //CASEEEEEEEEEEEEEE


  cout<<"\n\n\n                          ======= INSTRUCTIONS =======\n\n";
        cout<<"                                Player - X\n";
        cout<<"                                 Goals - A,B,C,D,F,G,Q \n";
        cout<<"                               Enemies - Other letters\n";
        cout<<"                                 Walls - #\n";
        cout<<"                               Portals - @,*\n";
        cout<<"                          Bonus points - !\n";
        cout<<"                           Checkpoints - .,*\n";
        cout<<"                            Open doors - E\n";
        cout<<"                              Controls - W,A,S,D\n\n";
        cout<<"  HINTS: On each level you need at least the half of the points to continue !!!\n";
        cout<<"         You can change places with the enemy when standing next to him !!!\n";
        cout<<"         Every time you move, the enemy moves !!!\n";
        cout<<"         Moving against a wall counts as a move... Use it wisely !!!";

 cout<<"\n\n\n";
        cout<<"  Backspace == MENU                                                ESC == QUIT\n";
        while(true){
        if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);
}
        }

    break;
    }


        case 3:{
            credits1 cr;
            cr.credit1();
while(true){
        if(GetAsyncKeyState(VK_BACK)){
                system("cls");
            menu1 mo;
            mo.menua();

        }
        else if(GetAsyncKeyState(VK_ESCAPE)){PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
            system("cls");exit(EXIT_PROCESS_DEBUG_EVENT);
}
        }
            break;

            }  //CASEEEEEEEEEEEEEEEEE
        case 4:{PlaySound(TEXT("173859__jivatma07__j1game-over-mono.wav"),NULL,SND_SYNC);
                exit(EXIT_PROCESS_DEBUG_EVENT);
                break;
        }


                }//big switch  //5












       }//else if  //4






    }Sleep(150);// while  //3






  }//while //2




}//void //1

//ctor
