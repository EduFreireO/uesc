#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;

int main()
{
    int n, k;
    
    
    while (cin >> n >> k && n)
    {   
    
        stack <pi> carros;

        bool b = true;
        int v, v2;

        cin >> v >> v2;
        carros.push({v, v2});
        n--;
        while(n--)
        {
            cin >> v >> v2;
            while(!carros.empty() && v >= carros.top().second)
                carros.pop();
            
            if(!carros.empty() && v2 > carros.top().second || carros.size() == k)
                b = false;
            
            carros.push({v, v2});
            
        }

        if(b)
            cout << "Sim" << endl;
        else
            cout <<  "Nao" << endl;    
        }
}