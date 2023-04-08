#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <char, char> m;
    m['}'] = '{';
    m[')'] = '(';
    m[']'] = '[';
    
    
    string line;
    int cases;
    cin >> cases;
    while(cases--)
    {
        stack <char> s;    
        cin >> line;
        for(char c: line)
        {
            if(c == '{' || c == '(' || c == '[')
                s.push(c);
            else if(!s.empty() && s.top() == m[c])
                s.pop();
            else
                s.push(c);    
        }
        if(s.empty())
            cout << "S\n";
        else
            cout << "N\n";     
    }
}