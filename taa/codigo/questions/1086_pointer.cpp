#include <bits/stdc++.h>
using namespace std;

int cont(int largura_salao, int comprimento_salao, int largura_tabua, vector <int> tabuas)
{
    if((largura_salao * 100) % largura_tabua)
        return INT_MAX;

    int slot = (largura_salao * 100) / largura_tabua;
    int cont = 0; int left = 0; 
    int i = tabuas.size() - 1, right = i - 1;
    vector <int> :: iterator it;
    int index = -1;
    while(slot != 0 && i >= index )
    {   
        it = lower_bound(tabuas.begin() + left, tabuas.begin() +  right, comprimento_salao - tabuas[i]);
        index = it - tabuas.begin();
        if(tabuas[i] == comprimento_salao)
        {
            slot--; right--;
            cont++;        
        }
        else if(tabuas[i] + *it == comprimento_salao && i > index) 
        {
            cont += 2;
            left++; right--;
            slot--;
        }
        
        i--;    
    }
 
    if(!slot) return cont;
    return INT_MAX;
}
int main()
{
    int m, n, l, k,vertical, horizontal;
    
    int aux1, aux2; 
    while(cin >> m >> n && m && n)
    {
        vector <int> tabuas;
        cin >> k;
        cin >> aux1;
        while(aux1--)
        {
            cin >> aux2;
            tabuas.push_back(aux2);
        }
        sort(tabuas.begin(), tabuas.end());
        vertical = cont(m, n, k, tabuas);
        horizontal = cont(n,m, k, tabuas);


        if(vertical == INT_MAX && horizontal == INT_MAX)
            cout << "impossivel" << endl;
        else
            cout << min(vertical, horizontal) << endl;    
    }
}   