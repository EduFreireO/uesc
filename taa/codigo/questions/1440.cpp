#include <bits/stdc++.h>
using namespace std;

bool comp(vector<vector<int> > a, vector<vector<int>> b)
{
    if(a[0] < b[0])
        return a < b;
    if(a[0] == b[0] && a[1] < b[1])
        return a < b;
    if(a[0] == b[0] && a[1] == b[1] && a[2] < b[2])
        return a < b;

    return b < a;           
}
int main()
{

}