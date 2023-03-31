#include <bits/stdc++.h>
using namespace std;

bool is_permutantion(string a, string b)
{   
    int lenght_a = a.size();
    int lenght_b = b.size();

    if(lenght_a != lenght_b)
        return false;
    
    bool is_used[lenght_b] = {false};
    int last_position = lenght_b - 1;

    for(int i = 0; i < lenght_a; i++)
        for(int j = 0; j < lenght_b; j++)
        {    
            if(j == last_position && a[i] != b[j])
                return false;
            
            else if(a[i] == b[j] && !is_used[j])
            {    
                is_used[j] = true; 
                break;   
            }       
        }

    
        return true;
}

int main()
{
    string a = "ola", b = "ols";

    cout << is_permutantion(a, b) << endl;
}