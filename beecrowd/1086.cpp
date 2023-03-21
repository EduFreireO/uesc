#include <bits/stdc++.h>
using namespace std;

int verify(vector <int> &v, int m, int n, int l)
{
    if((m * 100) % l) return INT_MAX;
    
    
    int slots = (m * 100) / l;
    int begin = 0, end = v.size() - 1;
    int result = 0;
    while(end > begin && slots)
    {
        if(v[end] == n)
        {
            end--;
            slots--;
            result++;
        }
        else if(v[begin] + v[end] == n)
        {    
            begin++; end--;
            slots--;
            result += 2;
        }
        else if(v[begin] + v[end] > n)
            end--;
        else
            begin++;        
    }
    if(slots)
        return INT_MAX;
    return result;
}   

int main()
{
    int m, n;
    while(cin >> m >> n && m && n)
    {   
        int l, size, aux;
        vector <int> len;
        cin >> l >> size;
        while(size--)
        {
            cin >> aux;
            len.push_back(aux);
        }
        sort(len.begin(), len.end());
        int 
        a1 = verify(len, m, n, l), 
        a2 = verify(len, n, m, l);

        if(a1 == INT_MAX && a2 == INT_MAX)
            cout << "impossivel" << endl;
        else
            cout << min(a1, a2) << endl;    
    }
}

