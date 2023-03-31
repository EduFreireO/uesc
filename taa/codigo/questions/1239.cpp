#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    stack <char> pilha;
    map <char, string> abe, com;
    int cont1 = count(str.begin(), str.end(), '*');
    int cont2 = count(str.begin(), str.end(), '_');        
    while(getline(cin, str))
    {
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '*' && !(cont1 % 2)){
                str.replace(i, 1, "<b>");
                cont1--;
            }
            else if(str[i] == '*'){
                str.replace(i, 1, "</b>");
                cont1--;    
            }
            else if (str[i] == '_' && !(cont2 % 2))
            {    str.replace(i, 1, "<i>");
                 cont2--; 
            }
            else if(str[i] == '_')
            {
                str.replace(i, 1, "</i>");
                cont2--;
            }
        }
            cout << str << endl;       
    }
}