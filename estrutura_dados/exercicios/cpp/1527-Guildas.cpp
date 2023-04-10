#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

pair <int, int> v[MAX];

int find(int a)
{
    if (v[a].first == a)
        return a;
    return find(v[a].first);    
}

void join(int a, int b)
{
    
}


int main()
{
    int players, operations;
    
    
    for(int i = 1; i <= players; i++)
    {
        v -> first = i;
        v -> second = i;
    }

    

}