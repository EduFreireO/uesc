#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> bag;
    deque <int> d;
    int number_operations, value;
    string operation;
    cin >> number_operations;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(number_operations--)
    {
        cin >> operation;
            


        if(operation == "PUSH")  //Preciso consertar essa linha
        {
            cin >> value;
            bag.push(value);
            
            if(operation == "PUSH" && d.empty())
                d.push_back(value);
            else if(operation == "PUSH" && d.front() >= value)
                d.push_front(value); // Coloco o presente de menor valor no topo do deque
            else if(operation == "PUSH")
                d.push_back(value); // Coloco o ultimo presente na bag 
        }
        else if((operation == "MIN" || operation == "POP" ) && bag.empty())
            cout << "EMPTY" << endl;
        else if(operation == "MIN")
            cout << d.front() << endl;
        else if(d.front() == bag.top()) 
        {
            d.pop_front(); bag.pop(); 
        }
        else
        { 
            d.pop_back();
            bag.pop();
        }
        
    }
}