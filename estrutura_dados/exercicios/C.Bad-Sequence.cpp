#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <char> s;
    int len;
    cin >> len;
    char bracket;
    
    bool flag = true;
    while(len--)
    {
        cin >> bracket;
        if(!s.empty() && bracket == ')' && s.top() == '(')
            s.pop();
        else if(!s.empty() && bracket == '(' && s.top() == ')' && flag)
        {    
            s.pop();
            flag = false;
        }
        else
            s.push(bracket);        
    }

    if(s.empty()) cout << "Yes\n";
    else cout << "No\n";
}