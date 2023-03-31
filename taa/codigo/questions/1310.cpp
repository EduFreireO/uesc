#include <bits/stdc++.h>
using namespace std;

int max_value(int n, int cost, vector <int> &earnings)
{
    int m = INT_MIN, price;
    int v[n + 1] = {0};
    v[1] = earnings[0] - cost;
    
    for(int i = 1; i <= n; i++)
    {
        price = earnings[i] - cost;
        v[i] = max(price, price + v[i-1]);
        if(v[i] >= m) m = v[i];
    } 
    
    if(m <= 0)
        return 0;
    return m;    
}






int main()
{
    int n, cost, aux;
    while(cin >> n)
    {
        vector <int> earnings(n + 1);
        cin >> cost;
        for(int i = 1; i <= n; i++)
        {
            cin >> aux;
            earnings[i] = aux;
        }
        cout << max_value(n, cost, earnings) << endl;
    }
}