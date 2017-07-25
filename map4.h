#ifndef MAP4_H
#define MAP4_H


class map4
{
    public:

        const int frameRate=(int)1000/999;
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

#endif // MAP4_H
