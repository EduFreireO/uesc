#include <bits/stdc++.h>
using namespace std;

bool is_unique(string str)
{
    map <char, int> m;
    for(int i = 0; i < str.size(); i++)
    {   
        if(m.count(str[i]))
            return false;
        m[str[i]] = 1;    
    }
    return true;
}



int main()
{
    string a = "ABc";
    if(is_unique(a))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}