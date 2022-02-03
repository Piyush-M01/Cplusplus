//data member that belongs to class
//function that does not have any objects

#include "Player1.hpp"
int Player::num_players=0;

Player::Player(string n,int h,int x)
:name{n},health{h},xp{x}{
++num_players;
}

Player::Player(const Player &source)
:Player{source.name,source.health,source.xp}{
}
int Player::get_num_players()
{
    return num_players;
}
Player::~Player()
{
--num_players;
}

#include<iostream>
using namespace std;
void display_active()
{
    cout<<"Active player"<<Player::get_num_players()<<endl;
}
int main()
{
    display_active();
    Player hero{"Hero"};
    display_active();
    return 0;
}