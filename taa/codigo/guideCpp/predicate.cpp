#include <bits/stdc++.h>
using namespace std;

bool predicate(int a, int b)
{
    return a  < b;
}



int main()
{
    vector <int> v = {6,4,7,3,18,9};
    sort(v.begin(), v.end(), predicate);
    for(auto x: v)
        cout << x << "\t";
}