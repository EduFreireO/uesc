    #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,aux, pairs = 0;
    scanf("%d %d", &n, &m);
    set <int> conj;
    set <int> :: iterator it,b;
    while(n--){
        scanf("%d", &aux);
        conj.insert(aux);
    }
    for(b = conj.begin(); b != conj.end()-- ; b++){
        it = conj.find(*b + m);
        if(it != conj.end())
            pairs += 1;
    }
    printf("%d", pairs);
    conj.clear();
}