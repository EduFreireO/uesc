#include <bits/stdc++.h>
using namespace std;
typedef pair <int, int> pii;

int main()
{
    
    int test;
    cin >> test;
    while(test--)
    {
        priority_queue<pii , vector<pii>, greater<pii> > pq;

        list < int > stack, l;
        map < int, pair <  int, bool >  > list_presents;

        int len_stack, len_list;
        cin >> len_stack >> len_list;

        int aux;

        while(len_stack)
        {
            cin >> aux;
            stack.push_back(aux);
            len_stack--;
        }



        for(int i = 0; i < len_list; i++)
        {
            cin >> aux;
            l.push_back(aux);
            list_presents[aux].first = i;
            list_presents[aux].second = true;
        }



        int count = 0;
        while(!l.empty())
        {
            int item = l.front(); l.pop_front();
            auto present = stack.begin();
            int dist = 0;

            while(*present != item)
            {
                if(list_presents.count(*present) && list_presents[*present].second)
                {    
                    pq.push( { list_presents[*present].first , *present } );
                    list_presents[*present].second = false;
                    stack.erase(present);
                }
                dist++;
                present++;    
            }
            while(!pq.empty())
            {
                aux = pq.top().second;
                pq.pop();
                stack.push_back(aux);
            }
            stack.erase(present);
            count += 2 * dist + 1;

        }
        cout << count;    
    }
}