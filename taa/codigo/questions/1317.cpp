#include <bits/stdc++.h>
using namespace std;
#define MAX 21
string s1, s2, s3;
int t1, t2;

void dfs(int vertex, 
vector <bool> &visited
,vector <vector<int>> &adj , vector <vector <string> > &atributes_person)
{
    if(visited[vertex]) return;
    visited[vertex] = true;
    if(adj[vertex].size() < t1) atributes_person[vertex].push_back(s1);
    else if(adj[vertex].size() < t2) atributes_person[vertex].push_back(s2);
    else atributes_person[vertex].push_back(s3);

    for(auto x: adj[vertex])
         dfs(x - 1,visited ,adj, atributes_person);
    
}

int main()
{
    int number_persons, aux;
    
    while(cin >> number_persons && number_persons) 
    {
        vector <vector <int> > adj(MAX); // (number_person)
        vector <vector <string> > atributes(MAX);
        for(int person = 0; person < number_persons; person++)
            while(cin >> aux && aux)
                adj[person].push_back(aux);
        

        int begin;
        while(cin >> begin && begin)
        {
            vector <bool> visited(number_persons, false);
            cin >> t1 >> t2 >> s1 >> s2 >> s3;
            dfs(begin - 1, visited, adj, atributes);
            vector <bool> :: iterator n = find(visited.begin(), visited.end(), false);
            while(n != visited.end())
            {   
                atributes[n - visited.begin()].push_back(s1);
                visited[n - visited.begin()] = true;
                n = find(visited.begin(), visited.end(), false); 
            }
        }
  
        for(int person = 0; person < number_persons; person++)
        {
            cin >> s1;
            cout << s1 << ':';
            for(int a = 0; a < atributes[person].size();a++)
                cout << ' ' << atributes[person][a];
            printf(" \n");    
        }

    }


}