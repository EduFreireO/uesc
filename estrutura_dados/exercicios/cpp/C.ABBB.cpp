#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests;
    cin >> tests;

    while(tests--)
    {
        string sequence;
        cin >> sequence;
        stack <char> s;
        for(int i = 0; i < sequence.length(); i++)
        {
            if(s.empty())
                s.push( sequence[i] ); 
            else if(s.top() == 'A' && sequence[i] == 'B')
                s.pop();
            else if(s.top() == 'B' && sequence[i] == 'B')
                s.pop();
            else
                s.push(sequence[i]);            
        }
        cout << s.size() << endl;
    }
}