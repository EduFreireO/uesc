#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j;
    vector <int> recebidos;

    for(i = 0; i < 20; i++){
        cin >> j;
        recebidos.push_back(j);
    }
    for(i = 0, j = 19; i <  recebidos.size(); i++, j--)
        printf("N[%d] = %d\n",i,recebidos[j]);


    return 0;
}