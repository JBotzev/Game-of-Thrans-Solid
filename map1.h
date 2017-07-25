#ifndef MAP1_H
#define MAP1_H



class map1{

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
        void mapa();
        void mapb();



};


#endif // MAP1_H
