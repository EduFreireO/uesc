#include <bits/stdc++.h>
using namespace std;

bool binary_search(vector <int> &v, int n)
{
    int begin = 0, end = v.size() - 1, mid = (begin + end)/2;
    while(end >= begin)
    {
        if(v[mid] == n)
            return true;
        else if(v[mid] > n)
            end = mid - 1;
        else
            begin = mid + 1;
        mid = (begin + end) /2;            
    }
    return false;
}

int main()
{
    int len, query, aux;
    vector <int> v; bool exist;
    cin >> len >> query;
    while(len)
    {
        cin >> aux;
        v.push_back(aux);
        len--;
    }
    sort(v.begin(), v.end());
    while(query)
    {
        cin >> aux;
        exist = binary_search(v, aux);
        if(exist) cout << "YES\n";
        else cout << "NO\n";
        query--;
    }
}