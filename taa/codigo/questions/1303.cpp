#include <bits/stdc++.h>
using namespace std;

bool predicate(vector <int> a, vector <int> b)
{    
    int score_a = a[0], score_b = b[0];
    int points_a = a[1], points_b = b[1];
    int id_a = a[3], id_b = b[3];
    float cesta_average_a = (float) a[1]/a[2];
    float cesta_average_b = (float) b[1]/b[2]; 

    
  
    if(score_a > score_b)
        return a > b;
    else if(score_b > score_a)
        return a > b;
    
    else if(score_a == score_b && cesta_average_a > cesta_average_b)
        return a > b;
    else if(score_a == score_b && cesta_average_b > cesta_average_a)
        return a > b;

    else if(score_a == score_b && cesta_average_b == cesta_average_a && points_a > points_b)
        return a > b;
    else if(score_a == score_b && cesta_average_b == cesta_average_a && points_b > points_a)
        return a > b;
    
    else if(score_a == score_b && cesta_average_b == cesta_average_a && points_b == points_a && id_a > id_b)
        return a < b;

    return a < b;                
    // if(score_b   > score_a)
    //     return a > b;
    // else if(score_a == score_b && cesta_average_b > cesta_average_a)
    //     return a > b;
    // else if(score_a == score_b && cesta_average_b == cesta_average_a && points_b > points_a)
    //     return a > b;        
    // else if(score_a == score_b && cesta_average_b == cesta_average_a && points_b == points_a && id_b < id_a)    
    //     return a < b;
    // return a < b;    
           
}




int main()
{

    int number_teams, number_of_games, instance = 1;
    while(cin >> number_teams && number_teams)
    {
        vector <vector <int> > records(number_teams + 1, vector <int>(4, 0));
        int home, road, points_home, points_road;

        number_of_games = number_teams * (number_teams - 1) / 2;    
        while(number_of_games)
        {
            cin >> home >> points_home >> road >> points_road;

            if(points_home > points_road)
            {
                records[home][0] += 2;
                records[road][0] += 1;
            } 
            else
            {
                records[home][0] += 1;
                records[road][0] += 2;
            }

            records[home][1] += points_home;
            records[road][1] += points_road;

            records[home][2] += points_road;
            records[road][2] += points_home;


            records[home][3] = home;
            records[road][3] = road;

            number_of_games--;
        }
        sort(records.begin() + 1, records.end(), predicate);
        printf("Instancia %d\n", instance++);
        for(int x = 1; x < records.size(); x++)
            cout << records[x][3] << " ";  
        printf("\n\n");    
    }

} 