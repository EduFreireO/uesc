#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> numbers,a;
    int aux, k;
    vector <int> sequence;

    scanf("%d", &aux);
    for(k = 1; k <= aux; k++)
        sequence.push_back(k);
    aux--;
    while(aux--)
    {
        scanf("%d", &k);
        numbers.push_back(k);
    }
    // Ordenar
       
    sort(numbers.begin(), numbers.end());
    set_difference(numbers.begin(), numbers.end(), sequence.begin(), sequence.end(),back_inserter(a));
    printf("%d", a[0]);    
}