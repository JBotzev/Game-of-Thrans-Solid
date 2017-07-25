#ifndef MAP2_H
#define MAP2_H


class map2
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

#endif // MAP2_H


