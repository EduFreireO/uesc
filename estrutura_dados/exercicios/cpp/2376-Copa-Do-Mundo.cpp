#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> q;
    int s1, s2;
    int bef = 0, aft = 1;

    for(int i = 0; i < 8; i++)
    {
        cin >> s1 >> s2;
        if(s1 > s2)
            q.push(bef);
        else
            q.push(aft);
        bef+=2 ;aft+=2;        
    }
    int q_final = 4;
    while(q_final--)
    {
        cin >> s1 >> s2;
        bef = q.front();
        q.pop(); 
        aft = q.front();
        q.pop();

        if(s1 > s2) 
            q.push(bef);
        else
            q.push(aft);    
    }

    bef = q.front(); q.pop();
    aft = q.front(); q.pop();
    cin >> s1 >> s2;
    if(s1 > s2)
        q.push(bef);
    else
        q.push(aft);
    bef = q.front(); q.pop();
    aft = q.front(); q.pop();
    cin >> s1 >> s2;
    if(s1 > s2)
        q.push(bef);
    else
        q.push(aft);
    
    
    bef = q.front(); q.pop();
    aft = q.front(); q.pop();
    cin >> s1 >> s2;

    char a = 'A' + bef;
    char b = 'A' + aft;
    if(s1 > s2)
        cout << a << endl;
    else
        cout << b << endl;    


}