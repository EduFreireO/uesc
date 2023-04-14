#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    map <char, int> m;
    m['('] = -1;
    m['+'] = 0;
    m['-'] = 0;
    m['*'] = 1;
    m['/'] = 1;
    m['^'] = 2; 
    string aux;
    while(tests)
    {
        stack < char > s;
        cin >> aux;
        for(int i = 0; i < aux.size(); i++)
        {
            if(!m.count( aux[i]) && aux[i] != '(')
                cout << aux[i];
            else if(s.empty())
                s.push(aux[i]);
            else if(aux[i] == '(')
                s.push(aux[i]);
            else if(aux[i] == ')')
            {
                while(s.top() != '(')
                {
                    cout << s.top();
                    s.pop();
                }
                s.pop();
            }
            else if(m[ aux[i] ] > m[s.top()])
                s.push( aux[i] );
            else
            {
                while(m[s.top()] > m[aux[i]])
                {
                    cout << m[s.top()] << endl;
                    s.pop();
                }
                s.push(aux[i]);
            }        
        }
        while(!s.empty())
        {   
            cout << s.top();
            s.pop();
        }    
        printf("\n");        
        tests--;
    }
}