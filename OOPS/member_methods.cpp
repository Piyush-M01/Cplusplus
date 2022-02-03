#include<iostream>
#include<string>
#include<vector>
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

bool Player::is_dead()
{
    cout<<name;
    return 0;
}

void Player::talk()
{
    cout<<"1";
}
int main()
{
 

    Player frank;
    frank.name="Frank";
    frank.health=100;
    frank.xp=12;

    cout<<frank.is_dead();
    // frank.talk(); -- gives an error bcz function is private and private members can't be accessed outside of class
    //frank.talk(); -- inaccessible bcz of private
    return 0;
}
    