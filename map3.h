#ifndef MAP3_H
#define MAP3_H


class map3
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
        void mapa();
        void mapb();
};

#endif // MAP3_H
