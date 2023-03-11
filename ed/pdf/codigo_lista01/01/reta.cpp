#include <bits/stdc++.h>
#include "reta.h"

using namespace std;

Reta:: Reta(double angular, double linear, double independete)
{
    if(angular != DBL_MAX && linear != DBL_MAX && independete != DBL_MAX)
    {
        this -> independente = independete; 
        this -> angular = angular / independente;
        this -> linear = linear / independente;
    }
    else if(angular != DBL_MAX && linear != DBL_MAX)
    {
        this -> angular = angular;
        this -> linear = linear;
    }
}

Reta :: bool horizontal()
{
    if(!angular)
        return true;
    return false; 
}

Reta :: bool vertical()
{
    if(!linear)
        return true;
    return false;    
}

Reta :: bool paralela(Reta comp)
{
    if(angular == comp.angular)
        return true;
}