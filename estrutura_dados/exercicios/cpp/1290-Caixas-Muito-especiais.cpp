#include <bits/stdc++.h>
using namespace std;

// So vou olhar as dimensoes la na frente --> Quando eu for Escolher a caixa com a maior dimensão 
int main()
{
    int n,m;
    int v1, v2, v3;    
    
    bool caixaValida(multiset <int> &a, multiset <int> &b);    
    int volume(multiset <int> &a);
    
    while(cin >> n >> m && n && m)
    {    
        
        
        map < multiset <int>, int > caixas;
        multiset <int> dimensoes, cliente;
        map < multiset <int>, int > :: iterator it;   
        cliente = {v1,v2,v3}; 
        while(m--)
        {
            cin >> v1 >> v2 >> v3;
            dimensoes = {v1,v2,v3};
            
            if(caixaValida(dimensoes, cliente))
            {   
                if(caixas.count(dimensoes))
                    caixas[dimensoes] = 1;
                else
                    caixas[dimensoes] += 1;    
            }
        }
        for(it = caixas.begin(); it != caixas.end();it++)
            if(it -> second >= n)
            {
                dimensoes = it->first;
                cout << volume(dimensoes) - volume(cliente) << endl;
            }
    
        if(it == caixas.end())
            cout << "impossible\n"; 
    }
}

int volume(multiset <int> &a)
{
    int d1, d2, d3;
    
    d1 = *a.begin();
    d2 = *(++a.begin());
    d3 = *(--a.end());
    return d1 * d2 * d3;
}

bool caixaValida(multiset <int> &a, multiset <int> &b)
{
    multiset <int> :: iterator it1, it2;
    it1 = a.begin();
    it2 = b.begin();
    if(*it1 >= *it2)
    {
        it1++;
        it2++;
    }
    else    
        return false;
    if(*it1 >= *it2)
    {
        it1++;
        it2++;
    }
    else
        return false;
    if(*it1 >= *it2)
    {
        it1++;
        it2++;
    }
    else
        return false;
    return true;    
}



caixasMuito.cpp
Exibindo caixasMuito.cpp.