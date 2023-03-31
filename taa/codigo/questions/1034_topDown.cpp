#include <bits/stdc++.h>
using namespace std;

int coin_change(int len, vector <int> &coins, map <int ,int> &memo)
{
    if(memo.count(len))
        return memo[len];

    memo[len] = INT_MAX;
    for(auto coin : coins)
        if(len >= coin)
            memo[len] = min(memo[len], 1 + coin_change(len - coin, coins, memo));        
    return memo[len];
}


int main()
{
    int t, number_blocks, len, aux;
    cin >> t;
    while(t--)
    {   
        map <int, int> memo;
        memo[0] = 0;
        cin >> number_blocks >> len;
        vector <int> blocks(number_blocks);
        for(int i = 0; i < number_blocks; i++){ cin >> aux; blocks[i] = aux; }
        int result = coin_change(len, blocks, memo);
        cout << result << endl;
    }

}