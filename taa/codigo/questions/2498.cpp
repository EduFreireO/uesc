#include <bits/stdc++.h>
using namespace std;

int mochila(int wk , int n, int *v, int *w)
{
    vector <vector <int>> t(n + 1, vector<int>(wk + 1));
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= wk; j++)
        {    
            if(!i || !j) t[i][j] = 0;
            else if(w[i - 1] <= j)
                t[i][j] = max(v[i - 1] + t[i - 1][j - w[i - 1]], t[i - 1][j] );
            else
                t[i][j] = t[i - 1][j];    
        }

    return t[n][wk];    
}



int main()
{
    int n, m, w, v;
    int i = 1;

    while(cin >> n >> m && n && m)
    {
        int values[n], weights[n];
        for(int i = 0; i < n; i++)
        {
            cin >> w >> v;
            weights[i] = w;
            values[i] = v;
        }
        int result = mochila(m, n, values, weights);
        printf("Caso %d: %d\n", i++, result);    
    }
}





