#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len, i = 0 ,aux;
    cin >> len;
    int v[len];
    while(i < len)
        cin >> v[i++];

    sort(v, v + len);
    int contest = 0; i = 1;
    for(int element: v)
        if(element >= i)
        {
            contest++;
            i++;
        }
    cout << contest << "\n";
}