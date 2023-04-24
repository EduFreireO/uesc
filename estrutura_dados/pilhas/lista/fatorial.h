#include "pilha.h"

int fatorial(int n) {
  pilha *p = NULL;
  int fat;

  while(n!=1) {
    p = empilhar(p,n);
    n--;
  }
  fat = 1; // 1!
  while(!ehvazia(p)) {
    fat *= topo(p);
    p = desempilhar(p);
  }
  return fat;
}
