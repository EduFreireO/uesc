#include <bits/stdc++.h>
using namespace std;

bool menor(int i){
    return !(i > 127);
}
int main(){
    int n,j,x;
    vector <int> alt;
    vector <int>::iterator it;
    char letras[] = {'A','B','C','D','E'};

    while(cin >> n){
        while(n--){
        j = 5;
        while(j--){
            cin >> x;
            alt.push_back(x);
        }
        j = count_if(alt.begin(), alt.end(), menor);
    
        if(j == 1){ 
            it = find_if(alt.begin(), alt.end(), menor);
            printf("%c\n", letras[it - alt.begin()]);
        }
        else
            printf("*\n");
        alt.clear();                   
        }
    }
}