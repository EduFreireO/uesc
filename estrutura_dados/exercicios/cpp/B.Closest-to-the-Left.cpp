#include <bits/stdc++.h>
using namespace std;

int not_grt(vector <int> &v, int n)
{
    int l = -1, r = v.size(), mid = (l + r)/2;
    while(r - l > 1)
    {
        if(n >= v[l])
            l = mid;
        if(v[r] > n)
            r = mid;
        mid = (l + r) / 2;         
    }
    return l;
}


int main()
{
    int len, q, aux;
    vector <int> v;
    v.push_back(INT_MIN);
    cin >> len >> q;
    while(len)
    {
        cin >> aux;
        v.push_back(aux);
        len--;
    } 
    v.push_back(INT_MAX);
    while(q)
    {
        cin >> aux;
        cout << not_grt(v, aux) << "\n";
        q--;
    }
}