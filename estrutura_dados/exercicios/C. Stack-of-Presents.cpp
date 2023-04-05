#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    
    int presents, queue; 
    cin >> presents >> queue;
    
    int stack[presents], q[queue];

    for(int i = 0; i < presents; i++)
        cin >> stack[i];
    for(int i = 0; i < queue; i++)
        cin >> q[i];

    
    int top = 0, x, front = 0, time = 0;
    while(queue)
    {
        if(stack[top] == q[front])
        {
            time++;
            top++;
            front++;
        }



    }    


}