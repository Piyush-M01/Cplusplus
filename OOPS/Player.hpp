//specification of player class
#ifndef _PLAYER_H_
#define _PLAYER_H_
#include<string>
using namespace std;
class Player
{
    public:
    string name;
    int health;
    int xp;

    void talk(string);
    bool is_dead();

    private:
    void talk();
};
#endif