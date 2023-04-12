#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int  h[MAX];
pair <int, int> parent[MAX];
int FindSet(int x)
{
    if(parent[x].first == x)
        return x;
    return parent[x].first = FindSet( parent[x].first );    
}

void Join(int x, int y)
{
    int ParentX = FindSet(x), ParentY = FindSet(y);
    if(ParentX == ParentY)
        return;

    if(h[ParentX] > h[ParentY])    
    {    
        parent[ParentY].first = ParentX;
        parent[ParentX].second += parent[ParentY].second; 
    }
    else if(h[ParentX] == h[ParentY])
    {
        parent[ParentY].first = ParentX;
        parent[ParentX].second += parent[ParentY].second;
        h[ParentX] += 1;
    }
    else
    {    
        parent[ParentX].first  = ParentY; 
        parent[ParentY].second += parent[ParentX].second;
    }      

}


int main()
{
    int players, queries;
    while(cin >> players >> queries && players && queries)
    {
        for(int i = 1; i <= players; i++)
        {    
            parent[i].first = i;
            h[i] = 0;
        }        
        int lvl;
        for(int i = 1; i <= players; i++)
        {
            cin >> lvl;
            parent[i].second = lvl;
        }
        int op ,p1, p2;
        while(queries)
        {

            cin >> op >> p1 >> p2;
            if(op == 1)
            {    
                Join(p1, p2);
                continue;
            }
            if()   
            


        }



   }   
}