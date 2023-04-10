#include <bits/stdc++.h>
using namespace std;

// Menor elemento maior que n



int main()
{
    int len, queries, aux;
    vector <int> v;
    cin >> len >> queries;

    while(len)
    {
        cin >> aux;
        v.push_back(aux);
        len--;
    }

    while(queries)
    {
        cin >> aux;
        auto x = lower_bound(v.begin(), v.end(), aux);
        cout << x - v.begin() + 1 << endl; 
        queries--;
    }

}