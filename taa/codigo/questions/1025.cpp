#include <bits/stdc++.h>
using namespace std;

int get_index(int element, vector <int> &itens)
{
    auto index = lower_bound(itens.begin(), itens.end(), element);
    
    if(*index != element)
        return 0;
    return index - itens.begin() + 1;    
}   


int main()
{
    int numberOfItens, queries, aux, result, CASE = 1;
    
    
    while(cin >> numberOfItens >> queries && numberOfItens && queries){
        cout << "CASE# " << CASE << ":" << endl;

        vector <int> itens;

        while(numberOfItens)
        {
            cin >> aux;
            itens.push_back(aux);
            numberOfItens--;
        }

        sort(itens.begin(), itens.end());

        while(queries)
        {
            cin >> aux;
            result = get_index(aux, itens);

            if(result)
                printf("%d found at %d\n", aux , result);
            else
                printf("%d not found\n", aux);

            queries--;        
        }
        
        CASE++;
    }

}