#include <bits/stdc++.h>
using namespace std;

void make_vet(vector <int> &v, int n)
{
    for(int i = 1; i <= n; i++)
        v.push_back(i);
}


int main()
{
    int n, aux;
    while(cin >> n && n)
    {
        vector <int> per(n), ord;
        make_vet(ord, n);
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            per.push_back(aux);
        }
        int cont = 0;

        for(int i = 0; i < n; i++)
        {
            auto index = lower_bound(ord.begin(), ord.end(), per[i])  - per.begin();
            cont += fdim(i, index);
        }
        // cout << cont;
        cont/=2;
        if(!cont)
            cout << "Marcelo" << endl;
        if(cont % 2)
            cout << "Marcelo" << endl;
        else 
            cout << "Carlos" << endl;    
    }
}