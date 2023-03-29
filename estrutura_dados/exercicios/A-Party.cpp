#include <bits/stdc++.h>
using namespace std;

template<typename T , std::size_t edges>
int bfs(int no, T (&v)[edges])
{
    queue <int> q;
    int node, parent[edges], heigth[edges],level = 1;
    q.push(no);
    while(!q.empty())
    {
        node = q.front();
        q.pop();
        for(auto x: v[node])
            q.push(x);
    }
    return 1;
}

int main()
{
    int edges, aux;
    queue <int> q;
    cin >> edges;
    vector <int> v[edges];

   for(int i = 0; i < edges; i++)
   {
        cin >> aux;
        if(aux != -1)
            v[aux].push_back(i);
   } 
    
   bfs(0, v);


}