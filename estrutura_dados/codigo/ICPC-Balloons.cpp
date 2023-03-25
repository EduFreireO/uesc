#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length, number_tests, total;
    cin >> number_tests;
    char c;
    while(number_tests)
    {
        map <char, int> m;
        total = 0;
        cin >> length;
        while(length)
        {
            cin >> c;
            if(!m.count(c))
            {
                m[c] = 1;
                total += 2;
            }
            else
                total++;
            length--;    
        }
        cout << total << endl; 
        number_tests--;

    }

}