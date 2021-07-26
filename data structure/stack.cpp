#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;

    //inserting elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //printing the elements of stack
    cout<<"elements"<<"\n";
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    //swapping elements of a stack
    cout<<"swapping"<<endl;
    stack<int> st1;
    stack<int> st2;
    for(int i=1;i<=5;i++)
    {
        st1.push(i*5);
        st2.push(i*10);
    }
    st1.swap(st2);
    cout<<"st1"<<endl;
    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
    cout<<"st2"<<endl;
    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<endl;

}