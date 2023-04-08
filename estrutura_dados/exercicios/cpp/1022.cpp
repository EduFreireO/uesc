#include <bits/stdc++.h>
using namespace std;


int euclides(int a, int b)
{
    a = abs(a); b = abs(b);
    if(!b) return a;
    return euclides(b, a % b);
}
// MDC
int main()
{
    int number_tests;
    cin >> number_tests;

    while (number_tests--)
    {
        char operation, aux;
        int n1, d1, n2, d2;

        cin >> n1 >> aux >> d1 >> operation >> n2 >> aux >> d2;

        int n, d, mdc;
        
        if(operation == '+')
        {
            n = n1 * d2 + n2 * d1;
            d = d1 * d2;
            mdc = euclides(max(n, d), min(n,d));
            printf("%d/%d = %d/%d\n", n, d, n/mdc, d/mdc);
        }
        else if(operation == '-')
        {
            
            n = n1 * d2 - n2 * d1;
            d = d1 * d2;
            mdc = euclides(max(n, d), min(n,d));
            printf("%d/%d = %d/%d\n", n, d, n/mdc, d/mdc);
        }
        else if(operation == '*')
        {
            n = n1 * n2;
            d = d1 * d2;
            mdc = euclides(max(n, d), min(n,d));
            printf("%d/%d = %d/%d\n", n, d, n/mdc, d/mdc);
        }
        else
        {

            n = n1 * d2;
            d = n2 * d1;
            mdc = euclides(max(n, d), min(n,d));
            printf("%d/%d = %d/%d\n", n, d, n/mdc, d/mdc);
        }
    }    
}