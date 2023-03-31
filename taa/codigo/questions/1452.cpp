#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, aux, i;
    char s;
    cin >> n >> m;
    while(n && m)
    {  map <int ,vector <char>> dict;
       int cont = 0;
       i = 0;
        while(n--)
        { cin >> aux; 
          while(aux--){
          cin >> s;   
          dict[i].push_back(s);}
          i++;  
        }
        while(m--)
        {
            cin >> aux;
            while(aux--)
            {   cin >> s;
                for(auto ite : dict)
                {   
                   for(i = 0; i < ite.second.size(); i++)
                    {
                        if(ite.second[i] == s) {cont++;break;} 
                    } 
                }

            }

        }
        cout << cont << endl;
        cin >> n >> m;
    }
}