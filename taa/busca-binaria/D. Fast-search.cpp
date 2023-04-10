#include <bits/stdc++.h>
using namespace std;

int bin(vector <int> &v, int n)
{
    int b = 0, e = v.size() - 1;
    int m = (b + e) / 2;;
    while(e >= b)
    {
        m = (b + e) / 2;
        if(v[m] == n)
            return m;
        else if(v[m] > n)
            e = m - 1;
        else
            b = m + 1;   
    }
    return m;
}

int main()
{
    int len, q;
    int aux, l, r;

    vector <int> v;
    cin >> len;
    while(len)
    {
        cin >> aux;
        v.push_back(aux);
        len--;
    }
    sort(v.begin(), v.end());
    cin >> q;
    while(q)
    {
        cin >> l >> r;
        auto x = upper_bound(v.begin(), v.end(), l);
        auto y = upper_bound(v.begin(), v.end(), r);

        cout << y - x  + 1 << " "; 
        q--;
    }
    
}