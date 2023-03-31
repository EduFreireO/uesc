#include <bits/stdc++.h>
using namespace std;


int main()
{
    int m,n, v1, v2;
    char a;
    while(cin >> m >> n)
    {
        char str[m + 1];
        vector <vector <int>> adj(m + 1);
        bool visited[m + 1] = {false};
        for(int i = 1; i <= m; i++)
        {
            cin >> a;
            str[i] = a;
        }

        
        while(n--)
        {
            cin >> v1 >> v2;
            adj[v1].push_back(v2); adj[v2].push_back(v1);
        }

    }
}