#include<iostream>
#include<string>
#include<vector>
#include "Player.hpp"

using namespace std;

bool Player::is_dead()
{
    cout<<name;
    return true;
}

int main()
{
    Player frank;
    frank.name="Frank";
    frank.health=100;
    frank.xp=12;
    cout<<frank.is_dead();
    return 0;


}
    