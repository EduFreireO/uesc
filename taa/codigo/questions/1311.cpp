#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    list <int> sol;
    
    for(int i = 1; i <= n; i++)
        sol.push_back(i);
    
    int lef, rig;
    list <int> :: iterator esquerda, direita;
    while(r--)
    {   
        cin >> lef >> rig;
        esquerda = find(sol.begin(), sol.end(), lef);
        direita = find(sol.begin(), sol.end(), rig);
        
        
        sol.erase(esquerda--, ++direita);
    
        if(esquerda == sol.begin())
            cout << "* ";
        else
            cout << *(--esquerda) << ' ';

        if(direita == --sol.end())
            cout << "*\n";
        else        
            cout << *(direita) << endl;
        
        
    }
        
}