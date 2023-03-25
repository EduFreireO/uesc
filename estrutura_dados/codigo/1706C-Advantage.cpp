#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin >> test;
    while(test)
    {
        vector <int> v;
        pair <int, int> p = {0, 0};
        int len, aux;
        cin >> len;
        while(len)
        {
            cin >> aux;
            if(aux >= p.first)
            {
                p.second = p.first;
                p.first = aux;
            }
            else if(aux > p.second)
                p.second = aux;
            v.push_back(aux);
            len--;
        }
        for(int x: v)
        {
            if(x == p.first)
                cout << x - p.second << " ";
            else
                cout << x - p.first << " ";     
        }
        printf("\n");
        test--;
    }
}