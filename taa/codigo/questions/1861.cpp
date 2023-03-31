#include <bits/stdc++.h>
using namespace std;

int main()
{
    string killer, dead;
    map <string, pair <int, bool>>  history;
    bool is_dead;
    
    while(cin >> killer >> dead)
    {
        if(history.count(killer))
            history[killer].first++;
        else
            history[killer] = {1, true};

        if(history.count(dead))
            history[killer].second = false;
        else
            history[killer] = {0, false};                
    }
    cout << "HALL OF MURDERERS" << endl;
    for(auto [key, value]: history)
    {
        is_dead = history[key].second;
        if(!is_dead)
            cout << key << ' ' << value.first << endl;
    }

}