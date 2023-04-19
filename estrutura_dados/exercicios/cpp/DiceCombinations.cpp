#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int v[MAX];
    for(int i = 0; i <= n; i++)
        v[i] = 0;
    v[0] = 1;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 6; j++)
        {
            if(i > j)
                break;
            v[i] += v[i - j];
        }
    }
    cout << v[n] % 1000000007;
}
            
            
            
 
 
 
