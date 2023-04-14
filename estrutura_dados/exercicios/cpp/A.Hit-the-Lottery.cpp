#include <bits/stdc++.h>


using namespace std;

int main()
{
    int c[] = {1, 5, 10, 20, 100};
   // TLE ? 
    map <long  int,long  int> m;
    m[1] = 1;
    int budget;
    cin >> budget;
    for(long int i = 2; i <= budget; i++)
    {
        m[i] = INT_MAX;
        for(int coin: c)
        {
            if(coin > i)
                break;
            m[i] = min(m[i], m[i - coin] + 1);     
        }
    }
    cout << m[budget] << endl;

}