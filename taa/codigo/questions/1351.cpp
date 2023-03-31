#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m, aux;
    float aux2;
    cin >> n >> m;
    vector < int > id(n);
    for(int i = 0; i < n; i++)
    {
        cin >> aux; id[i] = aux;
    }
    vector <pair <int, float>> prices;
    
    while(m--)
    {
        cin >> aux >> aux2;
        prices.push_back({aux, aux2});
    }
    
    int i = 0, j = 0;
    float pr = 0;
    float min = prices[j].second;
    bool searching = false;
    while(i < id.size() && j < prices.size())
    {
        if(id[i] == prices[j].first){
            pr += prices[j].second; 
            i++;
            j++;    
        }
        else if(i > 0 && id[i - 1] == prices[j].first)        

    }
    if(n) cout << "Impossible" << endl;
    else  printf("%.2f\n", pr);   
}