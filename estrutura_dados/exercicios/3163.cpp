#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> m;
    vector < queue <string> > airplanes(4);
    int coord;
    string id;
    int number_airplanes = 0;
    
    cin >> id;
    m["-1"] = 0; m["-3"] = 1;
    m["-2"] = 2; m["-4"] = 3;
    coord = m[id]; 
    
    while(id != "0")
    {
        cin >> id;
        
        if(m.count(id))
            coord = m[id];
        else if(id != "0")
        {
            airplanes[coord].push(id);
            number_airplanes++;
        }
    }
    
    int i = 0;
    while(number_airplanes--)
    {
        while(airplanes[i].empty())
            i = (i + 1) % 4;
        if(number_airplanes > 0)
            cout << airplanes[i].front() << " ";
        else cout << airplanes[i].front()<< endl;
        airplanes[i].pop();
        i = (i + 1) % 4;    
    }
    
}