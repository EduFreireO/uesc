#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <char, int> m;
    m['C'] = 0;
    m['D'] = 1;
    m['H'] = 2;
    m['S'] = 3;
    

    vector < set <int, int > > players;
    int number_players, car_per_player, number_cards;
    cin >> number_players >> car_per_player >> number_cards;

    
    
    int value, i = 0 , game_cards = number_players * car_per_player; 
    char s;
    

    while(i < number_cards)
    {
        cin >> value >> s; 
        if(game_cards)
        {
            players[i].insert({ value, m[s] } );
            game_cards--;
            continue;
        }

        
    }
}