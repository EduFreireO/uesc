#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int pai[MAX];

int find(int x)
{
    if( pai[x] == x)
        return x;
    return find( pai[ x ] );    
}

void join(int x, int y)
{
    pai[find(x)] = find(y);
}




int main()
{
    for(int i = 0; i < MAX; i++)
        pai[i] = i;
}
