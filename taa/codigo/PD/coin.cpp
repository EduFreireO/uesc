class Solution {
public:
    map <int, int> m;
    int coinChange(vector<int>& coins, int amount) {
        
        if(m.count(amount))
            return m[amount];
        if(!amount)
            return ;

        m[amount] = INT_MAX/2;
        for(auto coin: coins)
            if(coin <= amount)
                m[amount] = min(1 + coinChange(coins, amount - coin), m[amount]);        
        if(m[amount] != INT_MAX)
            return m[amount];
        return INT_MAX;    
    }
};