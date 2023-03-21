#include <bits/stdc++.h>
using namespace std;

bool sum(int x, vector <int> &v)
{
    int begin = 0, end = v.size() - 1;
    while(begin != end)
    {
        if(v[begin] + v[end] > x)
            end--;
        else if(v[begin] + v[end] < x)
            begin++;
        else
            return true;                
    }
    return false;
}



int main()
{
    vector <int> v ={1,3,5,9,11};
    // x = 12 v = {1,3,5,9,11}
    cout << sum(13, v);

}