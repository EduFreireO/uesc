#include <bits/stdc++.h>
using namespace std;

class Racional
{
    private:
        int num, den;
        
        int mdc(int a, int b)
        {
        if(!b) return a;
        return mdc(b, a % b);
        }
    
    public:
        Racional(int num, int den)
        {
            this -> num = num;
            this -> den = den;
        }
        void  reduzir()
        {
            int maior = max(num, den);
            int _min = min(num, den);
            while(_min > 0)
            {
                int aux = maior % _min;
                maior = _min;
                _min = aux; 
            }
            this -> num /= maior;
            this -> den /= maior; 
        }

        int numerador()
        {
            return this -> num;
        } 
        int denominador()
        {
            return den;
        } 
};

/*Agora ta testado e 100% atualizado
int main()
{   
     
    Racional a(2,4);
    cout << a.numerador() << '\t' << a.denominador() << endl;
    a.reduzir();
    cout << a.numerador() << '\t' << a.denominador() << endl;

}
*/