#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin >> len;

    list <pair <string, int> > circle;
    string name; int jump;

    while(len)
    {
        cin >> name >> jump;
        circle.push_back({name, jump});
        len--;
    }


    auto it = circle.begin(), begin = circle.begin(), end = --circle.end();
    jump = it -> second;
    while(circle.size() != 1)
    {
        if(!(jump % 2))
        {
            
            while(jump--)
            {
                if(it == end)
                    it = begin;
                it++;    
            }
        }
        else
        {
            while(jump--)
            {
                if(it == begin)
                    it = end;
                it--;
            }
        }
        jump = it -> second;
        circle.erase(it);
    }

    cout << circle.front().first;

}