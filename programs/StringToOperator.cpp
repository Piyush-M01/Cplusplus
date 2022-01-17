#include<iostream>
#include <boost/algorithm/string.hpp>
using namespace boost::algorithm;
using namespace std;

int val=1;
int StrToOp(string s)
{
    if(s.length()>1)
        if(s[1]=='<' && ((int)s[0]-48)<((int)s[2]-48))
            {
                return 1;
            }
        else if(s[1]=='>' && ((int)s[0]-48)>((int)s[2]-48))
            return 1;
        else
            return 0;
    return 0;
}
int main()
{
    string s;
    cout<<"enter string"<<"\n";
    getline(cin,s);
    trim(s);
    s=s+" ";
    string s1="";
    int i=0;
    while(i<s.length())
    {
        if(s[i]!=' ')
            s1=s1+s[i];
        else if(s[i]==' ')
        {
            val=StrToOp(s1);
            s1="";
        }
    i++;
    }
    if(val==1)
    cout<<"True";
    else
    cout<<"False";  

}