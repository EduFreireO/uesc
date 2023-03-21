#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <double> bio(30);
    double max = sin(0.126 - 1.6);
    
    for(int i = 0; i < bio.size(); i++)
    {
        bio[i] = sin(0.126 * (i + 1) - 1.6);
        cout << bio[i] << endl;
        if(bio[i] > max) max = bio[i];
    }

    cout << max;
}