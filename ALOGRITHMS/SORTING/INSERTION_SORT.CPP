#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    vector<int> v;
    cout<<"Enter the size"<<endl;
    cin>>size;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<size;i++)
    {
        int e;
        cin>>e;
        v.push_back(e);
    }
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<i;j++)
        {
            if((v[i]>v[j] && v[i]<v[j+1])||(v[i]<v[0]))
            {
                if(v[i]<v[0])
                {
                    v.insert(v.begin(),v[i]);
                    v.erase(v.begin()+i+1);
                }
                else
                {
                    v.insert(v.begin()+j+1,v[i]);
                    v.erase(v.begin()+i+1);
                }
            }
        }
    }
    for(auto i:v)
    cout<<i<<" ";
    return 0;
}