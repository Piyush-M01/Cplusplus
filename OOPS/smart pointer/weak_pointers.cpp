/*
It must be converted to shared_ptr in order to access the referenced object.
used to track the object, and it is converted to shared_ptr to assume temporary ownership
*/

#include<iostream>
#include<memory>
using namespace std;

class Weak
{
    public:
    int val;
    Weak(int val)
    {
        this->val=val;
        cout<<"Constructor invoked"<<endl;
    }
    ~Weak()
    {
        cout<<"destructor invoked"<<endl;
    }
};
int main()
{
    weak_ptr<int> ptr;
    {
        shared_ptr<int>shPtr=make_shared<int>(25);
        ptr=shPtr;
    } //with the termination of strong reference of shared pointer, the weak pointer also terminates

    
    return 0; 

}