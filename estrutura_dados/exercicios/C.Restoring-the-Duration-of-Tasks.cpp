#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tasks, aux, test;
    cin >> test;
    while(test--)
    {
        queue <int> b, e;
        cin >> tasks;
        for(int i = 0; i < tasks; i++)
        {
            cin >> aux;
            b.push(aux);
        }
        for(int i = 0; i < tasks; i++)
        {
            cin >> aux;
            e.push(aux);
        }

        int ini = b.front(), ter = e.front();
        b.pop(); e.pop();   
        while(tasks)
        {
            cout << ter - ini << " ";
            if(b.front() >= ter)
            {
                ini = b.front();
                ter = e.front();

            }
            else
            {
                ini = ter;
                ter = e.front();
            }
            b.pop(); e.pop();  
            tasks--;
        }
        cout << endl;
    }
}