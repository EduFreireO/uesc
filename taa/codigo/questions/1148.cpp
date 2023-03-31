#include <bits/stdc++.h>
using namespace std;

typedef pair <int, int> pi;
int main()
{
    int n, m, start, end, node;
   while(cin >> n >> m && n){
        
        int matriz[n + 1][n + 1] = {0} ;
        
        while(m--)
        {
            int v1, v2, w;
            cin >> v1 >> v2 >> w;
            matriz[v1][v2] = w;
        }

        cin >> m;
        while(m--)
        {
            
            cin >> start >> end;
            bool visited[n + 1] = {false};
            int dist[n + 1];
            for(int i = 1; i <= n; i++)
               dist[i] = INT_MAX;
            
            priority_queue <pi, vector<pi>, greater <pi>> pq;
            pq.push({0 , start}); dist[start] = 0;
            while(!pq.empty() )
            {
                int node = pq.top().second;
                pq.pop();
                if(node == end) break;
                visited[node] = true;
                for(int i = 1; i <= n; i++)
                {
                    if(matriz[node][i] && matriz[i][node] && !visited[i])
                    {    
                        dist[i] = dist[node];
                        pq.push({dist[i], i});    
                    }
                    else if(matriz[node][i] && dist[node] + matriz[node][i] < dist[i])
                    {
                        dist[i] = dist[node] + matriz[node][i];
                        pq.push({dist[i],i});    
                    }    
                }
            }
            if(dist[end] == INT_MAX)
                cout << "Nao e possivel entregar a carta" << endl;
            else
                cout << dist[end] << endl;    
        }
        printf("\n");
   }    
}   