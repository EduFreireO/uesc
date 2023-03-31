#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, aux;
    string a;
    cin >> t >> n;
    while(t && n)
    {   int cont = 0;
        while(t--){ cin >> a >> aux; cont += aux - (aux % 3);}
        cout << cont / 2 << '\n';
        cin >> t >> n;
    }
}