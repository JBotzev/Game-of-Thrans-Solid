#ifndef MAP5_H
#define MAP5_H


class map5
{  public:
   const int frameRate=(int)1000/40;
bool on=true;
int randNum;
int randNumMax=2;
int points=0;
int moves=0;

struct Moveables{
char sprite;
int x;
int y;

};
      void  mapa();
      void  mapb();
      void  mapc();
      void  mapd();
      void  mape();
      void  mapf();

};

#endif // MAP5_H
