#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> x;
    multiset <string> palavras;
    int n,m,j;
    string aux;
    cin >> n >> m;

    while(n--){
        cin >> aux >> j;
        x[aux] = j;
    }
    
    while(m--)
    {  
       j = 0; 
       cin >> aux; 
       // Colocar as palavras em um mutiset??? 
       while( aux != ".")
       {
        palavras.insert(aux);
        cin >> aux;
       }
       
       for(auto [key,value]: x)
       {
        j += palavras.count(key) * value; // count não é eficiente?? 
       }

        cout << j << endl;
        palavras.clear();
           
    } 


}