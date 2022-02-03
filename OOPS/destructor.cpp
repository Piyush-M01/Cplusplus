#include<iostream>
#include<string>
using namespace std;

class Player
{
    private:
    string name;
    int health;
    int xp;
    public:
    Player()
    {
        cout<<"No param"<<"\n";
    }
    Player(string name)
    {
        cout<<"1 param"<<"\n";
    }
    Player(string name,int health,int xp)
    {
        cout<<"3 param"<<"\n";
    }
    //Destructor
    ~Player()
    {
        cout<<"destructor called"<<"\n";
    }
};

int main()
{
    Player slayer;
    Player frank{"Frank",100,4};
    Player hero{"Hero"};
    Player{"Villain"};

    Player *enemy=new Player("Enemy",1000,0);
    delete enemy; //destructor called

    //if no constructor and destructor is provided, c++ will automatically create them
    return 0;

}