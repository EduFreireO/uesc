#include "pilha.hpp"

int fatorial(int n) {
  pilha<int> p;
  int fat;

  while(n!=1) {
    p.empilhar(n);
    n--;
  }
  fat = 1; // 1!
  while(!p.ehvazia()) {
    fat *= p.topo();
    p.desempilhar();
  }
  return fat;
}
