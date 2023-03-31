#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    vector <int> price, customers;
    scanf("%d %d",&n ,&m);

    int aux;
    while(n--)
    {
        scanf("%d",&aux);
        price.push_back(aux);   
    }
    while(m--)
    {
        scanf("%d",&aux);
        customers.push_back(aux);
    }
    
    sort(price.begin(), price.end());
    sort(customers.begin(), customers.end());


    for(n = 0, m = 0; n < price.size() && m < customers.size(); )
    {
        if(customers[m] >= price[n])
        {
            printf("%d", price[n]);
            n++;
            m++;
            continue;
        }

        printf("-1");
        m++;
    }   


}