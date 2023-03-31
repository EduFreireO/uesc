#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, k, aux;
    scanf("%d %d %d", &m, &n, &k);
    vector <int> ap, size;
        while(m--)
    {
        scanf("%d", &aux);
        ap.push_back(aux);
    }
    while(n--)
    {
        scanf("%d", &aux);
        size.push_back(aux);
    }
    sort(ap.begin(), ap.end());
    sort(size.begin(), size.end());

    int cont = 0;
    aux = 0;
    int j ;
    for(m = 0, j = 0; m < ap.size() && j < size.size(); )
    {
        if(ap[m] - k <= size[j] && size[j] <= ap[m] + k)
        {
            cont++;
            m++;
            j++;
            continue;
        }
        if(size[j] > ap[m] + k)
        {
           m++;
           continue;    
        }    
        j++;
    } 
    
    
    printf("%d\n",cont);
    ap.clear(); size.clear();
}