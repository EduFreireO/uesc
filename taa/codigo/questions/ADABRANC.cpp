#include <bits/stdc++.h>
using namespace std;
int cont = 0;
void dfs(vector <vector <pair <int, int> > > &adj, int start, int w, vector <bool> &visited){
    visited[start] = true;
    for(auto x : adj[start])
        if(!visited[x.first] && x.second >= w){ 
            cont++;    
            dfs(adj, x.first, w, visited);
        }  
} 

void graph(int v1, int v2, int w ,vector <vector <pair <int, int> > > &adj)
{
    adj[v1].push_back({v2, w});
    adj[v2].push_back({v1, w});
}

int main()
{
    int v, e, q, v1 , v2, w;
    cin >> v >> e >> q;
    vector <vector <pair <int, int >>> adj(v);
    vector <bool> visited(v, false);
    
    while(e--)
    {       
        cin >> v1 >> v2 >> w;
        graph(v1, v2, w, adj);
    }
    
    while (q--)
    {
        visited.assign(visited.size() , false);
        cont = 1;
        cin >> v1 >> w;
        dfs(adj, v1, w, visited);
        cout << cont << endl;
    }
    


}