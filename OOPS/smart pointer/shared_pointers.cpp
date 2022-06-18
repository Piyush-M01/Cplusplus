/*
reference counting ownership model i.e. it maintains the reference count of its contained pointer in cooperation 
with all copies of the shared_ptr

*/

#include<iostream>
#include<memory>
using namespace std;

class Shared
{
    public:
    int val;
    Shared(int val)
    {
        this->val=val;
        cout<<"Constructor invoked"<<endl;
    }
    ~Shared()
    {
        cout<<"destructor invoked"<<endl;
    }
};
int main()
{
    shared_ptr<Shared> ptr=make_shared<Shared>(10);
    cout<<"Shared count: "<<ptr.use_count()<<endl;
    shared_ptr<Shared> ptr2=ptr;
    cout<<"Shared count: "<<ptr.use_count()<<endl;

    cout<<ptr2<<endl; //returns address
    cout<<ptr2.get()<<endl;
    
    return 0; 

}