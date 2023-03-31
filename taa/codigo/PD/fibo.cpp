#include <bits/stdc++.h>
using namespace std;

int fib_memo(int n, vector <int> &v)
{
    if(n <= 1)
        return n;

    if(v[n] == INT_MAX)
        v[n] = fib_memo(n - 1, v) + fib_memo(n - 2, v);
    return v[n];        
}

int fib_tabu(int n, vector <int> &v)
{   
    v[0] = 0; v[1] = 1;
    for(int i = 2; i <= n; i++)
        v[i] = v[i - 1] + v[i - 2];
    return v[n];        
 }



int main()
{
    int n;
    while(true)
    {
    cout << "Digite o n° numero: " ;
    cin  >> n;
    
    vector <int> v(n + 1, INT_MAX);
    
    
    fib_tabu(n, v);
    cout << v[n] << endl;}
}