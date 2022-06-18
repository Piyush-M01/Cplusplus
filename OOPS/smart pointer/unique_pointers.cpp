//very efficient

//points to an object on the heap
//there can be only one unique_ptr pointing to the object on heap
//cannot be assigned or copied
//can be moved

#include<iostream>
#include<memory>
using namespace std;

int main()
{
    unique_ptr<int> ptr=make_unique<int>(25);
    cout<<*ptr<<endl;
    //unique pointers cannot be shared
    //unique_ptr<int> ptr2=ptr; ----- ERROR

    //we can move the ownership of our unique pointer
    unique_ptr<int>ptr2=move(ptr); //makes ptr -nullptr
    cout<<*ptr2;
    //null pointer exception on printing cout<<*ptr;    
    return 0; 
}