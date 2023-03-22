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
            /*Que coisa feia cara. Tava uma merda, mas funcionava agora tudo cagado*/


        if(operation == "PUSH") cin >> value;    
        if(operation == "PUSH" && d.empty())
        {
            bag.push(value); d.push_back(value);
        }
        else if(operation == "PUSH" && d.front() >= value)
        {
            bag.push(value); d.push_front(value);
        }
        else if(operation == "PUSH")
        {
            bag.push(value); d.push_back(value);
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