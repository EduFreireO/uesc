#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
int parent[MAX];
int r[MAX];

int FindP(int x)
{
    if(parent[x] == x)
        return x;
    return parent[x] = FindP(parent[x]);    
}


void Join(int a, int b)
{
    int Pa = FindP(a);
    int Pb = FindP(b); 
    if(Pa == Pb)
        return ;
    if(r[Pa] > r[Pb])
        parent[Pb] = Pa;
    else if(r[Pa] == r[Pb])
    {
        parent[Pb] = Pa;
        r[Pa] += 1;
    }
    else
        parent[Pa] = Pb; 
    
}


int main()
{
    string op;
    int elements, queries, el1, el2;
    cin >> elements >> queries;
    
    for(int i = 1; i < elements; i++)
    {
        parent[i] = i;
        r[i] = 0; 
    }
    
    
    while(queries)
    {
        cin >> op >> el1 >> el2;
        if(op == "union")
            Join(el1, el2);
        else
        {
            if(FindP(el1) == FindP(el2))
                cout << "YES\n";
            else
                cout << "NO\n";    
        }
        queries--;        
    }

}