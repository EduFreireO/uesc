#include <bits/stdc++.h>
using namespace std;
int main()
{
    int apps, events;
    cin >> apps >> events;
    vector < int > v(apps + 1, 0); // Acho que ta errado.    
    list < pair < int, int > > q;
    
    int op, x;
    while(events--)
    {
        cin >> op >> x;
        if(op == 1)
        {    
            v[x]++;
            if(!q.empty() && q.back().first == x)
                q.back().second++;
            else
                q.push_back({x, 1});    
        }

    }

}