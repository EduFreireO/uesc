#include <bits/stdc++.h>
using namespace std;
int main()
{
    int person;
    long wins = 0, streak;
    cin >> person >> streak;

    int v[person];
    for(int i = 0; i < person; i++)
        cin >> v[i];

    int i = 0, j = 1;
    while(wins != streak)
    {   
        if(i == j)  
            break;
        if(v[j] > v[i])
        {
            i = j;
            wins = 0;
        }
        else if(i != j)
            wins++;
        j = (j + 1) % person;    
    }
    cout << v[i] << endl;        
}
