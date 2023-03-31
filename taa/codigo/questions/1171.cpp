#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aux;
    map <int,int> m;
    map <int,int> :: iterator it;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d",&aux);
        it = m.find(aux);
        if(it != m.end())
        {   
            m[aux] += 1;
            continue;
        }
        m[aux] = 1;       
    }

    for(auto [key, value] : m)
    {
        printf("%d aparece %d vez(es)\n", key, value);
    }
}