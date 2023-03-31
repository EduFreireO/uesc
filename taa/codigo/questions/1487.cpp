#include <bits/stdc++.h>
using namespace std;


map <int, int> m;

int coin_change(int time, int length, int *weight, int *values)
{
    if(m.count(time))
        return m[time];
    if(!time)
        return m[0] = 0;
    m[time] = 0;

    for(int i = 0; i < length; i++)
        if(time >= weight[i])
        m[time] =  max(m[time], values[i] + coin_change(time - weight[i], length, weight, values));
    return m[time];    
}

int main()
{
    int n, t, instace = 1;
    while(cin >> n >> t && n && t)
    {    
        int w[n], v[n], w1, v1;
        for(int i = 0; i < n; i++)
        {
            cin >> w1 >> v1;
            w[i] = w1;
            v[i] = v1;
        }
        int result = coin_change(t, n, w, v);
        printf("Instancia %d\n%d\n\n", instace++, result);
        m.clear();
    }

}