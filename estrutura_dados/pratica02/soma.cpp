#include <bits/stdc++.h>
using namespace std;

void make_vector(vector <int> &v, int n)
{
    int aux;
    while(n--)
    {
        cin >> aux;
        v.push_back(aux);
    }
}


int main()
{
    int n;
    while(cin >> n)
    {
        vector <int> v1, v2 ;

        
        make_vector(v1, n);
        make_vector(v2, n);

        int begin = 0, end = n - 1;
        while(begin != n)
            printf("%d ", v1[begin++] + v2[end--]); 
        cout << "\n";
    }

}