#include <bits/stdc++.h>
using namespace std;

bool knp(int number_itens, int max_weight, int k ,int *w, int *v)
{
    vector < vector <int> > t(number_itens + 1,vector <int> (max_weight + 1));
    for(int i = 0; i <= number_itens; i++)
        for(int j = 0; j <= max_weight; j++)
        {
            if(!j || !i) t[i][j] = 0;
            else if(w[i - 1] <= j)
                t[i][j] = max(t[i -1][j], v[i - 1] + t[i - 1][j - w[i - 1]]);
            else
                t[i][j] = t[i - 1][j];    
        }
    
    if(t[number_itens][max_weight] >= k) 
        return true;
    else return false;
}


int main()
{
    int test ;
    cin >> test;
    while(test--)
    {
        int number, w, v, max_weight, k;
        cin >> number;

        int wei[number], value[number];
        for(int i = 0; i < number; i++)
        {
            cin >> v >> w;
            wei[i] = w; value[i] = v;
        }
        cin >> max_weight >> k;
        bool result = knp(number, max_weight, k, wei, value);
        if(result) cout << "Missao completada com sucesso" << endl;
        else cout << "Falha na missao" << endl;
    }
}