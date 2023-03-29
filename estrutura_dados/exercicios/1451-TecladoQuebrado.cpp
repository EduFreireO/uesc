#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt, aux;
    list <string> s;
    cin >> txt;
    bool front = false;
    for(int i = 0; i < txt.size(); i++)
    {
        if(txt[i] >= 65 && txt[i] < 91 || txt[i] >= 97 && txt[i] <= 122 || txt[i] == 95)
            aux.push_back(txt[i]);
        else if(txt[i] == '[' && aux != "")
        {
            s.push_back(aux);
            front = true;
            aux.clear();    
        }
        else if(front)
        {
            s.push_front(aux);
            front = false;
            aux.clear();
        }
        else
        {
            s.push_back(aux);
            s.clear();
        }

    }
    for(auto x: s)
        cout << x;
}