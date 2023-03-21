#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sai, cont;
    cin >> n;
    while(n) 
    {
        cin >> sai;
        while(sai)
        {
            stack<int> trem;
            cont=n-1;
            for(int entra=1; entra<= n; entra++) 
            {
                trem.push(entra);
                while(!trem.empty() && sai==trem.top()) 
                {
                    trem.pop();
                    cin >> sai; cont--;
                }
            }
    if(trem.empty()) cout << "Yes"<< endl;
    else cout << "No"<< endl;
    while(cont>=0) 
    {
    cin >> sai; cont--;
    }
    }
    cout << endl;
    cin >> n;
    }
}