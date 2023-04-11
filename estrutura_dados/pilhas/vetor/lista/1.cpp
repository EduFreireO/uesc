#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

template <class T>
class Stack
{
    public:
        T v[MAX];
        int len;

    Stack()
    {
        len = 0;
    }

    void push(T a)
    {
        if(len >= MAX)
            return ;
        v[len] = a;
        len++;
    }

    T pop()
    {
        int last = len - 1;
        if(len > 0)
        {
            T obj = v[last];
            len--;
            return obj;
        }
        return INT_MAX;
    }

    void changeTwoFirst()
    {
        if(len < 2)
            return;
        T top = pop();
        T bottom = pop();
        push(top);
        push(bottom);
    }



    void show()
    {
        for(int i = len - 1; i >= 0; i--)
            cout << v[i] << endl;
    }
};



int main()
{
    Stack <int> s;
    s.push(3); s.push(5); s.push(7), s.push(9);
    s.changeTwoFirst();
    s.show(); 
   

}
