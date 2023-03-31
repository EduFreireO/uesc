#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n, a;
    int fibo(int n, int acc);
    int calculaNumber(int n);
    cin >> n; 
    while(n--)
    {
    cin >> a;    
    printf("fib(%d) = %d calls = %d\n", a, fibo(a,0), calculaNumber(a));
    }
}
int calculaNumber(int n)
{   
    if(n == 2 || n == 1) return 1;
    else if(n == 0) return 0;
    else
        return calculaNumber(n - 1) + calculaNumber(n - 2);    
}  
int fibo(int n, int acc)
{   
    if(n == 2)
        return acc + 2; // 2
    if(n == 1)
        return acc ;     
    else  {
    int anterior = fibo(n - 1, acc + 1);
    int posteriro = fibo(n - 2, 1);   
    return anterior + posteriro;}
}

