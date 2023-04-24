#include <stdio.h>
#include "pilha.h"

int main() {
  pilha *p;
  p = NULL;
  p = empilhar(p,5); printf("%d --> %d\n", tamanho(p),topo(p));
  p = empilhar(p,4); printf("%d --> %d\n", tamanho(p),topo(p));
  p = empilhar(p,3); printf("%d --> %d\n", tamanho(p),topo(p));
  p = empilhar(p,2); printf("%d --> %d\n", tamanho(p),topo(p));
  p = desempilhar(p); printf("%d --> %d\n", tamanho(p),topo(p));
  p = desempilhar(p); printf("%d --> %d\n", tamanho(p),topo(p));
  p = empilhar(p,7); printf("%d --> %d\n", tamanho(p),topo(p));
  p = empilhar(p,8); printf("%d --> %d\n", tamanho(p),topo(p));
  while(!ehvazia(p)) {
    p = desempilhar(p); printf("%d --> %d\n", tamanho(p),topo(p));
  } return 0;
}
