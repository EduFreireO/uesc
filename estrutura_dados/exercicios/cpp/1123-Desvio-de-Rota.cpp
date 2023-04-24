#include <bits/stdc++.h>
#define MAX 250
using namespace std;

int vertex, edges, cityRoutes, fix, e1, e2, w;
int dist[MAX];
int prec[MAX];
vector <pair <int, int> > v[MAX];


int djk(int Source, int End)
{
    
    for(int i = 0; i < vertex ; i++)
    {    
        dist[i] = INT_MAX;
        prec[i] = 0;
    }
    dist[Source] = 0;
    priority_queue < pair <int, int > > pq;
    pq.push( {0, Source} );

    while( ! pq.empty() )
    {
        int City = pq.top().second;
        
        if(prec[City]) 
            continue;
        if(City  <  cityRoutes)
            return dist[City] + djk(City, End);
        prec[City]  = 1;
        pq.pop();
        for (auto u: v[City]) 
        {
            int b = u.first, w = u.second; 
            if (dist[City] + w < dist[b]) 
            {
                dist[b] = dist[City] + w;
                pq.push({-dist[b],b});
            }
        }
    }
    return dist[End];   
}

int main()
{
    
    while(cin >> vertex >> edges >> cityRoutes >> fix)
    {
      
        // for(int i = 0; i < vertex; i++)
        //     v[i].clear();
        while(edges--)
        {    
            cin >> e1 >> e2 >> w;
            v[e1].push_back({e2, w});
            v[e2].push_back({e1, w});
        }
        cout << djk(fix, cityRoutes - 1);
    }

}