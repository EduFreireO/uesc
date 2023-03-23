#include <bits/stdc++.h>
using namespace std;

int main()
{
    int itens;
    while(cin >> itens && itens)
    {
        vector <int> v;
        int value, search;
        while(itens)
        {
            cin >> value;
            v.push_back(value);
            itens--;
        }
        cin >> search;
        while(search)
        {
            cin >> value;
            bool exist = false;
            for(int i = 0; i < v.size() && !exist; i++)
                if(v[i] == value)
                {
                    cout << i + 1 << endl;
                    exist = true;    
                }
            if(!exist)
                cout << "NAO" << endl;    
            search--;
        }
        printf("\n");
    }
}