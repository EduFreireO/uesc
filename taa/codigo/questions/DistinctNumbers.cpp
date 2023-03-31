#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <int> nums;
    int m,aux;

    cin >> m;
    while(m--)
    {   
        cin >> aux;
        nums.insert(aux);
    }
    cout << nums.size() << endl;

}
