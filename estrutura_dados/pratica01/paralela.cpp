#include <bits/stdc++.h>
using namespace std;


class reta
{
    private:
        double a, b, c;
        
    public :
    reta(double a, double b, double c)
    {
        this -> a = a;
        this -> b = b;
        this -> c = c;
    }

    bool paralela(reta s)
    {
        double coeficiente1 = this -> a / this ->  b;
        double coeficiente2 = s.a / s.b;

        if(000000000.1 > coeficiente1 - coeficiente2) // numero magico.
            return true;
        return false;    
    }
};

    /* Compilou, so nao sei se funciona
int main()
{
    reta a1(1.234, 2.32 ,3.98);
    return 0;
}
    */