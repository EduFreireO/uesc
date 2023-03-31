#include <bits/stdc++.h>
using namespace std;

int max_value_cards(int left, int right, int value ,vector <int> &cards)
{
    if(left == right)
        return value;
    
    bool wanderley = (right - left + 1) % 2;

    if(cards[left] > cards[right] && wanderley)
        left++; 
    else if(wanderley)
        right--;


    int left_choice = max_value_cards(left + 1, right, value + cards[left], cards);
    int right_choice = max_value_cards(left, right - 1, value + cards[right], cards);
    
    return max(left_choice, right_choice);    
}


int main()
{   
    int n, aux;
    while(cin >> n)
    {
        vector <int> cards;
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            cards.push_back(aux);
        }
        int result = max_value_cards(0, n - 1, 0, cards);
        cout << result << endl;
    }    
}