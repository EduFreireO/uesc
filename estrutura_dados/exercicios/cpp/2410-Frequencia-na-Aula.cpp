#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, aux;
    //set < int > s;
    unordered_set < int > s;
    cin >> size;
    while(size)
    {
        cin >> aux;
        s.insert(aux);
        size--;
    }

    cout << s.size() << endl;
}