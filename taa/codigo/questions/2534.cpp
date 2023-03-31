#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    vector <int> notas;
    
    int aux;
    while(cin >> n >> q){
        while(n--){
            cin >> aux;
            notas.push_back(aux);
        }
        sort(notas.rbegin(), notas.rend()); // r -. reversed sort.

        while(q--){
            cin >> aux;
            cout << notas[aux - 1] << '\n';
        }
        notas.clear(); // PQ???


    }
}