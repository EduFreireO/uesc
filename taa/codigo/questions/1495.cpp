#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfMatches, numberOfGoals;
    

    cin >> numberOfMatches >> numberOfGoals;
    int goal, against, points = 0;
    vector <pair <int, int>> records;
    while(numberOfMatches)
    {
        cin >> goal >> against;
        
        if(goal > against)
            points += 3;
        else if(goal == against){
            points += 3;
            numberOfGoals--;
        }
        else
            records.push_back({against, goal});
        numberOfMatches--;
    }
    sort(records.begin(), records.end());
    
    int i = 0;
    while(numberOfGoals > 0 && i < records.size())
    {
        if(numberOfGoals)
    }

}