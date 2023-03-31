#include <bits/stdc++.h>
using namespace std;
int visited[250];
int dist[250]; 

int djikstra(int **m, int start)
{
    memset(visited, 0, sizeof(visited));
    memset(dist, INT_MAX, sizeof(dist));

    
}


int main()
{
    int v, a, service, start;
    int m[v + 1][v + 1];
    

    int v1, v2, w;
    
    for(int i = 0; i < a; i++)
    {
        cin >> v1 >> v2 >> w;
        m[v1][v2] = w;
        v[v2][v1] = w;
    }
    
}
