#include <bits/stdc++.h>
using namespace std;

void makeVector(vector <int> &v, int len)
{
    int aux;
    for(int i = 0; i < len; i++)
    {
        cin >> aux; v.push_back(aux);
    }
    sort(v.begin(), v.end());  
}
int setDiff(vector <int> &a, vector <int> b)
{
    int i;
    for(i = 0; i < b.size(); i++)
        if(a[i] != b[i])
            return a[i];
    return a[i];        
}

int main()
{
    int mistakes, error;
    vector <int> v1, v2, v3;
    
    cin >> mistakes;
    makeVector(v1, mistakes);
    makeVector(v2, mistakes - 1);
    makeVector(v3, mistakes - 2);

    cout << setDiff(v1, v2) << endl;
    cout << setDiff(v2, v3) << endl;


}