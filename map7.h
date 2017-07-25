#ifndef MAP7_H
#define MAP7_H


class map7
{
    public:
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

#endif // MAP7_H
