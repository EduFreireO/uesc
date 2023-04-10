#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number_apps, web_pages;
    cin >> number_apps >> web_pages;

    long int id, version;
    map < long int, pair < long int, bool > > m;
    
    while(number_apps)
    {
        cin >> id >> version;
        m[id] = {version, false};
        number_apps--;
    }

    while(web_pages)
    {
        cin >> id >> version;
        if(version > m[id].first)
        {
            m[id].first = version;
            m[id].second = true;
        }
        web_pages--;
    }
    
    for(auto [key, value]: m)
    {
        if(value.second)
            cout << key << " " << value.first << endl;
    }


}