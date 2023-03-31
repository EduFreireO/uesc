#include <bits/stdc++.h>
using namespace std;
int main()
{

    set <int> ana, bia;
    set <int> :: iterator diff1, diff2;    
    int a,b,aux;
    scanf("%d, %d", &a, &b);
    while(a--)
    {
        scanf("%d", &aux);
        ana.insert(aux);
    }
    while(b--)
    {
        scanf("%d", &aux);
        bia.insert(aux);
    }
    set_difference(ana.begin(), ana.end(), bia.begin(), bia.end(), diff1);
    set_difference(bia.begin(), bia.end(), ana.begin(), ana.end(), diff2);

    printf("%d", *diff1);

}