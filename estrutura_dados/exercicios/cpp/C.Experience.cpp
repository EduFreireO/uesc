#include <bits/stdc++.h>
#define MAX 200000
using namespace std;

int Find(vector <int> &v, int x)
{
    if(v[x] == x)
        return x;
    return v[x] = Find( v ,v[x] );    
}   

void Join(vector <int> &v, vector <int> &r,int a, int b)
{
    int pa = Find(v, a), pb = Find(v, b);
    
    if(pa == pb)
        return;
    if(r[pa] > r[pb])
        v[pb] = pa;
    else if(r[pa] == r[pb])
    {
        r[pa]++;
        v[pb] = pa;
    }
    else
        v[pa] = pb;    
}

void Add(vector <int> &v, vector <int> &b, int a, int value)
{
    int pa = Find( v, a); // Provavelmente vai dar TLE
    for(int i = 1; i < v.size(); i++)
        if(v[i] == pa)
            b[i] += value;
}

int get(vector <int > &v, int a)
{
    return v[a];
}



int main()
{
    
    int players, queries;
    cin >> players >> queries;
    vector <int> lvl(players + 1), parents(players + 1), r(players + 1);

    for(int i = 1; i < players; i++)
    {
        r[i] = 0;
        lvl[i] = 0;
        parents[i] = i;
    }
    string op; 
    int a, b;
    while(queries)
    {
        cin >> op;
        if(op == "join")
        {
            cin >> a >> b;
            Join(parents, r,a ,b);
        }
        else if(op == "add")
        {
            cin >> a >> b;   
            Add(parents, lvl, a, b);
        }
        else
        {
            cin >> a;
            cout << get(lvl, a) << endl;
        }
        queries--;
    
    }


}