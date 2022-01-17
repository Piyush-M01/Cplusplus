#include <iostream>
#include<vector>

using namespace std;
pair<float,float> apair; 
vector<pair<float,float> > v_temp; 
vector<vector<pair<float,float>>> mp;

int main()
{
    float valy=-1.33;
    float valx=1.22;
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            apair.first = valx; 
            apair.second = valy;
            v_temp.push_back(apair);
            valy=valy+0.16;
        }
        mp.push_back(v_temp);
        valy=-1.33;
        valx=valx+0.16;
    }
    
        for (int i=0;i<16;i++) { 
        //v_temp = mp; 
        for (vector<pair<float,float> >::iterator it2 = v_temp.begin(); it2 != v_temp.end(); ++it2) { 
            apair = *it2; 
            cout << "(" << apair.first << "," << apair.second << ") , "; 
        } 
        cout <<'}'<< '\n'; 
    } 
    return 0;
}
