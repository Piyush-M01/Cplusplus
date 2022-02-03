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
    bool is_dead()
    {
        cout<<name;
        return true;
    }

    private:
    void talk(){
        cout<<name;
    }
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
 

    Player frank;
    frank.name="Frank";
    frank.health=100;
    frank.xp=12;

    cout<<frank.is_dead();
    // frank.talk(); -- gives an error bcz function is private and private members can't be accessed outside of class

    return 0;


}
    