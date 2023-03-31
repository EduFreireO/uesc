#include <bits/stdc++.h>
/*
Pontos: 
° Não posso esquecer de dar clear no array. Para que ele não ocupe um espaço enorme
º Utilizar o reserve é muito util.
º Por default a funcao sort ordena um vector de pairs pelo pelo primeiro elemento do pair

*/
using namespace std;


bool ordena(const pair<int, int> &a, const pair <int, int> &b){
    if(a.second == b.second) 
        return a.first < b.first;
    return  a.second > b.second;
}


int main(){
    vector < pair <int, int> > brinquedos;    
    int t, n, k;
    
    int id,l1,l2,l3;
    
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        brinquedos.reserve(n);
        while(n--){
            scanf("%d %d %d %d",&id,&l1,&l2,&l3);
            brinquedos.push_back(make_pair(id, l1*l2*l3));   
        }
        // Ordena o segundo elemento do pair
        sort(brinquedos.begin(), brinquedos.end(), ordena); 
        // Ordena o primeiro elemento do pair
        sort(brinquedos.begin(), brinquedos.begin() + k);
        for(n = 0; n < k; n++){
            printf("%d",brinquedos[n].first);
            if(n != k - 1)
                printf(" ");
        }
        brinquedos.clear();
        printf("\n");
    }    

}