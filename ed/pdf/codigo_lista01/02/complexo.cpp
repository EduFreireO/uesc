#include <bits/stdc++.h>
#include "complexo.h"
using namespace std;

/*
Implementar os metodos:
1) *
2) /
3) Get_real, get_imag 
*/
complexo :: complexo(double real, double imag)
{
   this -> real = real;
   this -> imag = imag;
}

complexo complexo :: conjugado() // Type class :: name_method
{
    complexo aux;
    aux.real = this -> real;
    aux.imag = - this -> imag;
    return aux;
}

complexo complexo :: operator=(complexo c)
{
    complexo aux;
    aux.real = c.real;
    aux.imag = c.imag;
    return aux;
}

void complexo :: operator-()
{
    complexo aux;
    aux.real = - this -> real;
    aux.imag = - this -> imag;
}

void complexo :: operator+(complexo c)
{
    complexo aux;
    aux.real = this -> real + c.real;
    aux.imag = this -> imag + c.imag;
}

double complexo :: modulo()
{
    complexo aux;
    aux.real = this -> real;
    aux.imag = this -> imag;
    return aux.real * aux.real + aux.imag * aux.imag;
}