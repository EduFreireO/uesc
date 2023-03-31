#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, d, aux;
    cin >> a >> d;
    while(a && d)
    {
        vector <int> ata, def;
        while(a--){ cin >> aux; ata.push_back(aux); } 
        while(d--){ cin >> aux; def.push_back(aux); }
        sort(ata.begin(), ata.end());
        sort(def.begin(), def.end());
        int last_offense = ata[0];
        if(last_offense < def[1]) cout << "Y\n";
        else cout << "N\n";
        cin >> a >> d;
    } 
}