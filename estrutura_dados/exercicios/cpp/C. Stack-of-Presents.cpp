#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len_stack, len_queue, aux;
    list <int> presents;
    set <int> s;

    cin >> len_stack >> len_queue;
    
    while(len_stack--)
    {
        cin >> aux;
        presents.push_back(aux);
    }
    
    while(len_queue--)
    {
        cin >> aux;
        s.insert(aux);
    }

    


}

