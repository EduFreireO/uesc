#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len_queue, q, aux;
    map <int, bool> quit;
    cin >> len_queue;
    int queue[len_queue];

    for(int i = 0; i < len_queue; i++)
        cin >> queue[i];
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> aux;
        quit[aux] = true;
    }

    bool first = true;
    for(int i = 0; i < len_queue; i++)    
    {    
        if(!quit.count(queue[i]) && first)   
        {    
            cout << queue[i];
            first = false;
        }
        else if(!quit.count(queue[i]))
            cout << " " << queue[i];
    }
    printf("\n");
}        
    
           