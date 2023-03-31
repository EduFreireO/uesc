#include <bits/stdc++.h>
using namespace std;

int knp(int number_max, int order, int *w, int *v)
{
    vector < vector <int> > tabulation(order + 1, vector <int>(number_max + 1));
    for(int i = 0; i <= order; i++)
        for(int j = 0; j <= number_max; j++)
        {
            if(!i || !j)   
                tabulation[i][j] = 0;
            else if(w[i - 1] <= j)
                tabulation[i][j] = max(tabulation[i - 1][j] ,v[i - 1] + tabulation[i - 1][j - w[i - 1]]);
            else
                tabulation[i][j] = tabulation[i - 1][j];
        }
        return tabulation[order][number_max];
}




int main()
{
    int order, number_max, time, n;
    while( cin >> order && order)
    {
        cin >> number_max;
        int w[order], v[order];
        
        for(int i = 0; i < order; i++)
        {
            cin >> time >> n;
            w[i] = n; v[i] = time;
        }

        int result = knp(number_max, order, w, v);
        cout << result << " min." << endl;
    }
}