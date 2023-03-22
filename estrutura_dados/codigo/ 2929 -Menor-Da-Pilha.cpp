#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> bag;
    deque <int> d;
    int number_operations, value;
    string operation;
    cin >> number_operations;

    
    
    while(number_operations--)
    {
        cin >> operation;
            


        if(operation == "PUSH") cin >> value; //Preciso consertar essa linha
        if(operation == "PUSH" && d.empty())
        {
            bag.push(value); d.push_back(value);
        }
        else if(operation == "PUSH" && d.front() >= value)
        {
            bag.push(value); d.push_front(value); // Coloco o presente de menor valor no topo do deque
        }
        else if(operation == "PUSH")
        {
            bag.push(value); d.push_back(value); // Coloco o ultimo presente na bag
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