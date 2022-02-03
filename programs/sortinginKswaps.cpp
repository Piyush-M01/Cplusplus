#include<iostream>
#include<vector>
#include<string>
using namespace std;
string swap(string s,int smallest,int largest,int start,int end)
{
    if(start==smallest && end==largest)
    {
    char c=s[smallest];
    s[smallest]=s[end];
    s[end]=c;
    }
    else 
    {
    char c=s[smallest];
    s[smallest]=s[end];
    s[end]=c;
    char d=s[largest];
    s[largest]=s[start];
    s[start]=d;
    }
    return s;
}
void Arrange(string s,int k,int c)
{
    int size=s.size()-c;
    int smallest=9,largest=0,index1,index2;
    if(c<=k)
    {
        for(int i=c-1;i<=size;i++)
        {
            char d=s[i];
            int e=d-'0';
            if(smallest>e)
            {
                index1=i;
                smallest=e;
            }
            if(largest<e)
            {
            largest=e;
            index2=i;
            }
        }
        s=swap(s,index1,index2,c-1,size);
        Arrange(s,k,c=c+1);
    }
    else
    cout<<s;
}
int main()
{
    cout<<"Enter string"<<"\n";
    string s;
    cin>>s;
    cout<<"Enter K"<<"\n";
    int k;
    cin>>k;
    Arrange(s,k,1);
}