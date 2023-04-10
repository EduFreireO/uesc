#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int  h[MAX];
pair <int, int> parent[MAX];
int FindSet(int x)
{
    if(FindSet(x) == x)
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
        parent[ParentX]
        parent[ParentY].first = ParentX;
    }
    else if(h[ParentX] == h[ParentY])
    {
        parent[ParentY] = ParentX;
        h[ParentX] += 1;
    }
    else
        parent[ParentX]  = ParentY;       

}


int main()
{
    
}