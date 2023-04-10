#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int parent[MAX], r[MAX];

int UnionFind(int a)
{
    if(parent[a] == a)
        return a;
    return parent[a] = UnionFind( parent[a] ); // Path compression    
}

void Merge(int a, int b)
{
    int ParentA = UnionFind(a), ParentB = UnionFind(b);
    
    if(ParentA == ParentB)
        return;

    if(r[ParentA] > r[ParentB])     
        parent[ParentB] = ParentA;
    else if(r[ParentA] == r[ParentB])
    {
        parent[ParentA] = ParentB;
        r[ParentB]++; 
    }
    else
        parent[ParentA] = ParentB;
}
int main()
{
    int banks, operations, b1, b2; 
    
    cin >> banks >> operations;

    for(int i = 1; i <= banks; i++)
    {
        parent[i] = i;
        r[i] = i;
    }

    char action;
    while(operations)
    {
        cin >> action >> b1 >> b2;
        if(action == 'F')
            Merge(b1, b2);
        else if(UnionFind(b1) == UnionFind(b2))
            cout << "S\n";
        else
            cout << "N\n";    
        operations--;     
       
    }

}