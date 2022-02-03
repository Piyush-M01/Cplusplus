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
//common way
// Player::Player()
// {
    // name="None";
    // health=0;
    // xp=0;
// }

//better way
Player::Player()
:name{"None"},health{0},xp{0}{}

Player::Player(string n)
:name{n},health{0},xp{0}{}

Player::Player(string n,int h,int x)
:name{n},health{h},xp{x}{}

int main()
{
    Player empty;
    Player frank("Frank");
    Player villain{"Frank",100,55};
}