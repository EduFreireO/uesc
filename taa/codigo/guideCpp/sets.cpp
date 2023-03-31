#include <bits/stdc++.h>
using namespace std;
/* 
Pontos :
    1) Ordenados => Por padrão em ordem crescete.
    2) Imutabilidade
    3) Não aceita elementos duplicados.

*/
int main()
{
    set <int> conjunto;
    set <int> ::iterator it;
    conjunto.insert(1);
    conjunto.insert(2);
    conjunto.insert(3);
    conjunto.insert(4);
    conjunto.insert(5);
    conjunto.insert(1); // Ponto  3. 

    conjunto.erase(5);
    conjunto.insert(6);
    conjunto.insert(5); // Ponto 1

    for(auto &it : conjunto)
        cout << it << endl;

    for(it = conjunto.begin(); it != conjunto.end(); it++)
        printf("%d ", *it);
}