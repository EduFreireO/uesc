#ifndef __PILHA_H__
#define __PILHA_H__
#include <malloc.h>

typedef int obj_t;
typedef int bool;
enum{false,true};

typedef struct pilha {
  obj_t item;
  struct pilha *prox;
} pilha;

pilha *empilhar(pilha *p, obj_t obj);
pilha *desempilhar(pilha *p);
obj_t topo(pilha *p);
bool ehvazia(pilha *p);
int tamanho(pilha *p);

pilha *empilhar(pilha *p, obj_t obj) {
  pilha *cel = malloc(sizeof(pilha));
  cel->item = obj;
  cel->prox = p;
  p = cel;
  return p;
}

pilha *desempilhar(pilha *p) {
  pilha *cel = p;
  if(p) {
    p = p->prox;
    free(cel);
  }
  return p;
}

obj_t topo(pilha *p) {
  obj_t val = 0;
  if(p) val = p->item;
  return val;
}

bool ehvazia(pilha *p) {
  return (p ? false : true);
}

int tamanho(pilha *p) {
  pilha *pp = p;
  int cont = 0;
  while (pp) {
    pp = pp->prox;
    cont++;
  }
  return cont;
}

#endif // __PILHA_H__
