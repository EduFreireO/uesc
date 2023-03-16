// NAO IMPLEMENTEI DIVISAO PQ NAO SOU CORNO, OBG, E TBM NAO TESTEI 
#include <bits/stdc++.h>
using namespace std;

class Complexo
{
    private: 
        double a, b;

    public:
        Complexo(double a, double b)
        {
            this -> a = a;
            this -> b = b;
        }

        Complexo operator=(Complexo c)
        {
            Complexo aux(a, b);
            return aux;
        }

        Complexo operator-()
        {
            Complexo aux(-a, -b);
            return aux;
        }    

        Complexo operator+(Complexo c)
        {
            double real = this-> a + c.a;
            double imag = this-> b + c.b;
            Complexo aux(real, imag);
            return aux;
        }

        Complexo operator-(Complexo c)
        {
            double real = this-> a - c.a;
            double imag = this-> b - c.b;
            Complexo aux(real, imag);
            return aux;
        }

        Complexo operator*(Complexo c)
        {
            double real = this -> a * this -> b - c.a * c.b;
            double imag = this -> a * c.b - c.a * this -> b;
            Complexo aux(real, imag);
            return aux;
        }
        
        double modulo()
        {
            return sqrt(a * a + b * b);        
        }

        double real()
        {
            return this -> a;
        }
        double imaginario()
        {
            return this -> b;
        }    
};