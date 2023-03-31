#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector <pair <int,int>> &vet, int val, int occ)
{
    int beg = 0, end = vet.size() - 1;
    while(end >= beg)
    {
        int m = (beg + end) / 2;
        if(vet[m].first == val && vet[m].second == occ)
            return m;
        else if(vet[m].first > val || vet[m].second > occ)
            end = m - 1;
        else
            beg = m + 1;        
    }
    return 0;
}


int main()
{
    int n, m, aux;
    while(cin >> n >> m)
    {
        vector <pair <int, int> > vet;
        map <int, int> ma;
        while(n--)
        {
            cin >> aux;
            auto f = find(ma.begin(), ma.end(), aux); 
            if( f == ma.end())    
                ma[aux] = 1;
            else
                ma[aux]++;
            vet.push_back({aux, ma[aux]});        
        }
        stable_sort(vet.begin(), vet.end());
        while(m--)
        {
            cin >> n >> aux;
            cout << binarySearch(vet, n, aux) << endl;
        }
    }
}