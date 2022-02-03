//compare with constructor_initialisation.cpp to understand the concept better
#include<iostream>
#include<string>
using namespace std;

class Player
{
    private:
        string name;
        int health;
        int xp;
    public :
        Player();
        Player(string name);
        Player(string name,int health,int xp);
};

Player::Player(string n,int h,int x)
:name{n},health{h},xp{x}{}

Player::Player()
:Player{"None",0,0}{};

Player::Player(string n)
:Player{n,0,0}{}

int main()
{
    Player empty;
    Player frank("Frank");
    Player villain{"Frank",100,55};
}