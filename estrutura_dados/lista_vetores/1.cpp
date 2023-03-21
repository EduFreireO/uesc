#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    
    int numbers , aux,even = 0, odd = 0;
    cin >> numbers;
    while(numbers)
    {
        cout << "Digite um número: ";
        cin >> aux;
        v.push_back(aux);
        numbers--;
    }

    
    for(auto x: v)
    {
        if(x % 2)
            odd++;
        else
            even++;
    }

    printf("Há %d pares e %d imapares\n", even, odd);

}