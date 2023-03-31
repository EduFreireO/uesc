#include <bits/stdc++.h>
using namespace std;

int v;
int bfs(int source, int end,vector < vector <int> > &adj )
{
    int aux;
    vector <bool> visited(v + 1, false); vector <int> dist(v + 1, -1);
    queue <int> q; dist[source] = 0; visited[source] = true;
    q.push(source); aux = -1;
    while(aux != end)
    {
        aux = q.front(); q.pop();
        for(auto x: adj[aux])
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                dist[x] = dist[aux] + 1;   
            }
    }
    return dist[aux];
}

int main()
{
    int cases, edges, v1, v2;
    cin >> cases;
    while(cases--)
    {
        cin >> v >> edges;
        vector < vector <int> > adj(v + 1);
        while(edges--)
        {
            cin >> v1 >> v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }
        cout << bfs(1, v, adj) << endl;
    }
}