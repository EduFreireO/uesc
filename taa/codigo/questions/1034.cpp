#include <bits/stdc++.h>
using namespace std;

int coin_change(int len, vector <int> &coins)
{
    vector <int> bottom(len + 1, INT_MAX);
    bottom[0] = 0;
    for(int i = 1; i <= len; i++)
        for(auto coin : coins)
            if(coin <= i)
                bottom[i] = min(bottom[i], 1 + bottom[i - coin]);
    return bottom[len];            
}

int main()
{
    int t, number_blocks, len, aux;
    cin >> t;
    while(t--)
    {
        cin >> number_blocks >> len;
        vector <int> blocks(number_blocks);
        for(int i = 0; i < number_blocks; i++){ cin >> aux; blocks[i] = aux; }
        int result = coin_change(len, blocks);
        cout << result << endl;
    }

}