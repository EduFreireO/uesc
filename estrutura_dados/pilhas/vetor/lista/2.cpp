#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

class Stack
{
    public:
        char s[MAX];
        int len;
        Stack(): len(0) {};
        
        bool isEmpty()
        {
            return len == 0? true : false;
        }
        
        
        void push(char c)
        {
            s[len] = c;
            len++;
        }

        void pop()
        {
            if(len > 0)
                len--;
        }


};