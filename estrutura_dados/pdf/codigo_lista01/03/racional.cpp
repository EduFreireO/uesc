#include <bits/stdc++.h>
#include "racional.hpp"
using namespace std;

racional :: racional(int num, int den)
{
    this -> num = num; 
    this -> den = den;
}

int racional :: mdc(int a, int b)
{
    if(!b) return a;
    return mdc(b, a % b);
}

void racional :: reduzir()
{
    int result_mdc = mdc(max(num,den), min(num, den));
    this -> num = num / result_mdc;
    this -> den = den / result_mdc;
}

bool racional :: operator<(racional r)
{
    double v = (double) num / den;
    double v2 = (double) r.num / r.den;
    if(v < v2)
        return true;
    return false;    
}

bool racional :: operator>(racional r)
{
    double v = (double) num / den;
    double v2 = (double) r.num / r.den;
    if(v > v2)
        return true;
    return false;    
}

bool racional :: operator==(racional r)
{
    double v = (double) num / den;
    double v2 = (double) r.num / r.den;
    if(v == v2)
        return true;
    return false;    
}