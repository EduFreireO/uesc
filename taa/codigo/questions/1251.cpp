#include <bits/stdc++.h>
using namespace std;

bool comp(pair <char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}


int main()
{
    map <char, int> m;
    string str;
    cin >> str;
    
    for(int i = 0; i < str.size(); i++)
    {
        if(m.count( str[i] ))
            m[str[i]]++;
        else
            m[str[i]] = 1;    
    }
    sort(m.begin(), m.end(), comp);
    for(auto [key, value]: m)
        cout << key << ' ' << value << endl;
}