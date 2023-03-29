#include <bits/stdc++.h>
#define QTD 10
using namespace std;


vector <int> arvore[QTD];

void aresta(int u, int v)
{
	arvore[u].push_back(v);
}

void dfs(int no)
{
    // Processa no
    for(auto v: arvore[no])
        dfs(v);
}

void bfs(int root)
{
    queue <int> q;
    int node;
    q.push(root);
    while(!q.empty())
    {
        node = q.front();
        q.pop();
        // Processa
        for(auto x: arvore[node])
            q.push(x);
    }
}

int main()
{
    aresta(1, 2);
    return 0;
}