#include <bits/stdc++.h>
#define MAX 300000
using namespace std;
int parent[MAX], sum[MAX];
int Max[MAX], Min[MAX];
int r[MAX];

int FindP(int x)
{
    if(parent[x] == x)
        return x;
    return parent[x] = FindP(parent[x]);    
}


void get(int x)
{
    int pX = FindP(x);
    cout << Min[pX]  << " " <<
            Max[pX] << " " << 
            sum[pX] << "\n";
}

void Union(int a, int b)
{
    int pA = FindP(a);
    int pB = FindP(b);
    if(pA == pB)
        return ;

    int Max_ = max(Max[pA], Max[pB] );
    int Min_ = min(Min[pA], Min[pB]); 
   
    if(r[pA] > r[pB])
    {
        Max[pA] = Max_;
        Min[pA] = Min_;
        sum[pA] += sum[pB];
        parent[pB] = pA;
    }
    else if(r[pA] == r[pB])
    {
        Max[pA] = Max_;
        Min[pA] = Min_;
        sum[pA] += sum[pB];
        parent[pB] = pA;
        r[pA] += 1;
    }
    else
    {
        Max[pB] = Max_;
        Min[pB] = Min_;
        sum[pB] += sum[pA];
        parent[pA] = pB;
    }    
    
    
}



int main()
{
    
    
    
    
    
    int elements, queries;
    cin >> elements >> queries;
    for(int i = 1; i <= elements; i++)
    {
        parent[i] = i;
        sum[i] = 1;
        Max[i] = i;     
        Min[i] = i;
    }
    string aux;
    int a, b;
    while(queries)
    {
        cin >> aux;
        if(aux == "union")
        {    
            cin >> a >> b;
            Union(a, b);
        }
        else
        {
            cin >> a;
            get(a);
        }
        queries--;
    }

}





