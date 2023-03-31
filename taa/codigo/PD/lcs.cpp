#include <bits/stdc++.h>
using namespace std;

int lsi(vector <int> sequence){
    int tamanho = sequence.size();
    vector <int> aux(tamanho, 1);

    for(int j = 0; j < tamanho; j++)
        for(int i = 0; i < j; i++)
            if(sequence[j] > sequence[i] && aux[i] == aux[j]) 
               aux[j] += 1;
}
// sequence[j] >= sequence[i] -> Longest non dicreasing. 



int main()
{

}