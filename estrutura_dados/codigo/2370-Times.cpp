#include <bits/stdc++.h>
using namespace std;

int main()
{
    int students, number_teams, power, index;
    string name;
    cin >> students >> number_teams; 
    vector <pair < int, string > > v;
    vector <set <string>> teams(number_teams, set<string>()); 
    while(students)
    {
        cin >> name >> power;
        v.push_back( { power, name } );
        students--;
    }
    sort(v.begin(), v.end());
    
    for(int i = 0, j = v.size() - 1; i < v.size(); i++, j--)
        teams[i % number_teams].insert(v[j].second);
    
    set <string> :: iterator it;
    
    for(int i = 0; i < teams.size(); i++)
    {
        it = teams[i].begin();
        printf("Time %d\n", i + 1);
        while(it != teams[i].end())
        {
            cout << *it << endl;
            it++; 
        }
        printf("\n");        
    }


}