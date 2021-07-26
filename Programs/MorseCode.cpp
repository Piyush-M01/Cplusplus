#include<iostream>
#include<set>
#include<vector>
using namespace std;
void Code(vector<string> s)
{
    set<string> s1;
    string s2="";
    string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s[i].size();j++)
        {
            s2=s2+arr[(((int)s[i][j])-97)];
        }
        s1.insert(s2);
        s2="";
    }
    cout<<s1.size();
}
int main()
{
    vector<string> s;
    string s1;
    int si;
    cin>>si;
    for(int i=0;i<si;i++)
    {
        cin>>s1;
        s.push_back(s1);
    }
    Code(s);
}