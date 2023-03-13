#include <bits/stdc++.h>
using namespace std;

class Reta {

    private:
        double angular, linear, independente;
        
    public:
        
        Reta(double angular = DBL_MAX, double linear = DBL_MAX, double independente = DBL_MAX); // deve criar a reta (a/c)x + (b/c)y = 1
        bool horizontal(); // retorna true se a == 0, false caso contr´ario
        bool vertical(); // retorna true se b == 0, false caso contr´ario
        bool paralela(Reta r); // retorna true se (a == r.a == 0, ou b == r.b == 0, ou a/b==r.a/r.b)  false caso contr´ario.
};  