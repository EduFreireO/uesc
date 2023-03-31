#include <bits/stdc++.h>
using namespace std;
int main()
{

    string num1, num2;
    int casos;
    bool encaixa;
    cin >> casos;
    while(casos--)
    {
        encaixa = true;
        cin >> num1 >> num2 ;   
        for(int a = 1; a <= num2.length(); a++)
            if(num2[num2.length()-a] != num1[num1.length() - a ]){
                printf("nao encaixa\n");
                encaixa = false;
                break;
            }
        if(encaixa)    
            printf("encaixa\n");
    }

}