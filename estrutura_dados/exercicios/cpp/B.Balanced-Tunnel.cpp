#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cars;
    cin >> cars;

    int entry[cars], exit[cars];
    map <int, bool> m; 

    for(int i = 0; i < cars; i++)
        cin >> entry[i];
    
    for(int i = 0; i < cars; i++)
        cin >> exit[i];

    int fined = 0, i = 0, j = 0;
    while(i < cars && j < cars)
    {
        if(m.count(entry[i])) 
        {    
            i++;
            continue;
        }
        else if(entry[i] != exit[j])
        {
            m[exit[j]] = true;
            j++;
            fined++;
        }
        else        
        {
            i++;
            j++;
        }
    }
    cout << fined << endl;        
}