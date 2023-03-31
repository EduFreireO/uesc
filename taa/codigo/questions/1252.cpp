#include <bits/stdc++.h>
<<<<<<< HEAD
int n, mod;
using namespace std;


int main()
{
    int aux;
    bool ord(int a, int b);
    vector <int> nums;
    scanf("%d %d",&n, &mod);
    int qualquerCoisa;
    while(n != 0 & mod != 0){
    qualquerCoisa = n;
    while(n--)
    {
        scanf("%d", &aux);
        nums.push_back(aux);
    }
    sort(nums.begin(), nums.end(), ord);
    printf("%d %d\n",qualquerCoisa, mod);
    for(auto x : nums)
        printf("%d\n", x);
    printf("0 0\n");    
    nums.clear();
    scanf("%d %d",&n, &mod);    
   }
}
// Empate entre impar ou par -->impar;
// Empate entre impares --> Maior numero impar;
// Empate entre numeros pares --> Menor par;
bool ord(int a, int b)
{
    bool aImpar, bImpar;
    if(a % 2 == 0) aImpar = false; else aImpar = true;
    if(b % 2 == 0) bImpar = false; else bImpar = true;
    
    if(a % mod == b % mod)
    {   
        if(aImpar && bImpar)
        { 
            if(a > b)
                return a < b;
            return b < a;
        }    
        
        if(aImpar && !bImpar)
            return a < b;
        if(!aImpar && bImpar)
            return b < a;               
        if(!aImpar && !bImpar)
        {
            if(a > b)
                return a > b;
            return b > a;    
        }
    }
    if(a % mod < b % mod) return a < b;
    return b < a;
=======
using namespace std;

bool ordenacao(int i)
{
    
} 



int main()
{
    int n,m, aux;
    scanf("%d %d",&n, &m);
    vector < pair(int, int) > v;
    while(n--)
    {   
        scanf("%d", &aux);
        v.push_back(make_pair(aux, aux % m));
    }
    sort(v.begin(), v.end()); // Funcao de ordenação
>>>>>>> refs/remotes/origin/main
}