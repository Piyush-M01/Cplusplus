//data member that belongs to class
//function that does not have any objects

#ifndef _PLAYER1_H_
#define _PLAYER1_H_
#include<iostream>
#include<string>
using namespace std;

class Player
{
    private:
    static int num_players;
    int health;
    int xp;
    string name;

    public:
    static int get_num_players();
    string get_name(){
        return name;
    }
    int get_health()
    {
        return health;
    }
    int get_xp()
    {
        return xp;
    }
    Player(string n="None",int h=0,int xp=0);
    Player(const Player &source);
    ~Player();

};
#endif