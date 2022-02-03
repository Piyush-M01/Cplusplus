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
};

class Account
{
    public:
    string name;
    double balance;

    bool deposit(double balance);
    bool withdraw(double bal);

};

int main()
{
    //Player frank;
    //Player hero;
// 
    //using pointers
    // Player *enemy {nullptr};
    // enemy=new Player; //dynamic memory allocation
// 
    // delete enemy;
// 
    // vector<Player> Player_vec{frank};
    // Player_vec.push_back(hero);
    // return 0;
// 

    Player frank;
    frank.name="Frank";
    frank.health=100;
    frank.xp=12;

    //using pointers
    //Method 1
    Player *enemy=new Player;
    enemy->name="Enemy";
    enemy->health=100;
    enemy->xp=10;

    //Method 2
    (*enemy).name="Enemy";
    (*enemy).health=100;
    (*enemy).xp=10;
    return 0;


}
    