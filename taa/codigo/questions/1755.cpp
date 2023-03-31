#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos, qtd;
    float din, aux, troco;
    cin >> casos;
    while(casos--)
    {
        cin >> din >> qtd;
        vector <float> prices;
        while (qtd--)
        {   
            cin >> aux;
            prices.push_back(aux);
        }
        troco = 0;
        
        for(auto &it : prices)   
            if(din - floor(din/it) * it > troco && it < din)
                 troco = din - floor(din/it) * it;
        printf("%.2f\n",troco);
    }
}